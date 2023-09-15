//
// Generated By: dol2asm
// Translation Unit: d_a_obj_kkanban
//

#include "rel/d/a/obj/d_a_obj_kkanban/d_a_obj_kkanban.h"
#include "d/cc/d_cc_d.h"
#include "dol2asm.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoMtx_stack_c {
    static u8 now[48];
};

struct fopAc_ac_c {};

struct daObjKKanban_c {
    /* 80C46768 */ void initBaseMtx();
    /* 80C467A4 */ void setBaseMtx();
    /* 80C46808 */ void Create();
    /* 80C46928 */ void setTG();
    /* 80C469F4 */ void CreateHeap();
    /* 80C46A64 */ void create1st();
    /* 80C46AE4 */ void Execute(f32 (**)[3][4]);
    /* 80C46C1C */ void Draw();
    /* 80C46CC0 */ void Delete();
};

struct dKy_tevstr_c {};

struct J3DModelData {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dBgW {};

struct cBgS_PolyInfo {};

struct csXyz {};

struct dBgS_MoveBgActor {
    /* 80078624 */ dBgS_MoveBgActor();
    /* 800786B0 */ bool IsDelete();
    /* 800786B8 */ bool ToFore();
    /* 800786C0 */ bool ToBack();
    /* 800787BC */ void MoveBGCreate(char const*, int,
                                     void (*)(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*,
                                              csXyz*, csXyz*),
                                     u32, f32 (*)[3][4]);
    /* 800788DC */ void MoveBGDelete();
    /* 80078950 */ void MoveBGExecute();
};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct JUTNameTab {
    /* 802DEAF8 */ void getName(u16) const;
};

struct JMath {
    static u8 sincosTable_[65536];
};

struct J3DSys {
    static u8 mCurrentMtx[48];
};

struct J3DModel {};

struct J3DJoint {};

//
// Forward References:
//

extern "C" static void nodeCallBack__FP8J3DJointi();
extern "C" void initBaseMtx__14daObjKKanban_cFv();
extern "C" void setBaseMtx__14daObjKKanban_cFv();
extern "C" void Create__14daObjKKanban_cFv();
extern "C" void setTG__14daObjKKanban_cFv();
extern "C" void CreateHeap__14daObjKKanban_cFv();
extern "C" void create1st__14daObjKKanban_cFv();
extern "C" void Execute__14daObjKKanban_cFPPA3_A4_f();
extern "C" void Draw__14daObjKKanban_cFv();
extern "C" void Delete__14daObjKKanban_cFv();
extern "C" static void daObjKKanban_create1st__FP14daObjKKanban_c();
extern "C" void __dt__8cM3dGTriFv();
extern "C" void __dt__8cM3dGPlaFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" static void daObjKKanban_MoveBGDelete__FP14daObjKKanban_c();
extern "C" static void daObjKKanban_MoveBGExecute__FP14daObjKKanban_c();
extern "C" static void daObjKKanban_MoveBGDraw__FP14daObjKKanban_c();
extern "C" extern char const* const d_a_obj_kkanban__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_TriFRC11dCcD_SrcTri();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void setPos__8cM3dGTriFPC3VecPC3VecPC3Vec();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void __dl__FPv();
extern "C" void getName__10JUTNameTabCFUs();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSMTXMultVec();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Tri[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_TriAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" u8 mCurrentMtx__6J3DSys[48];
extern "C" u8 sincosTable___5JMath[65536];

//
// Declarations:
//

/* 80C46698-80C46768 000078 00D0+00 1/1 0/0 0/0 .text            nodeCallBack__FP8J3DJointi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void nodeCallBack(J3DJoint* param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kkanban/d_a_obj_kkanban/nodeCallBack__FP8J3DJointi.s"
}
#pragma pop

/* 80C46768-80C467A4 000148 003C+00 1/1 0/0 0/0 .text            initBaseMtx__14daObjKKanban_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKKanban_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kkanban/d_a_obj_kkanban/initBaseMtx__14daObjKKanban_cFv.s"
}
#pragma pop

/* 80C467A4-80C46808 000184 0064+00 2/2 0/0 0/0 .text            setBaseMtx__14daObjKKanban_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKKanban_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kkanban/d_a_obj_kkanban/setBaseMtx__14daObjKKanban_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C46F54-80C46F58 000000 0004+00 3/3 0/0 0/0 .rodata          @3715 */
SECTION_RODATA static f32 const lit_3715 = -950.0f;
COMPILER_STRIP_GATE(0x80C46F54, &lit_3715);

/* 80C46F58-80C46F5C 000004 0004+00 0/1 0/0 0/0 .rodata          @3716 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3716 = -2150.0f;
COMPILER_STRIP_GATE(0x80C46F58, &lit_3716);
#pragma pop

/* 80C46F5C-80C46F60 000008 0004+00 0/1 0/0 0/0 .rodata          @3717 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3717 = -2000.0f;
COMPILER_STRIP_GATE(0x80C46F5C, &lit_3717);
#pragma pop

/* 80C46F60-80C46F64 00000C 0004+00 0/2 0/0 0/0 .rodata          @3718 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3718 = 100.0f;
COMPILER_STRIP_GATE(0x80C46F60, &lit_3718);
#pragma pop

/* 80C46F64-80C46F68 000010 0004+00 0/2 0/0 0/0 .rodata          @3719 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3719 = 50.0f;
COMPILER_STRIP_GATE(0x80C46F64, &lit_3719);
#pragma pop

/* 80C46F68-80C46F6C 000014 0004+00 0/1 0/0 0/0 .rodata          @3720 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3720 = 800.0f;
COMPILER_STRIP_GATE(0x80C46F68, &lit_3720);
#pragma pop

/* 80C46F88-80C46F88 000034 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80C46F88 = "H_KKanban";
SECTION_DEAD static char const* const stringBase_80C46F92 = "move";
#pragma pop

/* 80C46F98-80C46F9C -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_obj_kkanban__stringBase0;

/* 80C46F9C-80C46FF0 000004 0054+00 1/1 0/0 0/0 .data            l_tri_src */
static dCcD_SrcTri l_tri_src = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0x20, 0x11}, 0x0}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x4}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, {0.0f, 0.0f, 0.0f}, {0.0f, 0.0f, 0.0f}} // mTri
    } // mTriAttr
};

