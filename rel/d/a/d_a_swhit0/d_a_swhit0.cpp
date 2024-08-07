/**
 * @file d_a_swhit0.cpp
 * 
*/

#include "rel/d/a/d_a_swhit0/d_a_swhit0.h"
#include "d/cc/d_cc_d.h"
#include "dol2asm.h"


//
// Forward References:
//

extern "C" void getSwNo__10daSwhit0_cFv();
extern "C" void getSwNo2__10daSwhit0_cFv();
extern "C" void getEvNo__10daSwhit0_cFv();
extern "C" void getTimer__10daSwhit0_cFv();
extern "C" void getType__10daSwhit0_cFv();
extern "C" void makeEventId__10daSwhit0_cFv();
extern "C" void CreateHeap__10daSwhit0_cFv();
extern "C" void CreateInit__10daSwhit0_cFv();
extern "C" static void CheckCreateHeap__FP10fopAc_ac_c();
extern "C" void create__10daSwhit0_cFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void checkHit__10daSwhit0_cFv();
extern "C" void setCombackTimer__10daSwhit0_cFv();
extern "C" void endCombackTimer__10daSwhit0_cFv();
extern "C" void onSwitch__10daSwhit0_cFv();
extern "C" void offSwitch__10daSwhit0_cFv();
extern "C" void DemoProc__10daSwhit0_cFv();
extern "C" void orderEvent__10daSwhit0_cFv();
extern "C" void actionOffWait__10daSwhit0_cFv();
extern "C" void actionToOnReady__10daSwhit0_cFv();
extern "C" void actionToOnOrder__10daSwhit0_cFv();
extern "C" void actionToOnDemo__10daSwhit0_cFv();
extern "C" void actionToOnDemo2__10daSwhit0_cFv();
extern "C" void actionSwWait__10daSwhit0_cFv();
extern "C" void actionOnWait__10daSwhit0_cFv();
extern "C" void setDrawMtx__10daSwhit0_cFv();
extern "C" static void daSwhit0_Draw__FP10daSwhit0_c();
extern "C" static void daSwhit0_Execute__FP10daSwhit0_c();
extern "C" static void daSwhit0_Delete__FP10daSwhit0_c();
extern "C" static void daSwhit0_Create__FP10fopAc_ac_c();
extern "C" void func_8048734C(void* _this, u8*);
extern "C" extern char const* const d_a_swhit0__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XYZrotM__FPA4_fsss();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss();
extern "C" void entry__13mDoExt_brkAnmFP16J3DMaterialTablef();
extern "C" void init__13mDoExt_bckAnmFP15J3DAnmTransformiifssb();
extern "C" void entry__13mDoExt_bckAnmFP12J3DModelDataf();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_orderOtherEventId__FP10fopAc_ac_csUcUsUsUs();
extern "C" void fopAcM_orderMapToolAutoNextEvent__FP10fopAc_ac_cUcsUsUsUs();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void offSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void getEventIdx__16dEvent_manager_cFPCcUcl();
extern "C" void getEventIdx__16dEvent_manager_cFP10fopAc_ac_cUc();
extern "C" void isMapToolCamera__16dEvent_manager_cFUcl();
extern "C" void endCheck__16dEvent_manager_cFs();
extern "C" void getMyStaffId__16dEvent_manager_cFPCcP10fopAc_ac_ci();
extern "C" void getIsAddvance__16dEvent_manager_cFi();
extern "C" void getMyActIdx__16dEvent_manager_cFiPCPCciii();
extern "C" void cutEnd__16dEvent_manager_cFi();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* 80485FF8-80486004 000078 000C+00 9/9 0/0 0/0 .text            getSwNo__10daSwhit0_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::getSwNo() {
    nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/getSwNo__10daSwhit0_cFv.s"
}
#pragma pop

