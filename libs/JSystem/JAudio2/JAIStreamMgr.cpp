//
// Generated By: dol2asm
// Translation Unit: JAIStreamMgr
//

#include "JSystem/JAudio2/JAIStreamMgr.h"
#include "JSystem/JAudio2/JAISoundHandles.h"
#include "JSystem/JAudio2/JAIStreamDataMgr.h"
#include "JSystem/JAudio2/JAISoundInfo.h"
#include "dol2asm.h"

//
// Forward References:
//

extern "C" void __ct__12JAIStreamMgrFb();
extern "C" void func_802A3C3C();
extern "C" void freeDeadStream___12JAIStreamMgrFv();
extern "C" void func_802A3E68(void* _this);
extern "C" void calc__12JAIStreamMgrFv();
extern "C" void stop__12JAIStreamMgrFv();
extern "C" void stop__12JAIStreamMgrFUl();
extern "C" void stopSoundID__12JAIStreamMgrF10JAISoundID();
extern "C" void mixOut__12JAIStreamMgrFv();
extern "C" void newStream___12JAIStreamMgrFv();

//
// External References:
//

extern "C" void __ct__17JASGenericMemPoolFv();
extern "C" void __dt__17JASGenericMemPoolFv();
extern "C" void alloc__17JASGenericMemPoolFUl();
extern "C" void free__17JASGenericMemPoolFPvUl();
extern "C" void attachHandle__8JAISoundFP14JAISoundHandle();
extern "C" void stop__8JAISoundFUl();
extern "C" void stop__8JAISoundFv();
extern "C" void func_802A3104();
extern "C" void func_802A319C();
extern "C" void JAIStreamMgr_mixOut___9JAIStreamFRC14JASSoundParams16JAISoundActivity();
extern "C" void JAIStreamMgr_calc___9JAIStreamFv();
extern "C" void __dl__FPv();
extern "C" void __dt__10JSUPtrLinkFv();
extern "C" void initiate__10JSUPtrListFv();
extern "C" void append__10JSUPtrListFP10JSUPtrLink();
extern "C" void remove__10JSUPtrListFP10JSUPtrLink();
extern "C" void __register_global_object();
extern "C" void _savegpr_25();
extern "C" void _savegpr_29();
extern "C" void _restgpr_25();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__9JAIStream[12];
extern "C" extern u8 data_80450B5C[4];
extern "C" extern u8 data_80451328[8];
extern "C" extern u8 __OSReport_disable;

//
// Declarations:
//

/* ############################################################################################## */
/* 80455800-80455804 003E00 0004+00 1/1 0/0 0/0 .sdata2          @653 */
SECTION_SDATA2 static f32 lit_653 = 1.0f;

