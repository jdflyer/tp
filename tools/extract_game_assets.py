import os
import sys
import libarc
import oead

"""
Extracts the game assets and stores them in the game folder
Usage: `python tools/extract_game_assets.py`
"""

fstInfoPosition = 0x424
bootPosition = 0x0
bootSize = 0x440
bi2Position = 0x440
bi2Size = 0x2000
apploaderPosition = 0x2440
dolInfoPosition = 0x420

numFileEntries = 0

"""
Returns the offset address and size of fst.bin
"""


def getFstInfo(handler, fstOffsetPosition):
    fstOffset = int.from_bytes(bytearray(handler.read(4)), byteorder="big")
    handler.seek(
        fstOffsetPosition + 4
    )  # Get the size which is 4 bytes after the offset
    fstSize = int.from_bytes(bytearray(handler.read(4)), byteorder="big")
    return fstOffset, fstSize


"""
Parses the fst.bin into a list of dictionaries containing
the file entry type, the file/folder name, the ISO file offset/parent file entry, the file size/last file entry
"""


def parseFstBin(fstBinBytes):
    currentByte = 0
    numFileEntries = int.from_bytes(
        fstBinBytes[10:12], byteorder="big"
    )  # fst.bin offset
    stringTableOffset = numFileEntries * 0xC

    ret = []

    while currentByte != (numFileEntries * 12):
        currentByte += 12

        # lazy
        if currentByte == (numFileEntries * 12):
            break

        fileFolder = fstBinBytes[currentByte]
        filenameOffset = int.from_bytes(
            fstBinBytes[currentByte + 1 : currentByte + 4], byteorder="big"
        )
        fileOffsetOrParentEntryNum = int.from_bytes(
            fstBinBytes[currentByte + 4 : currentByte + 8], byteorder="big"
        )
        fileSizeOrLastEntryNum = int.from_bytes(
            fstBinBytes[currentByte + 8 : currentByte + 12], byteorder="big"
        )
        currentFilenameOffset = stringTableOffset + filenameOffset

        # Figure out the filename by checking for null string terminator
        i = 0
        while fstBinBytes[currentFilenameOffset + i] != 0:
            i += 1

        fileName = (
            fstBinBytes[currentFilenameOffset : currentFilenameOffset + i]
        ).decode()

        if fileFolder == 0:
            ret.append(
                {
                    "type": "File",
                    "fileName": fileName,
                    "fileOffset": fileOffsetOrParentEntryNum,
                    "fileSize": fileSizeOrLastEntryNum,
                }
            )
        else:
            ret.append(
                {
                    "type": "Folder",
                    "folderName": fileName,
                    "parentFolderEntryNumber": fileOffsetOrParentEntryNum,
                    "lastEntryNumber": fileSizeOrLastEntryNum,
                }
            )

    return ret


"""
Write the current folder to disk and return it's name/last entry number
"""


def writeFolder(parsedFstBin, i):
    folderPath =  i["folderName"] + "/"
    lastEntryNumber = i["lastEntryNumber"]

    if i["parentFolderEntryNumber"] == 0:
        if not os.path.exists(folderPath):
            os.makedirs(folderPath)
    else:
        parentFolderEntry = parsedFstBin[i["parentFolderEntryNumber"] - 1]
        while True:
            folderPath = parentFolderEntry["folderName"] + "/" + folderPath
            if parentFolderEntry["parentFolderEntryNumber"] == 0:
                break

            nextParentFolderEntryNumber = parentFolderEntry["parentFolderEntryNumber"]
            parentFolderEntry = parsedFstBin[nextParentFolderEntryNumber - 1]

        if not os.path.exists(folderPath):
            os.makedirs(folderPath)

    return folderPath, lastEntryNumber


"""
Use the parsed fst.bin contents to write assets to file
"""

def recursiveArcWrite(arc,node,path,customIndexes):
    if not os.path.exists(path):
        os.makedirs(path)
    directoriesInNode = arc._directories[(node.directory_index):(node.directory_index+node.directory_count)]
    dirListToWrite = ""
    for dir in directoriesInNode:
        name = ""
        if isinstance(dir,libarc.Folder):
            if dir.name != "." and dir.name != "..":
                newNode = arc._nodes[dir.data_offset]
                if newNode.name != dir.name:
                    print("Invalid node!")
                    exit(1)
                recursiveArcWrite(arc,newNode,path+dir.name+"/",customIndexes)
                name = dir.name
        elif isinstance(dir,libarc.File):
            if dir.type != 0x1100 and dir.type != 0x9500 and dir.type != 0xA500:
                print("Unknown type in "+str(arc))
            name = writeFile(path+dir.name,dir.data)

        if name!="":
            if customIndexes==True:
                dirListToWrite = dirListToWrite+name+","+str(dir.index)+"\n"
            else:
                dirListToWrite = dirListToWrite+name+"\n"
    
    dirListToWrite = dirListToWrite[0:-1]
    open(path+"_files.txt","w").write(dirListToWrite)

