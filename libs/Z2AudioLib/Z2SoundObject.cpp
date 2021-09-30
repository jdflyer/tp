//
// Generated By: dol2asm
// Translation Unit: Z2SoundObject
//

#include "Z2AudioLib/Z2SoundObject.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct Z2SoundObjArrow {
    /* 802BEB38 */ Z2SoundObjArrow();
    /* 802BEB74 */ void init(Vec*, u8);
};

struct Z2SoundInfo {
    /* 802BBAC8 */ void getSwBit(JAISoundID) const;
};

struct Z2SeMgr {
    /* 802AE5B0 */ void isSoundCulling(JAISoundID);
};

struct Z2Calc {
    struct CurveSign {};

    /* 802A96F4 */ void getParamByExp(f32, f32, f32, f32, f32, f32, Z2Calc::CurveSign);
};

struct JAUSoundAnimation {
    /* 802A6F70 */ void getStartSoundIndex(f32) const;
    /* 802A7044 */ void getEndSoundIndex(f32) const;
};

//
// Forward References:
//

extern "C" void __ct__14Z2SoundObjBaseFv();
extern "C" void __dt__14Z2SoundObjBaseFv();
extern "C" void init__14Z2SoundObjBaseFP3VecUc();
extern "C" void deleteObject__14Z2SoundObjBaseFv();
extern "C" void framework__14Z2SoundObjBaseFUlSc();
extern "C" void dispose__14Z2SoundObjBaseFv();
extern "C" void stopOK__14Z2SoundObjBaseFR17Z2SoundHandlePool();
extern "C" void startSound__14Z2SoundObjBaseF10JAISoundIDUlSc();
extern "C" void startLevelSound__14Z2SoundObjBaseF10JAISoundIDUlSc();
extern "C" void startCollisionSE__14Z2SoundObjBaseFUlUlP14Z2SoundObjBase();
extern "C" void __ct__21Z2DopplerSoundObjBaseFv();
extern "C" void __dt__21Z2DopplerSoundObjBaseFv();
extern "C" void init__21Z2DopplerSoundObjBaseFP3VecUc();
extern "C" void framework__21Z2DopplerSoundObjBaseFUlSc();
extern "C" void startSound__21Z2DopplerSoundObjBaseF10JAISoundIDUlSc();
extern "C" void startLevelSound__21Z2DopplerSoundObjBaseF10JAISoundIDUlSc();
extern "C" void __ct__16Z2SoundObjSimpleFv();
extern "C" void init__16Z2SoundObjSimpleFP3VecUc();
extern "C" void startSound__16Z2SoundObjSimpleF10JAISoundIDUlSc();
extern "C" void startLevelSound__16Z2SoundObjSimpleF10JAISoundIDUlSc();
extern "C" void __ct__15Z2SoundObjArrowFv();
extern "C" void init__15Z2SoundObjArrowFP3VecUc();
extern "C" void __ct__15Z2SoundObjAnimeFv();
extern "C" void init__15Z2SoundObjAnimeFP3VecUc();
extern "C" void initAnime__15Z2SoundObjAnimeFPvbff();
extern "C" void ageSounds___15Z2SoundObjAnimeFv();
extern "C" void updateAnime__15Z2SoundObjAnimeFff();
extern "C" void updateSoundLifeTime___15Z2SoundObjAnimeFff();
extern "C" void func_802BF660();
extern "C" void func_802BF890();
extern "C" void func_802BF898();

//
// External References:
//

