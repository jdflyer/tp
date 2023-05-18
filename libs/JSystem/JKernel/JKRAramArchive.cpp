//
// Generated By: dol2asm
// Translation Unit: JKRAramArchive
//

#include "JSystem/JKernel/JKRAramArchive.h"
#include "JSystem/JKernel/JKRAram.h"
#include "JSystem/JKernel/JKRDvdAramRipper.h"
#include "JSystem/JKernel/JKRDvdRipper.h"
#include "JSystem/JKernel/JKRDvdFile.h"
#include "JSystem/JUtility/JUTException.h"
#include "MSL_C/math.h"
#include "MSL_C/string.h"
#include "dol2asm.h"
#include "dolphin/os/OSCache.h"
#include "global.h"

//
// Forward References:
//

extern "C" void __ct__14JKRAramArchiveFlQ210JKRArchive15EMountDirection();
extern "C" void __dt__14JKRAramArchiveFv();
extern "C" void open__14JKRAramArchiveFl();
extern "C" void fetchResource__14JKRAramArchiveFPQ210JKRArchive12SDIFileEntryPUl();
extern "C" void fetchResource__14JKRAramArchiveFPvUlPQ210JKRArchive12SDIFileEntryPUl();
extern "C" void getAramAddress_Entry__14JKRAramArchiveFPQ210JKRArchive12SDIFileEntry();
extern "C" void getAramAddress__14JKRAramArchiveFPCc();
extern "C" void fetchResource_subroutine__14JKRAramArchiveFUlUlPUcUli();
extern "C" void fetchResource_subroutine__14JKRAramArchiveFUlUlP7JKRHeapiPPUc();
extern "C" void getExpandedResSize__14JKRAramArchiveCFPCv();
extern "C" void __dt__7JKRFileFv();
extern "C" extern char const* const JKRAramArchive__stringBase0;

//
// External References:
//