/* 80455804-80455808 003E04 0004+00 1/1 0/0 0/0 .sdata2          @654 */
SECTION_SDATA2 static u8 lit_654[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80455808-80455810 003E08 0004+04 1/1 0/0 0/0 .sdata2          @655 */
SECTION_SDATA2 static f32 lit_655[1 + 1 /* padding */] = {
    0.5f,
    /* padding */
    0.0f,
};

/* 802A3B68-802A3C3C 29E4A8 00D4+00 0/0 1/1 0/0 .text            __ct__12JAIStreamMgrFb */
// Matches with literals
#ifdef NONMATCHING
JAIStreamMgr::JAIStreamMgr(bool param_0) : JASGlobalInstance<JAIStreamMgr>(param_0) {
    streamDataMgr_ = NULL;
    mStreamAramMgr = NULL;
    field_0x6c = NULL;
    field_0x54 = NULL;
    mParams.init();
    mActivity.init();
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JAIStreamMgr::JAIStreamMgr(bool param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JAIStreamMgr/__ct__12JAIStreamMgrFb.s"
}
#pragma pop
#endif

/* 802A3C3C-802A3D70 29E57C 0134+00 0/0 1/1 0/0 .text
 * startSound__12JAIStreamMgrF10JAISoundIDP14JAISoundHandlePCQ29JGeometry8TVec3<f> */
bool JAIStreamMgr::startSound(JAISoundID param_1, JAISoundHandle* param_2,
                              JGeometry::TVec3<f32> const* param_3) {
    JUT_ASSERT(37, streamDataMgr_);
    if (param_2 != NULL && *param_2) {
        (*param_2)->stop();
    }
    s32 streamFileEntry = streamDataMgr_->getStreamFileEntry(param_1);
    if (streamFileEntry < 0) {
        JUT_WARN("Cannot find the stream file entry for ID:%08x\n", param_1)
        return false;
    } 
    JAIStream* stream = newStream_();
    JAISoundInfo* piVar5 = JASGlobalInstance<JAISoundInfo>::getInstance();
    int iVar2 = -1;
    if (piVar5 != NULL) {
        iVar2 = piVar5->getCategory(param_1);
    }
    if (stream == NULL) {
        return false;
    }
    stream->JAIStreamMgr_startID_(param_1, streamFileEntry, param_3, field_0x54, iVar2);
    if (piVar5 != NULL) {
        piVar5->getStreamInfo(param_1, stream);
    }
    if (param_2 != NULL) {
        stream->attachHandle(param_2);
    }
    return false;
}

/* ############################################################################################## */
/* 804340F0-804340FC 060E10 000C+00 2/2 0/0 0/0 .bss             @745 */
static u8 lit_745[12];

/* 804340FC-80434110 060E1C 0010+04 2/2 1/1 0/0 .bss
 * memPool_$localstatic3$getMemPool___30JASPoolAllocObject<9JAIStream>Fv */
extern u8 data_804340FC[16 + 4 /* padding */];
u8 data_804340FC[16 + 4 /* padding */];

/* 802A3D70-802A3E68 29E6B0 00F8+00 1/1 0/0 0/0 .text            freeDeadStream___12JAIStreamMgrFv
 */
// I think this will match when all references to data_80451328 (init$localstatic4$getMemPool__30JASPoolAllocObject<9JAIStream>Fv) are not in asm 
#ifdef NONMATCHING
void JAIStreamMgr::freeDeadStream_() {
    JSULink<JAIStream>* link = mStreamList.getFirst();
    while (link != NULL) {
        JAIStream* stream = link->getObject();
        JSULink<JAIStream>* next = link->getNext();
        if (stream->status_.isDead()) {
            mStreamList.remove(link);
            void* aramAddr = stream->JAIStreamMgr_getAramAddr_();
            if (aramAddr != NULL) {
                mStreamAramMgr->deleteStreamAram((u32)aramAddr);
            }
            
            delete stream;
        }
        link = next;
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAIStreamMgr::freeDeadStream_() {
    nofralloc
#include "asm/JSystem/JAudio2/JAIStreamMgr/freeDeadStream___12JAIStreamMgrFv.s"
}
#pragma pop
#endif

/* 802A3E68-802A3EBC 29E7A8 0054+00 2/2 1/1 0/0 .text            __dt__22JASMemPool<9JAIStream>Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_802A3E68(void* _this) {
    nofralloc
#include "asm/JSystem/JAudio2/JAIStreamMgr/func_802A3E68.s"
}
#pragma pop

/* 802A3EBC-802A4028 29E7FC 016C+00 0/0 1/1 0/0 .text            calc__12JAIStreamMgrFv */
void JAIStreamMgr::calc() {
    mParams.calc();
    for (JSULink<JAIStream>* link = mStreamList.getFirst(); link != NULL; link = link->getNext()) {
        link->getObject()->JAIStreamMgr_calc_();
    }
    freeDeadStream_();
}

/* 802A4028-802A4068 29E968 0040+00 0/0 1/1 0/0 .text            stop__12JAIStreamMgrFv */
void JAIStreamMgr::stop() {
    for (JSULink<JAIStream>* link = mStreamList.getFirst(); link != NULL; link = link->getNext()) {
        link->getObject()->stop();
    }
}

/* 802A4068-802A40B8 29E9A8 0050+00 0/0 2/2 0/0 .text            stop__12JAIStreamMgrFUl */
void JAIStreamMgr::stop(u32 param_0) {
    for (JSULink<JAIStream>* link = mStreamList.getFirst(); link != NULL; link = link->getNext()) {
        link->getObject()->stop(param_0);
    }
}

/* 802A40B8-802A4118 29E9F8 0060+00 0/0 1/1 0/0 .text stopSoundID__12JAIStreamMgrF10JAISoundID */
void JAIStreamMgr::stopSoundID(JAISoundID param_0) {
    for (JSULink<JAIStream>* link = mStreamList.getFirst(); link != NULL; link = link->getNext()) {
        if ((u32)link->getObject()->getID() == (u32)param_0) {
            link->getObject()->stop();
        }
    }
}

/* 802A4118-802A4174 29EA58 005C+00 0/0 1/1 0/0 .text            mixOut__12JAIStreamMgrFv */
void JAIStreamMgr::mixOut() {
     for (JSULink<JAIStream>* link = mStreamList.getFirst(); link != NULL; link = link->getNext()) {
        link->getObject()->JAIStreamMgr_mixOut_(mParams.mParams, mActivity);
    }
}

/* 802A4174-802A4244 29EAB4 00D0+00 1/1 0/0 0/0 .text            newStream___12JAIStreamMgrFv */
// Matches with data_80451328
#ifdef NONMATCHING
JAIStream* JAIStreamMgr::newStream_() {
    if (mStreamAramMgr == NULL) {
        JUT_WARN(229, "JAIStreamAramMgr must be set.\n");
        return NULL;
    } 
    JAIStream* stream = new JAIStream(this, field_0x6c);
    if (stream == NULL) {
        JUT_WARN(235, "JASPoolAllocObject::<JAIStream>::operator new failed .\n");
        return NULL;
    }

    mStreamList.append(stream);
    return stream;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JAIStream* JAIStreamMgr::newStream_() {
    nofralloc
#include "asm/JSystem/JAudio2/JAIStreamMgr/newStream___12JAIStreamMgrFv.s"
}
#pragma pop
#endif
