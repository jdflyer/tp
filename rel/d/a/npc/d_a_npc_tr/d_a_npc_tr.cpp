//
// Generated By: dol2asm
// Translation Unit: d_a_npc_tr
//

#include "rel/d/a/npc/d_a_npc_tr/d_a_npc_tr.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JMath/JMath.h"
#include "SSystem/SComponent/c_math.h"
#include "dol2asm.h"
#include "dolphin/types.h"
#include "d/com/d_com_inf_game.h"
#include "f_op/f_op_actor_mng.h"
#include "m_Do/m_Do_mtx.h"

//
// Types:
//

class npc_tr_class : public fopAc_ac_c {
public:
    /* 0x568 */ u8 field_0x568[0x5AC - 0x568];
    /* 0x5AC */ request_of_phase_process_class mPhaseReq;
    /* 0x5B4 */ u8 field_0x5b4;
    /* 0x5B8 */ J3DModel* field_0x5b8;
    /* 0x5BC */ s16 field_0x5bc;
    /* 0x5BE */ s16 field_0x5be;
    /* 0x5C0 */ s16 field_0x5c0;
    /* 0x5C4 */ cXyz field_0x5c4;
    /* 0x5D0 */ u8 field_0x5d0[0x8];
    /* 0x5D8 */ f32 field_0x5d8;
    /* 0x5DC */ s16 field_0x5dc[4];
    /* 0x5E4 */ f32 field_0x5e4;
    /* 0x5E8 */ f32 field_0x5e8;
    /* 0x5EC */ s16 field_0x5ec;
    /* 0x5EE */ s16 field_0x5ee;
    /* 0x5F0 */ s16 field_0x5f0;
    /* 0x5F2 */ s16 field_0x5f2[3];
    /* 0x5F8 */ f32 field_0x5f8;
    /* 0x5FC */ f32 field_0x5fc;
    /* 0x600 */ u8 field_0x600;
};

class daNPC_TR_HIO_c {
public:
    /* 80B25A0C */ daNPC_TR_HIO_c();
    /* 80B264E4 */ virtual ~daNPC_TR_HIO_c();

    /* 0x04 */ s8 field_0x4;
    /* 0x08 */ f32 field_0x8;
    /* 0x0C */ f32 field_0xc;
    /* 0x10 */ f32 field_0x10;
    /* 0x14 */ f32 field_0x14;
    /* 0x18 */ f32 field_0x18;
};

//
// Forward References:
//

extern "C" void __ct__14daNPC_TR_HIO_cFv();
extern "C" static void nodeCallBack__FP8J3DJointi();
extern "C" static void daNPC_TR_Draw__FP12npc_tr_class();
extern "C" static void npc_tr_move__FP12npc_tr_class();
extern "C" static void action__FP12npc_tr_class();
extern "C" static void daNPC_TR_Execute__FP12npc_tr_class();
extern "C" static bool daNPC_TR_IsDelete__FP12npc_tr_class();
extern "C" static void daNPC_TR_Delete__FP12npc_tr_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daNPC_TR_Create__FP10fopAc_ac_c();
extern "C" void __dt__14daNPC_TR_HIO_cFv();
extern "C" void __sinit_d_a_npc_tr_cpp();
extern "C" extern char const* const d_a_npc_tr__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void __dl__FPv();
extern "C" void _savegpr_28();
extern "C" void _restgpr_28();
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" u8 mCurrentMtx__6J3DSys[48];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80B2657C-80B26580 000000 0004+00 4/4 0/0 0/0 .rodata          @3768 */
SECTION_RODATA static f32 const lit_3768 = 4.0f / 5.0f;
COMPILER_STRIP_GATE(0x80B2657C, &lit_3768);

/* 80B26580-80B26584 000004 0004+00 0/1 0/0 0/0 .rodata          @3769 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3769 = 15.0f;
COMPILER_STRIP_GATE(0x80B26580, &lit_3769);
#pragma pop

/* 80B26584-80B26588 000008 0004+00 1/2 0/0 0/0 .rodata          @3770 */
SECTION_RODATA static f32 const lit_3770 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x80B26584, &lit_3770);