extern "C" void releaseSound__14JAISoundHandleFv();
extern "C" void acceptsNewAudible__8JAISoundCFv();
extern "C" void func_802A2474();
extern "C" void stop__8JAISoundFv();
extern "C" void moveVolume__18JAISoundParamsMoveFfUl();
extern "C" void movePitch__18JAISoundParamsMoveFfUl();
extern "C" void moveFxMix__18JAISoundParamsMoveFfUl();
extern "C" void getStartSoundIndex__17JAUSoundAnimationCFf();
extern "C" void getEndSoundIndex__17JAUSoundAnimationCFf();
extern "C" void getParamByExp__6Z2CalcFffffffQ26Z2Calc9CurveSign();
extern "C" void setPortData__14Z2SoundStarterFP14JAISoundHandleUlUsSc();
extern "C" void __ct__14Z2SoundHandlesFv();
extern "C" void __dt__14Z2SoundHandlesFv();
extern "C" void initHandlesPool__14Z2SoundHandlesFUc();
extern "C" void deleteHandlesPool__14Z2SoundHandlesFv();
extern "C" void getHandleSoundID__14Z2SoundHandlesF10JAISoundID();
extern "C" void getHandleUserData__14Z2SoundHandlesFUl();
extern "C" void getFreeHandle__14Z2SoundHandlesFv();
extern "C" void getLowPrioSound__14Z2SoundHandlesF10JAISoundID();
extern "C" void func_802AB538();
extern "C" void isSoundCulling__7Z2SeMgrF10JAISoundID();
extern "C" void getSwBit__11Z2SoundInfoCF10JAISoundID();
extern "C" void __dl__FPv();
extern "C" void getNthLink__10JSUPtrListCFUl();
extern "C" void _savegpr_23();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_23();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern u32 __float_max;
extern "C" extern u8 data_80450B4C[4];
extern "C" extern u8 data_80450B60[4];
extern "C" extern Z2SoundStarter* data_80450B74;
extern "C" extern u8 data_80450B88[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 803CACD0-803CACF0 027DF0 0020+00 1/1 1/1 0/0 .data            __vt__15Z2SoundObjAnime */
SECTION_DATA extern void* __vt__15Z2SoundObjAnime[8] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)framework__14Z2SoundObjBaseFUlSc,
    (void*)dispose__14Z2SoundObjBaseFv,
    (void*)stopOK__14Z2SoundObjBaseFR17Z2SoundHandlePool,
    (void*)init__15Z2SoundObjAnimeFP3VecUc,
    (void*)startSound__14Z2SoundObjBaseF10JAISoundIDUlSc,
    (void*)startLevelSound__14Z2SoundObjBaseF10JAISoundIDUlSc,
};

/* 803CACF0-803CAD10 027E10 0020+00 1/1 0/0 1/1 .data            __vt__15Z2SoundObjArrow */
SECTION_DATA extern void* __vt__15Z2SoundObjArrow[8] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)framework__21Z2DopplerSoundObjBaseFUlSc,
    (void*)dispose__14Z2SoundObjBaseFv,
    (void*)stopOK__14Z2SoundObjBaseFR17Z2SoundHandlePool,
    (void*)init__15Z2SoundObjArrowFP3VecUc,
    (void*)startSound__21Z2DopplerSoundObjBaseF10JAISoundIDUlSc,
    (void*)startLevelSound__21Z2DopplerSoundObjBaseF10JAISoundIDUlSc,
};

/* 803CAD10-803CAD30 027E30 0020+00 1/1 3/3 14/14 .data            __vt__16Z2SoundObjSimple */
SECTION_DATA extern void* __vt__16Z2SoundObjSimple[8] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)framework__14Z2SoundObjBaseFUlSc,
    (void*)dispose__14Z2SoundObjBaseFv,
    (void*)stopOK__14Z2SoundObjBaseFR17Z2SoundHandlePool,
    (void*)init__16Z2SoundObjSimpleFP3VecUc,
    (void*)startSound__16Z2SoundObjSimpleF10JAISoundIDUlSc,
    (void*)startLevelSound__16Z2SoundObjSimpleF10JAISoundIDUlSc,
};

/* 803CAD30-803CAD50 027E50 0020+00 2/2 0/0 0/0 .data            __vt__21Z2DopplerSoundObjBase */
SECTION_DATA extern void* __vt__21Z2DopplerSoundObjBase[8] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)framework__21Z2DopplerSoundObjBaseFUlSc,
    (void*)dispose__14Z2SoundObjBaseFv,
    (void*)stopOK__14Z2SoundObjBaseFR17Z2SoundHandlePool,
    (void*)init__21Z2DopplerSoundObjBaseFP3VecUc,
    (void*)startSound__21Z2DopplerSoundObjBaseF10JAISoundIDUlSc,
    (void*)startLevelSound__21Z2DopplerSoundObjBaseF10JAISoundIDUlSc,
};