/* 80486004-80486010 000084 000C+00 1/1 0/0 0/0 .text            getSwNo2__10daSwhit0_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::getSwNo2() {
    nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/getSwNo2__10daSwhit0_cFv.s"
}
#pragma pop

/* 80486010-8048602C 000090 001C+00 3/3 0/0 0/0 .text            getEvNo__10daSwhit0_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::getEvNo() {
    nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/getEvNo__10daSwhit0_cFv.s"
}
#pragma pop

/* 8048602C-80486048 0000AC 001C+00 1/1 0/0 0/0 .text            getTimer__10daSwhit0_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::getTimer() {
    nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/getTimer__10daSwhit0_cFv.s"
}
#pragma pop

/* 80486048-80486064 0000C8 001C+00 4/4 0/0 0/0 .text            getType__10daSwhit0_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::getType() {
    nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/getType__10daSwhit0_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80487388-80487388 000018 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80487388 = "S_swHit00";
SECTION_DEAD static char const* const stringBase_80487392 = "DEFAULT_SWITCH";
#pragma pop

/* 80486064-804860EC 0000E4 0088+00 1/1 0/0 0/0 .text            makeEventId__10daSwhit0_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::makeEventId() {
    nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/makeEventId__10daSwhit0_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80487370-80487374 000000 0004+00 6/6 0/0 0/0 .rodata          @3685 */
SECTION_RODATA static f32 const lit_3685 = 1.0f;
COMPILER_STRIP_GATE(0x80487370, &lit_3685);

/* 804873BC-804873C0 -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_swhit0__stringBase0;

/* 804860EC-80486214 00016C 0128+00 1/1 0/0 0/0 .text            CreateHeap__10daSwhit0_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/CreateHeap__10daSwhit0_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80487374-80487378 000004 0004+00 1/1 0/0 0/0 .rodata          @3725 */
SECTION_RODATA static f32 const lit_3725 = 95.0f;
COMPILER_STRIP_GATE(0x80487374, &lit_3725);

/* 804873C0-80487400 000004 0040+00 1/1 0/0 0/0 .data            l_sph_src */
static dCcD_SrcSph l_sph_src = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0xd8fafdff, 0x51}, 0x0}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x5, 0x0, 0x0, 0x0}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 40.0f} // mSph
    } // mSphAttr
};

/* 80486214-80486390 000294 017C+00 1/1 0/0 0/0 .text            CreateInit__10daSwhit0_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::CreateInit() {
    nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/CreateInit__10daSwhit0_cFv.s"
}
#pragma pop

/* 80486390-804863B0 000410 0020+00 1/1 0/0 0/0 .text            CheckCreateHeap__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void CheckCreateHeap(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/CheckCreateHeap__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80487388-80487388 000018 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_804873A1 = "WAIT";
SECTION_DEAD static char const* const stringBase_804873A6 = "CHANGE";
#pragma pop

/* 80487400-80487408 -00001 0008+00 1/1 0/0 0/0 .data            action_table$3953 */
SECTION_DATA static void* action_table[2] = {
    (void*)(((char*)&d_a_swhit0__stringBase0) + 0x19),
    (void*)(((char*)&d_a_swhit0__stringBase0) + 0x1E),
};

/* 80487408-80487410 00004C 0008+00 1/1 0/0 0/0 .data l_color$localstatic3$draw__10daSwhit0_cFv */
SECTION_DATA static u8 data_80487408[8] = {
    0x01, 0x00, 0x02, 0x03, 0x03, 0x02, 0x00, 0x01,
};

/* 80487410-8048743C -00001 002C+00 1/1 0/0 0/0 .data            @4230 */
SECTION_DATA static void* lit_4230[11] = {
    (void*)(((char*)daSwhit0_Execute__FP10daSwhit0_c) + 0x40),
    (void*)(((char*)daSwhit0_Execute__FP10daSwhit0_c) + 0x4C),
    (void*)(((char*)daSwhit0_Execute__FP10daSwhit0_c) + 0x58),
    (void*)(((char*)daSwhit0_Execute__FP10daSwhit0_c) + 0x64),
    (void*)(((char*)daSwhit0_Execute__FP10daSwhit0_c) + 0x70),
    (void*)(((char*)daSwhit0_Execute__FP10daSwhit0_c) + 0x7C),
    (void*)(((char*)daSwhit0_Execute__FP10daSwhit0_c) + 0x88),
    (void*)(((char*)daSwhit0_Execute__FP10daSwhit0_c) + 0x58),
    (void*)(((char*)daSwhit0_Execute__FP10daSwhit0_c) + 0x64),
    (void*)(((char*)daSwhit0_Execute__FP10daSwhit0_c) + 0x70),
    (void*)(((char*)daSwhit0_Execute__FP10daSwhit0_c) + 0x7C),
};