/* 80C46808-80C46928 0001E8 0120+00 1/0 0/0 0/0 .text            Create__14daObjKKanban_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKKanban_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kkanban/d_a_obj_kkanban/Create__14daObjKKanban_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C46F6C-80C46F70 000018 0004+00 0/1 0/0 0/0 .rodata          @3747 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3747[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80C46F6C, &lit_3747);
#pragma pop

/* 80C46F70-80C46F74 00001C 0004+00 0/1 0/0 0/0 .rodata          @3748 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3748 = -500.0f;
COMPILER_STRIP_GATE(0x80C46F70, &lit_3748);
#pragma pop

/* 80C46F74-80C46F78 000020 0004+00 0/1 0/0 0/0 .rodata          @3749 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3749 = -1200.0f;
COMPILER_STRIP_GATE(0x80C46F74, &lit_3749);
#pragma pop

/* 80C46F78-80C46F7C 000024 0004+00 0/1 0/0 0/0 .rodata          @3750 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3750 = 760.0f;
COMPILER_STRIP_GATE(0x80C46F78, &lit_3750);
#pragma pop

/* 80C46928-80C469F4 000308 00CC+00 1/1 0/0 0/0 .text            setTG__14daObjKKanban_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKKanban_c::setTG() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kkanban/d_a_obj_kkanban/setTG__14daObjKKanban_cFv.s"
}
#pragma pop

/* 80C469F4-80C46A64 0003D4 0070+00 1/0 0/0 0/0 .text            CreateHeap__14daObjKKanban_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKKanban_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kkanban/d_a_obj_kkanban/CreateHeap__14daObjKKanban_cFv.s"
}
#pragma pop

/* 80C46A64-80C46AE4 000444 0080+00 1/1 0/0 0/0 .text            create1st__14daObjKKanban_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKKanban_c::create1st() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kkanban/d_a_obj_kkanban/create1st__14daObjKKanban_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C46F7C-80C46F80 000028 0004+00 0/1 0/0 0/0 .rodata          @3784 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3784 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x80C46F7C, &lit_3784);
#pragma pop

/* 80C46F80-80C46F84 00002C 0004+00 0/1 0/0 0/0 .rodata          @3785 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3785 = 10.0f;
COMPILER_STRIP_GATE(0x80C46F80, &lit_3785);
#pragma pop

/* 80C46F84-80C46F88 000030 0004+00 0/1 0/0 0/0 .rodata          @3786 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3786 = 2000.0f;
COMPILER_STRIP_GATE(0x80C46F84, &lit_3786);
#pragma pop

/* 80C46AE4-80C46C1C 0004C4 0138+00 1/0 0/0 0/0 .text            Execute__14daObjKKanban_cFPPA3_A4_f
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKKanban_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kkanban/d_a_obj_kkanban/Execute__14daObjKKanban_cFPPA3_A4_f.s"
}
#pragma pop

/* 80C46C1C-80C46CC0 0005FC 00A4+00 1/0 0/0 0/0 .text            Draw__14daObjKKanban_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKKanban_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kkanban/d_a_obj_kkanban/Draw__14daObjKKanban_cFv.s"
}
#pragma pop

/* 80C46CC0-80C46CF4 0006A0 0034+00 1/0 0/0 0/0 .text            Delete__14daObjKKanban_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKKanban_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kkanban/d_a_obj_kkanban/Delete__14daObjKKanban_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C46FF0-80C47010 -00001 0020+00 1/0 0/0 0/0 .data            daObjKKanban_METHODS */
SECTION_DATA static void* daObjKKanban_METHODS[8] = {
    (void*)daObjKKanban_create1st__FP14daObjKKanban_c,
    (void*)daObjKKanban_MoveBGDelete__FP14daObjKKanban_c,
    (void*)daObjKKanban_MoveBGExecute__FP14daObjKKanban_c,
    (void*)NULL,
    (void*)daObjKKanban_MoveBGDraw__FP14daObjKKanban_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80C47010-80C47040 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_KKanban */
SECTION_DATA extern void* g_profile_Obj_KKanban[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00E30000, (void*)&g_fpcLf_Method,
    (void*)0x00000754, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02240000, (void*)&daObjKKanban_METHODS,
    (void*)0x00040100, (void*)0x000E0000,
};

/* 80C47040-80C4704C 0000A8 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGTri */
SECTION_DATA extern void* __vt__8cM3dGTri[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGTriFv,
};

/* 80C4704C-80C47058 0000B4 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGPla */
SECTION_DATA extern void* __vt__8cM3dGPla[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGPlaFv,
};

/* 80C47058-80C47064 0000C0 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80C47064-80C4708C 0000CC 0028+00 1/1 0/0 0/0 .data            __vt__14daObjKKanban_c */
SECTION_DATA extern void* __vt__14daObjKKanban_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__14daObjKKanban_cFv,
    (void*)Create__14daObjKKanban_cFv,
    (void*)Execute__14daObjKKanban_cFPPA3_A4_f,
    (void*)Draw__14daObjKKanban_cFv,
    (void*)Delete__14daObjKKanban_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80C46CF4-80C46DF4 0006D4 0100+00 1/0 0/0 0/0 .text daObjKKanban_create1st__FP14daObjKKanban_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjKKanban_create1st(daObjKKanban_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kkanban/d_a_obj_kkanban/daObjKKanban_create1st__FP14daObjKKanban_c.s"
}
#pragma pop

/* 80C46DF4-80C46E50 0007D4 005C+00 1/0 0/0 0/0 .text            __dt__8cM3dGTriFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGTri::~cM3dGTri() {
extern "C" asm void __dt__8cM3dGTriFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kkanban/d_a_obj_kkanban/__dt__8cM3dGTriFv.s"
}
#pragma pop

/* 80C46E50-80C46E98 000830 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGPlaFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGPla::~cM3dGPla() {
extern "C" asm void __dt__8cM3dGPlaFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kkanban/d_a_obj_kkanban/__dt__8cM3dGPlaFv.s"
}
#pragma pop

/* 80C46E98-80C46EE0 000878 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cM3dGAab::~cM3dGAab() {
extern "C" asm void __dt__8cM3dGAabFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kkanban/d_a_obj_kkanban/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80C46EE0-80C46F00 0008C0 0020+00 1/0 0/0 0/0 .text
 * daObjKKanban_MoveBGDelete__FP14daObjKKanban_c                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjKKanban_MoveBGDelete(daObjKKanban_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kkanban/d_a_obj_kkanban/daObjKKanban_MoveBGDelete__FP14daObjKKanban_c.s"
}
#pragma pop

/* 80C46F00-80C46F20 0008E0 0020+00 1/0 0/0 0/0 .text
 * daObjKKanban_MoveBGExecute__FP14daObjKKanban_c               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjKKanban_MoveBGExecute(daObjKKanban_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kkanban/d_a_obj_kkanban/daObjKKanban_MoveBGExecute__FP14daObjKKanban_c.s"
}
#pragma pop

/* 80C46F20-80C46F4C 000900 002C+00 1/0 0/0 0/0 .text daObjKKanban_MoveBGDraw__FP14daObjKKanban_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjKKanban_MoveBGDraw(daObjKKanban_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kkanban/d_a_obj_kkanban/daObjKKanban_MoveBGDraw__FP14daObjKKanban_c.s"
}
#pragma pop

/* 80C46F88-80C46F88 000034 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