/* 803CAD50-803CAD70 027E70 0020+00 2/2 0/0 0/0 .data            __vt__14Z2SoundObjBase */
SECTION_DATA extern void* __vt__14Z2SoundObjBase[8] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)framework__14Z2SoundObjBaseFUlSc,
    (void*)dispose__14Z2SoundObjBaseFv,
    (void*)stopOK__14Z2SoundObjBaseFR17Z2SoundHandlePool,
    (void*)init__14Z2SoundObjBaseFP3VecUc,
    (void*)startSound__14Z2SoundObjBaseF10JAISoundIDUlSc,
    (void*)startLevelSound__14Z2SoundObjBaseF10JAISoundIDUlSc,
};

Z2SoundObjBase::Z2SoundObjBase() {
    //! @note initializer list doesn't work since fields were initialized out of
    //! structure layout order, indicating original code didn't use initializer list.
    mSoundPos = NULL;
    mIsInitialized = false;
    mSoundStarter = data_80450B74;  // sInstance
    field_0x1c = 0;
    field_0x1e = 0;
}

Z2SoundObjBase::~Z2SoundObjBase() {
    deleteObject();
}

void Z2SoundObjBase::init(Vec* pSoundPos, u8 pNumHandles) {
    initHandlesPool(pNumHandles);
    mSoundPos = pSoundPos;
    mIsInitialized = true;
}

/* 802BDFF8-802BE038 2B8938 0040+00 1/1 8/8 61/61 .text            deleteObject__14Z2SoundObjBaseFv
 */