/* 8048743C-8048745C -00001 0020+00 1/0 0/0 0/0 .data            l_daSwhit0_Method */
static actor_method_class l_daSwhit0_Method = {
    (process_method_func)daSwhit0_Create__FP10fopAc_ac_c,
    (process_method_func)daSwhit0_Delete__FP10daSwhit0_c,
    (process_method_func)daSwhit0_Execute__FP10daSwhit0_c,
    0,
    (process_method_func)daSwhit0_Draw__FP10daSwhit0_c,
};

/* 8048745C-8048748C -00001 0030+00 0/0 0/0 1/0 .data            g_profile_SWHIT0 */
extern actor_process_profile_definition g_profile_SWHIT0 = {
  fpcLy_CURRENT_e,       // mLayerID
  8,                     // mListID
  fpcPi_CURRENT_e,       // mListPrio
  PROC_SWHIT0,           // mProcName
  &g_fpcLf_Method.mBase, // sub_method
  sizeof(daSwhit0_c),    // mSize
  0,                     // mSizeOther
  0,                     // mParameters
  &g_fopAc_Method.base,  // sub_method
  276,                   // mPriority
  &l_daSwhit0_Method,    // sub_method
  0x00044100,            // mStatus
  fopAc_ACTOR_e,         // mActorType
  fopAc_CULLBOX_0_e,     // cullType
};

/* 8048748C-80487498 0000D0 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80487498-804874A4 0000DC 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 804874A4-804874B0 0000E8 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 804863B0-804865B4 000430 0204+00 1/1 0/0 0/0 .text            create__10daSwhit0_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::create() {
    nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/create__10daSwhit0_cFv.s"
}
#pragma pop

/* 804865B4-804865FC 000634 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGSph::~cM3dGSph() {
extern "C" asm void __dt__8cM3dGSphFv() {
    nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 804865FC-80486644 00067C 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGAab::~cM3dGAab() {
extern "C" asm void __dt__8cM3dGAabFv() {
    nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80486644-8048668C 0006C4 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DFrameCtrl::~J3DFrameCtrl() {
extern "C" asm void __dt__12J3DFrameCtrlFv() {
    nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 8048668C-80486704 00070C 0078+00 2/2 0/0 0/0 .text            checkHit__10daSwhit0_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::checkHit() {
    nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/checkHit__10daSwhit0_cFv.s"
}
#pragma pop

/* 80486704-80486788 000784 0084+00 1/1 0/0 0/0 .text            setCombackTimer__10daSwhit0_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::setCombackTimer() {
    nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/setCombackTimer__10daSwhit0_cFv.s"
}
#pragma pop

/* 80486788-80486800 000808 0078+00 1/1 0/0 0/0 .text            endCombackTimer__10daSwhit0_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::endCombackTimer() {
    nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/endCombackTimer__10daSwhit0_cFv.s"
}
#pragma pop

/* 80486800-80486858 000880 0058+00 4/4 0/0 0/0 .text            onSwitch__10daSwhit0_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::onSwitch() {
    nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/onSwitch__10daSwhit0_cFv.s"
}
#pragma pop

/* 80486858-804868A8 0008D8 0050+00 4/4 0/0 0/0 .text            offSwitch__10daSwhit0_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::offSwitch() {
    nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/offSwitch__10daSwhit0_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80487378-80487380 000008 0004+04 5/5 0/0 0/0 .rodata          @3982 */
SECTION_RODATA static f32 const lit_3982[1 + 1 /* padding */] = {
    -1.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80487378, &lit_3982);