/* 80B26588-80B2658C 00000C 0004+00 0/1 0/0 0/0 .rodata          @3771 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3771 = 3.0f / 5.0f;
COMPILER_STRIP_GATE(0x80B26588, &lit_3771);
#pragma pop

/* 80B2658C-80B26590 000010 0004+00 0/1 0/0 0/0 .rodata          @3772 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3772 = 250.0f;
COMPILER_STRIP_GATE(0x80B2658C, &lit_3772);
#pragma pop

/* 80B26610-80B26630 -00001 0020+00 1/0 0/0 0/0 .data            l_daNPC_TR_Method */
SECTION_DATA static void* l_daNPC_TR_Method[8] = {
    (void*)daNPC_TR_Create__FP10fopAc_ac_c,
    (void*)daNPC_TR_Delete__FP12npc_tr_class,
    (void*)daNPC_TR_Execute__FP12npc_tr_class,
    (void*)daNPC_TR_IsDelete__FP12npc_tr_class,
    (void*)daNPC_TR_Draw__FP12npc_tr_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80B26630-80B26660 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_NPC_TR */
SECTION_DATA extern void* g_profile_NPC_TR[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x010E0000, (void*)&g_fpcLf_Method,
    (void*)0x00000604, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02D30000, (void*)&l_daNPC_TR_Method,
    (void*)0x00040100, (void*)0x02000000,
};

/* 80B26660-80B2666C 000050 000C+00 2/2 0/0 0/0 .data            __vt__14daNPC_TR_HIO_c */
SECTION_DATA extern void* __vt__14daNPC_TR_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14daNPC_TR_HIO_cFv,
};

/* 80B25A0C-80B25A54 0000EC 0048+00 1/1 0/0 0/0 .text            __ct__14daNPC_TR_HIO_cFv */
// matches with literals
#ifdef NONMATCHING
daNPC_TR_HIO_c::daNPC_TR_HIO_c() {
    field_0x4 = -1;
    field_0x8 = 0.8f;
    field_0xc = 15.0f;
    field_0x10 = 0.3f;
    field_0x14 = 0.6f;
    field_0x18 = 250.0f;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daNPC_TR_HIO_c::daNPC_TR_HIO_c() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_tr/d_a_npc_tr/__ct__14daNPC_TR_HIO_cFv.s"
}
#pragma pop
#endif

/* 80B25A54-80B25B78 000134 0124+00 1/1 0/0 0/0 .text            nodeCallBack__FP8J3DJointi */
#ifdef NONMATCHING
static int nodeCallBack(J3DJoint* p_joint, int param_1) {
    if (param_1 == 0) {
        int jointNo = p_joint->getJntNo();
        J3DModel* sysModel = j3dSys.mModel;
        npc_tr_class* npc_tr = (npc_tr_class*)sysModel->mUserArea;

        PSMTXCopy(sysModel->i_getAnmMtx(jointNo), *calc_mtx);

        if (jointNo == 1) {
            mDoMtx_YrotM(*calc_mtx, npc_tr->field_0x5f2[0] + (s16)(npc_tr->field_0x5f8 * 0.3f));
        } else if (jointNo >= 1 && jointNo <= 3) {
            mDoMtx_YrotM(*calc_mtx, npc_tr->field_0x5f2[jointNo - 1] + (s16)(npc_tr->field_0x5f8));
        }

        PSMTXCopy(*calc_mtx, sysModel->i_getAnmMtx(jointNo));
        PSMTXCopy(*calc_mtx, j3dSys.mCurrentMtx);
    }

    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm int nodeCallBack(J3DJoint* param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_tr/d_a_npc_tr/nodeCallBack__FP8J3DJointi.s"
}
#pragma pop
#endif

/* 80B25B78-80B25BDC 000258 0064+00 1/0 0/0 0/0 .text            daNPC_TR_Draw__FP12npc_tr_class */
static int daNPC_TR_Draw(npc_tr_class* npc_tr) {
    g_env_light.settingTevStruct(0, &npc_tr->current.pos, &npc_tr->mTevStr);
    g_env_light.setLightTevColorType_MAJI(npc_tr->field_0x5b8->mModelData, &npc_tr->mTevStr);
    mDoExt_modelUpdateDL(npc_tr->field_0x5b8);
    return 1;
}

/* ############################################################################################## */
/* 80B26590-80B26594 000014 0004+00 0/0 0/0 0/0 .rodata          @3849 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3849 = 50.0f;
COMPILER_STRIP_GATE(0x80B26590, &lit_3849);
#pragma pop

/* 80B26594-80B26598 000018 0004+00 0/2 0/0 0/0 .rodata          @3850 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3850[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80B26594, &lit_3850);
#pragma pop

/* 80B26598-80B2659C 00001C 0004+00 0/1 0/0 0/0 .rodata          @3931 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3931 = 1000.0f;
COMPILER_STRIP_GATE(0x80B26598, &lit_3931);
#pragma pop

/* 80B2659C-80B265A4 000020 0004+04 0/2 0/0 0/0 .rodata          @3932 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3932[1 + 1 /* padding */] = {
    200.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80B2659C, &lit_3932);