// issue from using temp virtuals i think
#ifdef NONMATCHING
void Z2SoundObjBase::deleteObject() {
    dispose();
    deleteHandlesPool();
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2SoundObjBase::deleteObject() {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundObject/deleteObject__14Z2SoundObjBaseFv.s"
}
#pragma pop
#endif

void Z2SoundObjBase::framework(u32 p1, s8 p2) {
    if (mIsInitialized) {
        field_0x1c = p1;
        field_0x1e = p2;
        setPos(*(JGeometry::TVec3<f32>*)mSoundPos);
    }
}

/* 802BE070-802BE104 2B89B0 0094+00 5/0 3/0 0/0 .text            dispose__14Z2SoundObjBaseFv */
// sInstance stuff
#ifdef NONMATCHING
void Z2SoundObjBase::dispose() {
    JAISoundHandle* handle;
    JSULink<Z2SoundHandlePool>* link;
    for (link = getFirst(); link != NULL; link = link->getNext()) {
        handle = link->getObject();
        if (handle != NULL && (bool)*handle) {
            u32 swBit = lbl_80450B4C->getSwBit((*handle)->getID());
            if ((swBit & 0x8000) != 0) {
                handle->releaseSound();
            } else {
                (*handle)->stop();
            }
        }
    }

    mIsInitialized = false;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2SoundObjBase::dispose() {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundObject/dispose__14Z2SoundObjBaseFv.s"
}
#pragma pop
#endif

/* 802BE104-802BE144 2B8A44 0040+00 5/0 3/0 0/0 .text
 * stopOK__14Z2SoundObjBaseFR17Z2SoundHandlePool                */

// sInstance stuff
#ifdef NONMATCHING
bool Z2SoundObjBase::stopOK(Z2SoundHandlePool& pSoundHandlePool) {
    return !(lbl_80450B4C->getSwBit(pSoundHandlePool->getID()) & 0x8000);
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool Z2SoundObjBase::stopOK(Z2SoundHandlePool& param_0) {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundObject/stopOK__14Z2SoundObjBaseFR17Z2SoundHandlePool.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 80455B38-80455B3C 004138 0004+00 5/5 0/0 0/0 .sdata2          @3559 */
SECTION_SDATA2 static f32 lit_3559 = 127.0f;

/* 80455B3C-80455B40 00413C 0004+00 4/4 0/0 0/0 .sdata2          @3560 */
SECTION_SDATA2 static f32 lit_3560 = 1.0f;

/* 80455B40-80455B48 004140 0004+04 3/3 0/0 0/0 .sdata2          @3561 */
SECTION_SDATA2 static f32 lit_3561[1 + 1 /* padding */] = {
    -1.0f,
    /* padding */
    0.0f,
};

/* 80455B48-80455B50 004148 0008+00 3/3 0/0 0/0 .sdata2          @3564 */
SECTION_SDATA2 static f64 lit_3564 = 4503601774854144.0 /* cast s32 to float */;

/* 802BE144-802BE2D4 2B8A84 0190+00 5/3 3/1 0/0 .text
 * startSound__14Z2SoundObjBaseF10JAISoundIDUlSc                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2SoundObjBase::startSound(JAISoundID param_0, u32 param_1, s8 param_2) {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundObject/startSound__14Z2SoundObjBaseF10JAISoundIDUlSc.s"
}
#pragma pop

/* 802BE2D4-802BE4A4 2B8C14 01D0+00 4/2 3/0 0/0 .text
 * startLevelSound__14Z2SoundObjBaseF10JAISoundIDUlSc           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2SoundObjBase::startLevelSound(JAISoundID param_0, u32 param_1, s8 param_2) {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundObject/startLevelSound__14Z2SoundObjBaseF10JAISoundIDUlSc.s"
}
#pragma pop

/* 802BE4A4-802BE5A0 2B8DE4 00FC+00 0/0 5/5 21/21 .text
 * startCollisionSE__14Z2SoundObjBaseFUlUlP14Z2SoundObjBase     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2SoundObjBase::startCollisionSE(u32 param_0, u32 param_1, Z2SoundObjBase* param_2) {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundObject/startCollisionSE__14Z2SoundObjBaseFUlUlP14Z2SoundObjBase.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039C230-8039C240 028890 000C+04 1/1 0/0 0/0 .rodata          cNullVec__6Z2Calc */
SECTION_RODATA static u8 const cNullVec__6Z2Calc[12 + 4 /* padding */] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x8039C230, &cNullVec__6Z2Calc);

/* 802BE5A0-802BE5FC 2B8EE0 005C+00 1/1 0/0 0/0 .text            __ct__21Z2DopplerSoundObjBaseFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm Z2DopplerSoundObjBase::Z2DopplerSoundObjBase() {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundObject/__ct__21Z2DopplerSoundObjBaseFv.s"
}
#pragma pop

/* 802BE5FC-802BE65C 2B8F3C 0060+00 0/0 0/0 1/1 .text            __dt__21Z2DopplerSoundObjBaseFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm Z2DopplerSoundObjBase::~Z2DopplerSoundObjBase() {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundObject/__dt__21Z2DopplerSoundObjBaseFv.s"
}
#pragma pop

/* 802BE65C-802BE6B8 2B8F9C 005C+00 1/0 0/0 0/0 .text init__21Z2DopplerSoundObjBaseFP3VecUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2DopplerSoundObjBase::init(Vec* param_0, u8 param_1) {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundObject/init__21Z2DopplerSoundObjBaseFP3VecUc.s"
}
#pragma pop

/* 802BE6B8-802BE714 2B8FF8 005C+00 2/0 0/0 0/0 .text framework__21Z2DopplerSoundObjBaseFUlSc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2DopplerSoundObjBase::framework(u32 param_0, s8 param_1) {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundObject/framework__21Z2DopplerSoundObjBaseFUlSc.s"
}
#pragma pop

/* 802BE714-802BE7AC 2B9054 0098+00 2/0 0/0 0/0 .text
 * startSound__21Z2DopplerSoundObjBaseF10JAISoundIDUlSc         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2DopplerSoundObjBase::startSound(JAISoundID param_0, u32 param_1, s8 param_2) {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundObject/startSound__21Z2DopplerSoundObjBaseF10JAISoundIDUlSc.s"
}
#pragma pop

/* 802BE7AC-802BE844 2B90EC 0098+00 2/0 0/0 0/0 .text
 * startLevelSound__21Z2DopplerSoundObjBaseF10JAISoundIDUlSc    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2DopplerSoundObjBase::startLevelSound(JAISoundID param_0, u32 param_1, s8 param_2) {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundObject/startLevelSound__21Z2DopplerSoundObjBaseF10JAISoundIDUlSc.s"
}
#pragma pop

/* 802BE844-802BE880 2B9184 003C+00 0/0 8/8 65/65 .text            __ct__16Z2SoundObjSimpleFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm Z2SoundObjSimple::Z2SoundObjSimple() {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundObject/__ct__16Z2SoundObjSimpleFv.s"
}
#pragma pop

void Z2SoundObjSimple::init(Vec* pSoundPos, u8 pNumHandles) {
    Z2SoundObjBase::init(pSoundPos, pNumHandles);
}

/* ############################################################################################## */
/* 80455B50-80455B54 004150 0004+00 4/4 0/0 0/0 .sdata2          @3821 */
SECTION_SDATA2 static u8 lit_3821[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80455B54-80455B58 004154 0004+00 2/2 0/0 0/0 .sdata2          @3822 */
SECTION_SDATA2 static f32 lit_3822 = 1.0f / 5.0f;

/* 80455B58-80455B5C 004158 0004+00 2/2 0/0 0/0 .sdata2          @3823 */
SECTION_SDATA2 static f32 lit_3823 = 2.0f / 5.0f;

/* 80455B5C-80455B60 00415C 0004+00 2/2 0/0 0/0 .sdata2          @3824 */
SECTION_SDATA2 static f32 lit_3824 = 3.0f / 5.0f;

/* 80455B60-80455B68 004160 0004+04 2/2 0/0 0/0 .sdata2          @3825 */
SECTION_SDATA2 static f32 lit_3825[1 + 1 /* padding */] = {
    6.0f / 5.0f,
    /* padding */
    0.0f,
};

/* 80455B68-80455B70 004168 0008+00 3/3 0/0 0/0 .sdata2          @3828 */
SECTION_SDATA2 static f64 lit_3828 = 4503599627370496.0 /* cast u32 to float */;

/* 802BE8A0-802BE9B0 2B91E0 0110+00 1/0 0/0 0/0 .text
 * startSound__16Z2SoundObjSimpleF10JAISoundIDUlSc              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2SoundObjSimple::startSound(JAISoundID param_0, u32 param_1, s8 param_2) {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundObject/startSound__16Z2SoundObjSimpleF10JAISoundIDUlSc.s"
}
#pragma pop

/* ############################################################################################## */
/* 80455B70-80455B74 004170 0004+00 1/1 0/0 0/0 .sdata2          @3859 */
SECTION_SDATA2 static f32 lit_3859 = 2.0f;

/* 80455B74-80455B78 004174 0004+00 1/1 0/0 0/0 .sdata2          @3860 */
SECTION_SDATA2 static f32 lit_3860 = 22.0f;

/* 80455B78-80455B7C 004178 0004+00 1/1 0/0 0/0 .sdata2          @3861 */
SECTION_SDATA2 static f32 lit_3861 = 50.0f;

/* 80455B7C-80455B80 00417C 0004+00 1/1 0/0 0/0 .sdata2          @3862 */
SECTION_SDATA2 static f32 lit_3862 = 1.5f;

/* 802BE9B0-802BEB38 2B92F0 0188+00 1/0 0/0 0/0 .text
 * startLevelSound__16Z2SoundObjSimpleF10JAISoundIDUlSc         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2SoundObjSimple::startLevelSound(JAISoundID param_0, u32 param_1, s8 param_2) {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundObject/startLevelSound__16Z2SoundObjSimpleF10JAISoundIDUlSc.s"
}
#pragma pop

/* 802BEB38-802BEB74 2B9478 003C+00 0/0 0/0 2/2 .text            __ct__15Z2SoundObjArrowFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm Z2SoundObjArrow::Z2SoundObjArrow() {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundObject/__ct__15Z2SoundObjArrowFv.s"
}
#pragma pop

/* 802BEB74-802BEB94 2B94B4 0020+00 1/0 0/0 0/0 .text            init__15Z2SoundObjArrowFP3VecUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2SoundObjArrow::init(Vec* param_0, u8 param_1) {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundObject/init__15Z2SoundObjArrowFP3VecUc.s"
}
#pragma pop

/* 802BEB94-802BEBDC 2B94D4 0048+00 0/0 2/2 0/0 .text            __ct__15Z2SoundObjAnimeFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm Z2SoundObjAnime::Z2SoundObjAnime() {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundObject/__ct__15Z2SoundObjAnimeFv.s"
}
#pragma pop

/* 802BEBDC-802BEBFC 2B951C 0020+00 1/0 1/0 0/0 .text            init__15Z2SoundObjAnimeFP3VecUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void init__15Z2SoundObjAnimeFP3VecUc() {
    // asm void Z2SoundObjAnime::init(Vec* param_0, u8 param_1) {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundObject/init__15Z2SoundObjAnimeFP3VecUc.s"
}
#pragma pop

/* 802BEBFC-802BED68 2B953C 016C+00 0/0 2/2 0/0 .text            initAnime__15Z2SoundObjAnimeFPvbff
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2SoundObjAnime::initAnime(void* param_0, bool param_1, f32 param_2, f32 param_3) {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundObject/initAnime__15Z2SoundObjAnimeFPvbff.s"
}
#pragma pop

/* 802BED68-802BEED4 2B96A8 016C+00 1/1 0/0 0/0 .text            ageSounds___15Z2SoundObjAnimeFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2SoundObjAnime::ageSounds_() {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundObject/ageSounds___15Z2SoundObjAnimeFv.s"
}
#pragma pop

/* 802BEED4-802BF304 2B9814 0430+00 0/0 2/2 0/0 .text            updateAnime__15Z2SoundObjAnimeFff
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2SoundObjAnime::updateAnime(f32 param_0, f32 param_1) {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundObject/updateAnime__15Z2SoundObjAnimeFff.s"
}
#pragma pop

/* 802BF304-802BF660 2B9C44 035C+00 1/1 0/0 0/0 .text updateSoundLifeTime___15Z2SoundObjAnimeFff
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2SoundObjAnime::updateSoundLifeTime_(f32 param_0, f32 param_1) {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundObject/updateSoundLifeTime___15Z2SoundObjAnimeFff.s"
}
#pragma pop

/* 802BF660-802BF890 2B9FA0 0230+00 1/1 0/0 0/0 .text
 * startSoundInner__15Z2SoundObjAnimeFRCQ29JGeometry8TVec3<f>fP14Z2SoundStarterUlSc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2SoundObjAnime::startSoundInner(JGeometry::TVec3<f32> const& param_0, f32 param_1,
                                          Z2SoundStarter* param_2, u32 param_3, s8 param_4) {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundObject/func_802BF660.s"
}
#pragma pop

/* 802BF890-802BF898 2BA1D0 0008+00 1/1 0/0 0/0 .text
 * getSoundID__15Z2SoundObjAnimeFPC22JAUSoundAnimationSoundRCQ29JGeometry8TVec3<f>f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2SoundObjAnime::getSoundID(JAUSoundAnimationSound const* param_0,
                                     JGeometry::TVec3<f32> const& param_1, f32 param_2) {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundObject/func_802BF890.s"
}
#pragma pop

/* 802BF898-802BF920 2BA1D8 0088+00 1/1 0/0 0/0 .text
 * playsSound__15Z2SoundObjAnimeFPC22JAUSoundAnimationSoundRCQ29JGeometry8TVec3<f>f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2SoundObjAnime::playsSound(JAUSoundAnimationSound const* param_0,
                                     JGeometry::TVec3<f32> const& param_1, f32 param_2) {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundObject/func_802BF898.s"
}
#pragma pop