/* 804868A8-804869C4 000928 011C+00 2/2 0/0 0/0 .text            DemoProc__10daSwhit0_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::DemoProc() {
    nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/DemoProc__10daSwhit0_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80487388-80487388 000018 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_804873AD = "D_MN06";
#pragma pop

/* 804869C4-80486ABC 000A44 00F8+00 2/2 0/0 0/0 .text            orderEvent__10daSwhit0_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::orderEvent() {
    nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/orderEvent__10daSwhit0_cFv.s"
}
#pragma pop

/* 80486ABC-80486BC4 000B3C 0108+00 1/1 0/0 0/0 .text            actionOffWait__10daSwhit0_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::actionOffWait() {
    nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/actionOffWait__10daSwhit0_cFv.s"
}
#pragma pop

/* 80486BC4-80486C28 000C44 0064+00 1/1 0/0 0/0 .text            actionToOnReady__10daSwhit0_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::actionToOnReady() {
    nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/actionToOnReady__10daSwhit0_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80487388-80487388 000018 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_804873B4 = "SWITCH";
#pragma pop

/* 80486C28-80486CE4 000CA8 00BC+00 1/1 0/0 0/0 .text            actionToOnOrder__10daSwhit0_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::actionToOnOrder() {
    nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/actionToOnOrder__10daSwhit0_cFv.s"
}
#pragma pop

/* 80486CE4-80486D88 000D64 00A4+00 1/1 0/0 0/0 .text            actionToOnDemo__10daSwhit0_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::actionToOnDemo() {
    nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/actionToOnDemo__10daSwhit0_cFv.s"
}
#pragma pop

/* 80486D88-80486EC4 000E08 013C+00 1/1 0/0 0/0 .text            actionToOnDemo2__10daSwhit0_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::actionToOnDemo2() {
    nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/actionToOnDemo2__10daSwhit0_cFv.s"
}
#pragma pop

/* 80486EC4-80486FC0 000F44 00FC+00 1/1 0/0 0/0 .text            actionSwWait__10daSwhit0_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::actionSwWait() {
    nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/actionSwWait__10daSwhit0_cFv.s"
}
#pragma pop

/* 80486FC0-804870E0 001040 0120+00 1/1 0/0 0/0 .text            actionOnWait__10daSwhit0_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::actionOnWait() {
    nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/actionOnWait__10daSwhit0_cFv.s"
}
#pragma pop

/* 804870E0-80487138 001160 0058+00 1/1 0/0 0/0 .text            setDrawMtx__10daSwhit0_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::setDrawMtx() {
    nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/setDrawMtx__10daSwhit0_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80487380-80487388 000010 0008+00 1/1 0/0 0/0 .rodata          @4212 */
SECTION_RODATA static u8 const lit_4212[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80487380, &lit_4212);

/* 80487138-80487228 0011B8 00F0+00 1/0 0/0 0/0 .text            daSwhit0_Draw__FP10daSwhit0_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daSwhit0_Draw(daSwhit0_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/daSwhit0_Draw__FP10daSwhit0_c.s"
}
#pragma pop

/* 80487228-804872E4 0012A8 00BC+00 2/0 0/0 0/0 .text            daSwhit0_Execute__FP10daSwhit0_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daSwhit0_Execute(daSwhit0_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/daSwhit0_Execute__FP10daSwhit0_c.s"
}
#pragma pop

/* 804872E4-8048732C 001364 0048+00 1/0 0/0 0/0 .text            daSwhit0_Delete__FP10daSwhit0_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daSwhit0_Delete(daSwhit0_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/daSwhit0_Delete__FP10daSwhit0_c.s"
}
#pragma pop

/* 8048732C-8048734C 0013AC 0020+00 1/0 0/0 0/0 .text            daSwhit0_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daSwhit0_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/daSwhit0_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 8048734C-80487368 0013CC 001C+00 1/1 0/0 0/0 .text            cLib_calcTimer<Uc>__FPUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_8048734C(void* _this, u8* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/func_8048734C.s"
}
#pragma pop

/* 80487388-80487388 000018 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