#pragma pop

/* 80B265A4-80B265AC 000028 0008+00 0/1 0/0 0/0 .rodata          @3933 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3933[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B265A4, &lit_3933);
#pragma pop

/* 80B265AC-80B265B4 000030 0008+00 0/1 0/0 0/0 .rodata          @3934 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3934[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B265AC, &lit_3934);
#pragma pop

/* 80B265B4-80B265BC 000038 0008+00 0/1 0/0 0/0 .rodata          @3935 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3935[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B265B4, &lit_3935);
#pragma pop

/* 80B265BC-80B265C0 000040 0004+00 0/1 0/0 0/0 .rodata          @3936 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3936 = 500.0f;
COMPILER_STRIP_GATE(0x80B265BC, &lit_3936);
#pragma pop

/* 80B265C0-80B265C4 000044 0004+00 0/1 0/0 0/0 .rodata          @3937 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3937 = 30.0f;
COMPILER_STRIP_GATE(0x80B265C0, &lit_3937);
#pragma pop

/* 80B265C4-80B265C8 000048 0004+00 1/2 0/0 0/0 .rodata          @3938 */
SECTION_RODATA static f32 const lit_3938 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x80B265C4, &lit_3938);

/* 80B265C8-80B265CC 00004C 0004+00 0/1 0/0 0/0 .rodata          @3939 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3939 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x80B265C8, &lit_3939);
#pragma pop

/* 80B265CC-80B265D0 000050 0004+00 0/2 0/0 0/0 .rodata          @3940 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3940 = 0.5f;
COMPILER_STRIP_GATE(0x80B265CC, &lit_3940);
#pragma pop

/* 80B265D0-80B265D4 000054 0004+00 0/1 0/0 0/0 .rodata          @3941 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3941 = 20.0f;
COMPILER_STRIP_GATE(0x80B265D0, &lit_3941);
#pragma pop

/* 80B265D4-80B265D8 000058 0004+00 0/1 0/0 0/0 .rodata          @3942 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3942 = 5.0f;
COMPILER_STRIP_GATE(0x80B265D4, &lit_3942);
#pragma pop

/* 80B265D8-80B265DC 00005C 0004+00 0/1 0/0 0/0 .rodata          @3943 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3943 = 4000.0f;
COMPILER_STRIP_GATE(0x80B265D8, &lit_3943);
#pragma pop

/* 80B265DC-80B265E0 000060 0004+00 0/1 0/0 0/0 .rodata          @3944 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3944 = -4000.0f;
COMPILER_STRIP_GATE(0x80B265DC, &lit_3944);
#pragma pop

/* 80B265E0-80B265E4 000064 0004+00 0/2 0/0 0/0 .rodata          @3945 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3945 = 1.0f;
COMPILER_STRIP_GATE(0x80B265E0, &lit_3945);
#pragma pop

/* 80B265E4-80B265EC 000068 0008+00 0/1 0/0 0/0 .rodata          @3947 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3947[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B265E4, &lit_3947);
#pragma pop

/* 80B26678-80B2667C 000008 0004+00 2/2 0/0 0/0 .bss             None */
static u8 data_80B26678;

/* 80B2667C-80B26688 00000C 000C+00 1/1 0/0 0/0 .bss             @3763 */
//static u8 lit_3763[12];

/* 80B26688-80B266A4 000018 001C+00 5/5 0/0 0/0 .bss             l_HIO */
static daNPC_TR_HIO_c l_HIO;

