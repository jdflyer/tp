import struct
from sys import argv
import libbti
import os
from pathlib import Path

def cStr(data, offset):
    end = data.find(b'\x00',offset)
    return data[offset:end]

def extractTEX(name, data, writefunc):
    texNum, unk, texResOffset, texNameTableOffset = struct.unpack(">HHII",data[8:20])
    
    print(f"{texNum} {texResOffset:x} {texNameTableOffset:x}")

    numTexNames = struct.unpack(">H",data[texNameTableOffset:texNameTableOffset+2])[0]

    texNames = []

    offset = texNameTableOffset+4
    for i in range(numTexNames):
        unk2, tableOffset = struct.unpack(">HH",data[offset:offset+4])
        string = cStr(data,tableOffset+texNameTableOffset)
        texNames.append(name / str(string,"ascii"))
        print(f"{unk2:x} {tableOffset:x} {string}")
        offset += 4 
    
    libbti.decodeImages(texNum,texNames,data[0x20:texNameTableOffset],writefunc)


def extractBMD(name, data, writefunc):
    os.makedirs(name,exist_ok=True)

    magic1, magic2, fileSize, blockNum, magic3, unk2, unk3, unk4, = struct.unpack(">4s4sII4sIII",data[0:0x20])
    assert magic1 == b'J3D2' and magic2 == b'bmd3' and magic3 == b'SVR3', "Tool only supports J3D2 with bmd3"
    print(f"{magic1} {magic2} {blockNum}")

    offset = 0x20
    for i in range(blockNum):
        blockName, blockSize = struct.unpack(">4sI",data[offset:offset+8])
        print(blockName)
        
        match blockName:
            case b'TEX1':
                blockDir = name / str(blockName,'ascii')
                os.makedirs(blockDir,exist_ok=True)
                extractTEX(blockDir,data[offset:offset+blockSize],writefunc)
                
            case _:
                writefunc(name / str(blockName,'ascii'),data[offset:offset+blockSize])
        offset += blockSize



def writeFunction(name, data):
    with open(name,"wb") as f:
        f.write(data)

def main():
    if len(argv) < 3:
        print(f"Usage: {argv[0]} input.bmd output.bmd/ or {argv[0]} input.bmd/ output.bmd")
        exit(1)
    inputFile = argv[1]
    outputFile = argv[2]

    if os.path.exists(inputFile) and os.path.isfile(inputFile):
        # input is a bmd file
        data = None
        with open(inputFile,"rb") as f:
            data = f.read()
        extractBMD(Path(outputFile),data,writeFunction)
    else:
        pass
        # input is a bmd dir
    
    
if __name__ == "__main__":
    main()