extern "C" void alloc__7JKRHeapFUliP7JKRHeap();
extern "C" void alloc__7JKRHeapFUli();
extern "C" void free__7JKRHeapFPvP7JKRHeap();
extern "C" void free__7JKRHeapFPv();
extern "C" void copyMemory__7JKRHeapFPvPvUl();
extern "C" void* __nw__FUlP7JKRHeapi();
extern "C" void __dl__FPv();
extern "C" void __dt__11JKRDisposerFv();
extern "C" void aramToMainRam__7JKRAramFUlPUcUl15JKRExpandSwitchUlP7JKRHeapiPUl();
extern "C" void alloc__11JKRAramHeapFUlQ211JKRAramHeap10EAllocMode();
extern "C" void unmount__13JKRFileLoaderFv();
extern "C" void becomeCurrent__10JKRArchiveFPCc();
extern "C" void getResource__10JKRArchiveFPCc();
extern "C" void getResource__10JKRArchiveFUlPCc();
extern "C" void readResource__10JKRArchiveFPvUlUlPCc();
extern "C" void readResource__10JKRArchiveFPvUlPCc();
extern "C" void removeResourceAll__10JKRArchiveFv();
extern "C" void removeResource__10JKRArchiveFPv();
extern "C" void detachResource__10JKRArchiveFPv();
extern "C" void getResSize__10JKRArchiveCFPCv();
extern "C" void countFile__10JKRArchiveCFPCc();
extern "C" void getFirstFile__10JKRArchiveCFPCc();
extern "C" void __ct__10JKRArchiveFlQ210JKRArchive10EMountMode();
extern "C" void __dt__10JKRArchiveFv();
extern "C" void findFsResource__10JKRArchiveCFPCcUl();
extern "C" void findPtrResource__10JKRArchiveCFPCv();
extern "C" void setExpandSize__10JKRArchiveFPQ210JKRArchive12SDIFileEntryUl();
extern "C" void getExpandSize__10JKRArchiveCFPQ210JKRArchive12SDIFileEntry();
extern "C" void __ct__10JKRDvdFileFl();
extern "C" void
loadToMainRAM__12JKRDvdRipperFlPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl();
extern "C" void loadToAram__16JKRDvdAramRipperFlUl15JKRExpandSwitchUlUlPUl();
extern "C" void prepend__10JSUPtrListFP10JSUPtrLink();
extern "C" void remove__10JSUPtrListFP10JSUPtrLink();
extern "C" void panic_f__12JUTExceptionFPCciPCce();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" u8 sVolumeList__13JKRFileLoader[12];
extern "C" u8 sSystemHeap__7JKRHeap[4];
extern "C" u8 sAramObject__7JKRAram[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 803CC328-803CC348 029448 0020+00 1/1 4/4 0/0 .data            __vt__7JKRFile */
SECTION_DATA extern void* __vt__7JKRFile[8] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__7JKRFileFv,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 802D70C0-802D7168 2D1A00 00A8+00 0/0 1/1 0/0 .text
 * __ct__14JKRAramArchiveFlQ210JKRArchive15EMountDirection      */
JKRAramArchive::JKRAramArchive(s32 param_0, JKRArchive::EMountDirection mountDirection)
    : JKRArchive(param_0, MOUNT_ARAM) {
    mMountDirection = mountDirection;

    if (!this->open(param_0)) {
        return;
    }

    mVolumeType = 'RARC';
    mVolumeName = mStringTable + mNodes->name_offset;
    JKRFileLoader::sVolumeList.prepend(&mFileLoaderLink);
    mIsMounted = true;
}

/* 802D7168-802D72A8 2D1AA8 0140+00 1/0 0/0 0/0 .text            __dt__14JKRAramArchiveFv */
JKRAramArchive::~JKRAramArchive() {
    if (mIsMounted == true) {
        if (mArcInfoBlock != NULL) {
            SDIFileEntry* entry = mFiles;
            for (int i = 0; i < mArcInfoBlock->num_file_entries; entry++, i++) {
                if (entry->data != NULL) {
                    JKRHeap::free(entry->data, mHeap);
                }
            }

            JKRHeap::free(mArcInfoBlock, mHeap);
            mArcInfoBlock = NULL;
        }

        if (mExpandedSize != NULL) {
            JKRHeap::free(mExpandedSize, NULL);
            mExpandedSize = NULL;
        }

        if (mDvdFile != NULL) {
            delete mDvdFile;
        }

        if (mBlock != NULL) {
            delete mBlock;
        }

        JKRFileLoader::sVolumeList.remove(&mFileLoaderLink);
        mIsMounted = false;
    }
}

inline u32 alignNext(u32 var, u32 align) {
    return (var + align - 1) & ~(align - 1);
}

/* 802D72A8-802D75E0 2D1BE8 0338+00 1/1 0/0 0/0 .text            open__14JKRAramArchiveFl */
#ifdef NONMATCHING
// r30 <-> r29
bool JKRAramArchive::open(s32 entryNum) {
    mArcInfoBlock = NULL;
    mNodes = NULL;
    mFiles = NULL;
    mStringTable = NULL;
    mBlock = NULL;
    // int align;
    // int align = -4;
    // if (mMountDirection == MOUNT_DIRECTION_HEAD) {
    //     align = 4;
    // }
    int align;
    align = mMountDirection == MOUNT_DIRECTION_HEAD ? 4 : -4;
    mDvdFile = new (JKRGetSystemHeap(), align) JKRDvdFile(entryNum);
    if (mDvdFile == NULL) {
        mMountMode = UNKNOWN_MOUNT_MODE;
        return false;
    }

    SArcHeader* header = static_cast<SArcHeader*>(JKRAllocFromSysHeap(0x20, -0x20));
    if (header == NULL) {
        mMountMode = UNKNOWN_MOUNT_MODE;
    } else {
        JKRDvdToMainRam(entryNum, (u8*)header, EXPAND_SWITCH_UNKNOWN1, 0x20, NULL,
                        JKRDvdRipper::ALLOC_DIRECTION_FORWARD, 0, &mCompression, NULL);
        DCInvalidateRange(header, 0x20);
        align = mMountDirection == MOUNT_DIRECTION_HEAD ? 0x20 : -0x20;
        u32 blockSize = alignNext(header->file_data_offset, 0x20);
        mArcInfoBlock = static_cast<SArcDataInfo*>(JKRAllocFromHeap(mHeap, blockSize, align));
        if (mArcInfoBlock == NULL) {
            mMountMode = UNKNOWN_MOUNT_MODE;
        } else {
            JKRDvdToMainRam(entryNum, (u8*)mArcInfoBlock, EXPAND_SWITCH_UNKNOWN1, blockSize, NULL,
                            JKRDvdRipper::ALLOC_DIRECTION_FORWARD, 0x20, NULL, NULL);
            DCInvalidateRange(mArcInfoBlock, blockSize);
            mNodes = (SDIDirEntry*)((s32)mArcInfoBlock + mArcInfoBlock->node_offset);
            mFiles = (SDIFileEntry*)((s32)mArcInfoBlock + mArcInfoBlock->file_entry_offset);
            mStringTable = (char*)((s32)mArcInfoBlock + mArcInfoBlock->string_table_offset);
            mExpandedSize = NULL;
            u8 isAnyFileCompressed = 0;
            SDIFileEntry* file = mFiles;
            for (int i = 0; i < mArcInfoBlock->num_file_entries; file++, i++) {
                if (file->isUnknownFlag1()) {
                    isAnyFileCompressed |= file->getCompressFlag();
                }
            }
            if (isAnyFileCompressed != 0) {
                mExpandedSize =
                    (s32*)JKRAllocFromHeap(mHeap, mArcInfoBlock->num_file_entries * 4, abs(align));
                if (mExpandedSize == NULL) {
                    i_JKRFree(mArcInfoBlock);
                    mMountMode = UNKNOWN_MOUNT_MODE;
                    goto end;
                } else {
                    memset(mExpandedSize, 0, mArcInfoBlock->num_file_entries * 4);
                }
            }
            u32 fileDataLength = alignNext(header->file_data_length, 0x20);
            mBlock = static_cast<JKRAramBlock*>(JKRAllocFromAram(
                fileDataLength,
                mMountDirection == MOUNT_DIRECTION_HEAD ? JKRAramHeap::HEAD : JKRAramHeap::TAIL));
            if (mBlock == NULL) {
                if (mArcInfoBlock != NULL) {
                    i_JKRFree(mArcInfoBlock);
                }
                if (mExpandedSize != NULL) {
                    i_JKRFree(mExpandedSize);
                }
                mMountMode = UNKNOWN_MOUNT_MODE;
            } else {
                JKRDvdAramRipper::loadToAram(entryNum, mBlock->getAddress(), EXPAND_SWITCH_UNKNOWN1,
                                             header->header_length + header->file_data_offset, 0,
                                             NULL);
            }
        }
    }
end:
    if (header != NULL) {
        JKRFreeToSysHeap(header);
    }
    if (mMountMode == UNKNOWN_MOUNT_MODE) {
        if (mDvdFile != NULL) {
            delete mDvdFile;
        }
        return false;
    } else {
        return true;
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool JKRAramArchive::open(s32 param_0) {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramArchive/open__14JKRAramArchiveFl.s"
}
#pragma pop
#endif

/* 802D75E0-802D76F4 2D1F20 0114+00 1/0 0/0 0/0 .text
 * fetchResource__14JKRAramArchiveFPQ210JKRArchive12SDIFileEntryPUl */
void* JKRAramArchive::fetchResource(JKRArchive::SDIFileEntry* pEntry, u32* pOutSize) {
    u32 outSize;
    u8* outBuf;
    if (pOutSize == NULL) {
        pOutSize = &outSize;
    }

    JKRCompression compression = JKRConvertAttrToCompressionType(pEntry->getFlags());
    if (pEntry->data == NULL) {
        u32 size = JKRAramArchive::fetchResource_subroutine(
            pEntry->data_offset + mBlock->getAddress(), pEntry->data_size, mHeap, compression,
            &outBuf);

        *pOutSize = size;
        if (size == NULL) {
            return NULL;
        }

        pEntry->data = outBuf;
        if (compression == COMPRESSION_YAZ0) {
            this->setExpandSize(pEntry, *pOutSize);
        }
    } else {
        if (compression == COMPRESSION_YAZ0) {
            *pOutSize = this->getExpandSize(pEntry);
        } else {
            *pOutSize = pEntry->data_size;
        }
    }

    return pEntry->data;
}

/* 802D76F4-802D77F8 2D2034 0104+00 1/0 0/0 0/0 .text
 * fetchResource__14JKRAramArchiveFPvUlPQ210JKRArchive12SDIFileEntryPUl */
#ifdef NONMATCHING
void* JKRAramArchive::fetchResource(void* buffer, u32 bufferSize, JKRArchive::SDIFileEntry* pEntry,
                                    u32* resourceSize) {
    u32 size = pEntry->data_size;
    if (size > bufferSize) {
        size = bufferSize;
    }
    JKRCompression compression = JKRConvertAttrToCompressionType(pEntry->getFlags());
    if (pEntry->data == NULL) {
        // can't get it to store the result in r28
        bufferSize &= ~(0x20 - 1);
        size = JKRAramArchive::fetchResource_subroutine(pEntry->data_offset + mBlock->getAddress(),
                                                        size, (u8*)buffer, bufferSize, compression);
    } else {
        if (compression == COMPRESSION_YAZ0) {
            u32 expandSize = this->getExpandSize(pEntry);
            if (expandSize != NULL) {
                size = expandSize;
            }
        }
        if (size > bufferSize) {
            size = bufferSize;
        }
        JKRHeap::copyMemory(buffer, pEntry->data, size);
    }
    if (resourceSize != NULL) {
        *resourceSize = size;
    }
    return buffer;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void* JKRAramArchive::fetchResource(void* param_0, u32 param_1,
                                        JKRArchive::SDIFileEntry* param_2, u32* param_3) {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramArchive/fetchResource__14JKRAramArchiveFPvUlPQ210JKRArchive12SDIFileEntryPUl.s"
}
#pragma pop
#endif

/* 802D77F8-802D781C 2D2138 0024+00 1/1 0/0 0/0 .text
 * getAramAddress_Entry__14JKRAramArchiveFPQ210JKRArchive12SDIFileEntry */
u32 JKRAramArchive::getAramAddress_Entry(JKRArchive::SDIFileEntry* pEntry) {
    if (pEntry == NULL) {
        return 0;
    } else {
        return pEntry->data_offset + mBlock->getAddress();
    }
}

/* 802D781C-802D7858 2D215C 003C+00 0/0 1/1 0/0 .text getAramAddress__14JKRAramArchiveFPCc */
u32 JKRAramArchive::getAramAddress(char const* name) {
    return JKRAramArchive::getAramAddress_Entry(this->findFsResource(name, 0));
}

/* 802D7858-802D7914 2D2198 00BC+00 1/1 1/1 0/0 .text
 * fetchResource_subroutine__14JKRAramArchiveFUlUlPUcUli        */
u32 JKRAramArchive::fetchResource_subroutine(u32 src, u32 srcLength, u8* dst, u32 dstLength,
                                             int compression) {
    u32 outLen;
    u32 srcSize = ALIGN_NEXT(srcLength, 0x20);
    u32 dstSize = ALIGN_PREV(dstLength, 0x20);

    switch (compression) {
    case COMPRESSION_NONE:
        if (srcSize > dstSize) {
            srcSize = dstSize;
        }
        JKRAram::aramToMainRam(src, dst, srcSize, EXPAND_SWITCH_UNKNOWN0, dstSize, NULL, -1,
                               &outLen);
        return outLen;
    case COMPRESSION_YAY0:
    case COMPRESSION_YAZ0:
        JKRAram::aramToMainRam(src, dst, srcSize, EXPAND_SWITCH_UNKNOWN1, dstSize, NULL, -1,
                               &outLen);
        return outLen;
    default:
        JUTException::panic_f(__FILE__, 655, "%s", "??? bad sequence\n");
        return 0;
    }
}

/* 802D7914-802D7A64 2D2254 0150+00 1/1 1/1 0/0 .text
 * fetchResource_subroutine__14JKRAramArchiveFUlUlP7JKRHeapiPPUc */
#ifdef NONMATCHING
u32 JKRAramArchive::fetchResource_subroutine(u32 entryNum, u32 length, JKRHeap* pHeap,
                                             int compression, u8** out) {
    // r28 -> r29, r29 -> r30, r30 -> r31, r31 -> r28
    u32 readLen;
    u32 alignedLen = alignNext(length, 0x20);
    u8* tmpBufAligned;
    switch (compression) {
    case COMPRESSION_NONE:
        tmpBufAligned = static_cast<u8*>(JKRAllocFromHeap(pHeap, alignedLen, 0x20));
        JKRAramToMainRam(entryNum, tmpBufAligned, alignedLen, EXPAND_SWITCH_UNKNOWN0, alignedLen,
                         NULL, -1, NULL);
        *out = tmpBufAligned;
        return length;
    case COMPRESSION_YAY0:
    case COMPRESSION_YAZ0:
        u8 tmpBuf[0x40];
        SArcHeader* buf = (SArcHeader*)ALIGN_PREV((s32)&tmpBuf[0x1F], 0x20);
        JKRAramToMainRam(entryNum, (u8*)buf, 0x20, EXPAND_SWITCH_UNKNOWN0, 0, NULL, -1, NULL);
        length = alignNext(JKRDecompExpandSize(buf), 0x20);
        tmpBufAligned = static_cast<u8*>(JKRAllocFromHeap(pHeap, length, 0x20));

        JKRAramToMainRam(entryNum, tmpBufAligned, alignedLen, EXPAND_SWITCH_UNKNOWN1, length, pHeap,
                         -1, &readLen);
        *out = tmpBufAligned;
        return readLen;
    default:
        JUTException::panic_f(__FILE__, 0x2c9, "%s", "??? bad sequence\n");
        return 0;
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm u32 JKRAramArchive::fetchResource_subroutine(u32 param_0, u32 param_1, JKRHeap* param_2,
                                                 int param_3, u8** param_4) {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramArchive/fetchResource_subroutine__14JKRAramArchiveFUlUlP7JKRHeapiPPUc.s"
}
#pragma pop
#endif

/* 802D7A64-802D7B90 2D23A4 012C+00 1/0 0/0 0/0 .text getExpandedResSize__14JKRAramArchiveCFPCv */
u32 JKRAramArchive::getExpandedResSize(void const* ptr) const {
    if (mExpandedSize == NULL) {
        return this->getResSize(ptr);
    }

    JKRArchive::SDIFileEntry* entry = this->findPtrResource(ptr);
    if (entry == NULL) {
        return 0xFFFFFFFF;
    }

    if (entry->getCompressFlag() == 0) {
        return this->getResSize(ptr);
    }

    u32 expandSize = this->getExpandSize(entry);
    if (expandSize != 0) {
        return expandSize;
    }

    u8 tmpBuf[0x40];
    SArcHeader* buf = (SArcHeader*)ALIGN_PREV((s32)&tmpBuf[0x1F], 0x20);
    JKRAramToMainRam(entry->data_offset + mBlock->getAddress(), (u8*)buf, 0x20,
                     EXPAND_SWITCH_UNKNOWN0, 0, NULL, -1, NULL);
    expandSize = JKRDecompExpandSize(buf);
    // ??? casting away const?
    ((JKRArchive*)this)->setExpandSize(entry, expandSize);
    return expandSize;
}

/* 802D7B90-802D7BF0 2D24D0 0060+00 1/0 0/0 0/0 .text            __dt__7JKRFileFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm JKRFile::~JKRFile() {
extern "C" asm void __dt__7JKRFileFv() {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramArchive/__dt__7JKRFileFv.s"
}
#pragma pop