/* 80B25BDC-80B25FE0 0002BC 0404+00 1/1 0/0 0/0 .text            npc_tr_move__FP12npc_tr_class */
#ifdef NONMATCHING
static void npc_tr_move(npc_tr_class* npc_tr) {
    f32 var_f31;
    s16 var_r29;

    switch (npc_tr->field_0x5c0) {
    case 0:
        if (npc_tr->field_0x5dc[0] == 0) {
            for (int i = 0; i < 100; i++) {
                npc_tr->field_0x5c4.x = npc_tr->orig.pos.x + cM_rndFX(1000.0f);
                npc_tr->field_0x5c4.y = npc_tr->orig.pos.y + cM_rndFX(200.0f);
                npc_tr->field_0x5c4.z = npc_tr->orig.pos.z + cM_rndFX(1000.0f);

                cXyz distance = npc_tr->field_0x5c4 - npc_tr->current.pos;
                distance.y = 0.0f;

                if (distance.abs() > 500.0f) {
                    npc_tr->field_0x5c0 = 1;
                    npc_tr->field_0x5dc[0] = (s16)(cM_rndF(30.0f) + 30.0f);
                    break;
                }
            }
        }
        npc_tr->field_0x5e8 = 0.1f;
        var_r29 = 0;
        var_f31 = 0.05f;
        break;
    case 1:
        if (npc_tr->field_0x5dc[0] == 0) {
            npc_tr->field_0x5c0 = 0;
            npc_tr->field_0x5dc[0] = (s16)(cM_rndF(30.0f) + 30.0f);
        }
        npc_tr->field_0x5e8 = l_HIO.field_0x10;
        var_r29 = 0x400;
        var_f31 = 0.5f;
        break;
    }

    if (npc_tr->field_0x5dc[1] != 0) {
        var_f31 = 0.5f;
        npc_tr->field_0x5e8 = l_HIO.field_0x14;
        var_r29 = 0x600;
    } else if (npc_tr->field_0x5d8 < l_HIO.field_0x18) {
        npc_tr->field_0x5dc[1] = (s16)(cM_rndF(20.0f) + 20.0f);
        
        if (npc_tr->field_0x5c0 == 1) {
            npc_tr->field_0x5c0 = 0;
        }
    }

    cXyz distance = npc_tr->field_0x5c4 - npc_tr->current.pos;
    s16 angle = npc_tr->current.angle.y;
    cLib_addCalcAngleS2(&npc_tr->current.angle.y, cM_atan2s(distance.x, distance.z), 4, var_r29);
    
    f32 var_f2 = JMAFastSqrt((distance.x * distance.x) + (distance.z * distance.z));
    cLib_addCalcAngleS2(&npc_tr->current.angle.x, -cM_atan2s(distance.y, var_f2), 4, var_r29);

    f32 var_f1_2 = (f32)(angle - npc_tr->current.angle.y) * 5.0f;
    if (var_f1_2 > 4000.0f) {
        var_f1_2 = 4000.0f;
    } else if (var_f1_2 < -4000.0f) {
        var_f1_2 = -4000.0f;
    }

    cLib_addCalc2(&npc_tr->field_0x5f8, var_f1_2, 0.5f, 1000.0f);
    cLib_addCalc2(&npc_tr->speedF, npc_tr->field_0x5e4 * l_HIO.field_0xc, 1.0f, var_f31);
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void npc_tr_move(npc_tr_class* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_tr/d_a_npc_tr/npc_tr_move__FP12npc_tr_class.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 80B265EC-80B265F8 000070 000C+00 0/1 0/0 0/0 .rodata          @3953 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3953[12] = {
    0x3F, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x40, 0x20, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B265EC, &lit_3953);
#pragma pop

/* 80B265F8-80B265FC 00007C 0004+00 0/1 0/0 0/0 .rodata          @3983 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3983 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x80B265F8, &lit_3983);
#pragma pop

/* 80B265FC-80B26600 000080 0004+00 0/1 0/0 0/0 .rodata          @3984 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3984 = 2000.0f;
COMPILER_STRIP_GATE(0x80B265FC, &lit_3984);
#pragma pop

/* 80B26600-80B26604 000084 0004+00 0/1 0/0 0/0 .rodata          @3985 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3985 = 13000.0f;
COMPILER_STRIP_GATE(0x80B26600, &lit_3985);
#pragma pop

/* 80B26604-80B26608 000088 0004+00 0/1 0/0 0/0 .rodata          @3986 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3986 = -3.0f / 10.0f;
COMPILER_STRIP_GATE(0x80B26604, &lit_3986);
#pragma pop

/* 80B25FE0-80B261D8 0006C0 01F8+00 1/1 0/0 0/0 .text            action__FP12npc_tr_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void action(npc_tr_class* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_tr/d_a_npc_tr/action__FP12npc_tr_class.s"
}
#pragma pop

/* 80B261D8-80B262D0 0008B8 00F8+00 2/1 0/0 0/0 .text            daNPC_TR_Execute__FP12npc_tr_class
 */
static int daNPC_TR_Execute(npc_tr_class* npc_tr) {
    npc_tr->field_0x5bc++;
    npc_tr->field_0x5d8 = fopAcM_searchActorDistance(npc_tr, (fopAc_ac_c*)dComIfGp_getPlayer(0));

    for (int i = 0; i < 4; i++) {
        if (npc_tr->field_0x5dc[i] != 0) {
            npc_tr->field_0x5dc[i]--;
        }
    }
    action(npc_tr);

    mDoMtx_stack_c::transS(npc_tr->current.pos.x, npc_tr->current.pos.y, npc_tr->current.pos.z);
    mDoMtx_stack_c::YrotM(npc_tr->shape_angle.y + npc_tr->field_0x5f0);
    mDoMtx_stack_c::XrotM(npc_tr->shape_angle.x);

    f32 scale = npc_tr->mScale.x * l_HIO.field_0x8;
    mDoMtx_stack_c::scaleM(scale, scale, scale);
    PSMTXCopy(mDoMtx_stack_c::get(), npc_tr->field_0x5b8->mBaseTransformMtx);

    return 1;
}

/* 80B262D0-80B262D8 0009B0 0008+00 1/0 0/0 0/0 .text            daNPC_TR_IsDelete__FP12npc_tr_class
 */
static bool daNPC_TR_IsDelete(npc_tr_class* param_0) {
    return true;
}

/* 80B262D8-80B2632C 0009B8 0054+00 1/0 0/0 0/0 .text            daNPC_TR_Delete__FP12npc_tr_class
 */
static int daNPC_TR_Delete(npc_tr_class* npc_tr) {
    dComIfG_resDelete(&npc_tr->mPhaseReq, "NPC_TR");

    if (npc_tr->field_0x600) {
        data_80B26678 = 0;
    }

    return 1;
}

/* 80B2632C-80B263E4 000A0C 00B8+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
static int useHeapInit(fopAc_ac_c* actor) {
    npc_tr_class* npc_tr = (npc_tr_class*)actor;

    J3DModelData* modelData = (J3DModelData*)dComIfG_getObjectRes("NPC_TR", 3);
    npc_tr->field_0x5b8 = mDoExt_J3DModel__create(modelData, 0x80000, 0x11000084);

    if (npc_tr->field_0x5b8 == NULL) {
        return 0;
    }

    npc_tr->field_0x5b8->setUserArea((u32)actor);

    for (u16 i = 0; i < npc_tr->field_0x5b8->getModelData()->getJointNum(); i++) {
        npc_tr->field_0x5b8->getModelData()->getJointNodePointer(i)->setCallBack(nodeCallBack);
    }

    return 1;
}

/* 80B263E4-80B264E4 000AC4 0100+00 1/0 0/0 0/0 .text            daNPC_TR_Create__FP10fopAc_ac_c */
// matches with literals
#ifdef NONMATCHING
static int daNPC_TR_Create(fopAc_ac_c* ac) {
    if (!fopAcM_CheckCondition(ac, 8)) {
        new (ac) npc_tr_class();
        fopAcM_OnCondition(ac, 8);
    }
    npc_tr_class* npc_tr = (npc_tr_class*)ac;
    
    int phase_state = dComIfG_resLoad(&npc_tr->mPhaseReq, "NPC_TR");
    if (phase_state == cPhs_COMPLEATE_e) {
        npc_tr->field_0x5b4 = fopAcM_GetParam(npc_tr);

        if (!fopAcM_entrySolidHeap(npc_tr, useHeapInit, 0x4B000)) {
            return cPhs_ERROR_e;
        }

        if (!data_80B26678) {
            npc_tr->field_0x600 = 1;
            data_80B26678 = 1;
            l_HIO.field_0x4 = -1;
        }

        npc_tr->mCullMtx = npc_tr->field_0x5b8->getBaseTRMtx();
        npc_tr->mScale.x = cM_rndFX(0.1f) + 0.8f;
        daNPC_TR_Execute(npc_tr);
    }

    return phase_state;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm int daNPC_TR_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_tr/d_a_npc_tr/daNPC_TR_Create__FP10fopAc_ac_c.s"
}
#pragma pop
#endif

/* 80B264E4-80B2652C 000BC4 0048+00 2/1 0/0 0/0 .text            __dt__14daNPC_TR_HIO_cFv */
daNPC_TR_HIO_c::~daNPC_TR_HIO_c() {}