def writeFile(path,data):
    if path[-4:] == ".arc":
        #print(path)
        if data[:4] == bytearray("Yaz0","utf-8"):
            #print("Yaz0 compressed arc")
            splitname = os.path.splitext(path)
            ext = splitname[1]
            name = splitname[0]
            data = oead.yaz0.decompress(data)
            path = name+".c"+ext


        if data[:4] != bytearray("RARC","utf-8"):
            print("Incorrect arc header for "+path)
            open(path,"wb").write(data)
            return os.path.basename(path)

        arc = libarc.read(data)
        if not os.path.exists(path):
            os.makedirs(path)

        #print(arc._root)
        #print(arc._nodes)
        #print(arc._directories)
        open(path+"/_arc.txt","w").write(str(arc))
        customIndexes = False
        if arc.unknown2==0x0:
            #The ID allocation is custom in the arc, write to files.txt
            open(path+"/_arcHasCustomIndexes","w").write("")
            open(path+"/_files.txt","w").write(arc._root.name+","+str(arc._root.directory_index))
            customIndexes = True
        else:
            open(path+"/_files.txt","w").write(arc._root.name)

        recursiveArcWrite(arc,arc._root,path+"/"+arc._root.name+"/",customIndexes)
        return os.path.basename(path)
    elif data[:4] == bytearray("Yaz0","utf-8"):
        data = oead.yaz0.decompress(data)
        splitname = os.path.splitext(path)
        ext = splitname[1]
        name = splitname[0]
        open(name+".c"+ext,"wb").write(data)
        return os.path.basename(name+".c"+ext)
    else:
        open(path,"wb").write(data)
        return os.path.basename(path)

def writeAssets(parsedFstBin, handler):
    # Write the folder structure and files to disc
    j = 0
    folderStack = []
    if not os.path.exists("./files/"):
            os.makedirs("./files/")
    os.chdir('./files/')
    folderStack.append({"folderName": "./", "lastEntryNumber": numFileEntries})
    for i in parsedFstBin:
        j += 1
        if i["type"] == "Folder":
            currentFolder, lastEntryNumber = writeFolder(parsedFstBin, i)
            folderStack.append(
                {"folderName": currentFolder, "lastEntryNumber": lastEntryNumber}
            )
        else:
            handler.seek(i["fileOffset"])
            data = bytearray(handler.read(i["fileSize"]))
            writeFile((folderStack[-1]["folderName"] + i["fileName"]),data)

            while folderStack[-1]["lastEntryNumber"] == j + 1:
                folderStack.pop()

def writeSys(boot,bi2,apploader,dol,fst):
    if not os.path.exists("./sys/"):
        os.makedirs("./sys/")
    open("./sys/boot.bin","wb").write(boot)
    open("./sys/bi2.bin","wb").write(bi2)
    open("./sys/apploader.img","wb").write(apploader)
    open("./sys/main.dol","wb").write(dol)
    open("./sys/fst.bin","wb").write(fst)

def getDolInfo(disc):
    disc.seek(dolInfoPosition)
    dolOffset = int.from_bytes(bytearray(disc.read(4)), byteorder="big")
    dolSize = 0
    for i in range(7):
        disc.seek(dolOffset+(i*4))
        segmentOffset = int.from_bytes(bytearray(disc.read(4)), byteorder="big")
        disc.seek(dolOffset+0x90+(i*4))
        segmentSize = int.from_bytes(bytearray(disc.read(4)), byteorder="big")
        if (segmentOffset+segmentSize)>dolSize:
            dolSize = segmentOffset + segmentSize
    
    for i in range(11):
        disc.seek(dolOffset+0x1c+(i*4))
        dataOffset = int.from_bytes(bytearray(disc.read(4)), byteorder="big")
        disc.seek(dolOffset+0xac+(i*4))
        dataSize = int.from_bytes(bytearray(disc.read(4)), byteorder="big")
        if (dataOffset+dataSize)>dolSize:
            dolSize = dataOffset + dataSize
    
    return dolOffset, dolSize



def extract(path):
    with open(path, "rb") as f:
        # Seek to fst offset information and retrieve it
        f.seek(fstInfoPosition)
        fstOffset, fstSize = getFstInfo(f, fstInfoPosition)

        f.seek(bootPosition)
        bootBytes = bytearray(f.read(bootSize))

        f.seek(bi2Position)
        bi2Bytes = bytearray(f.read(bi2Size))

        f.seek(apploaderPosition+0x14)
        apploaderSize = int.from_bytes(bytearray(f.read(4)), byteorder="big")
        f.seek(apploaderPosition+0x18)
        trailerSize = int.from_bytes(bytearray(f.read(4)), byteorder="big")
        apploaderMainSize = 0x20 + apploaderSize + trailerSize
        f.seek(apploaderPosition)
        apploaderBytes = bytearray(f.read(apploaderMainSize))
        dolOffset, dolSize = getDolInfo(f)
        f.seek(dolOffset)
        dolBytes = bytearray(f.read(dolSize))
        

        # Seek to fst.bin and retrieve it
        f.seek(fstOffset)
        fstBinBytes = bytearray(f.read(fstSize))

        writeSys(bootBytes,bi2Bytes,apploaderBytes,dolBytes,fstBinBytes)

        # Parse fst.bin
        parsedFstBin = parseFstBin(fstBinBytes)

        # Write assets to file
        writeAssets(parsedFstBin, f)


def main():
    extract(sys.argv[1])


if __name__ == "__main__":
    main()
