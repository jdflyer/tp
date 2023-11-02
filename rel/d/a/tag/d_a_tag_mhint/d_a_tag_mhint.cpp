//
// Generated By: dol2asm
// Translation Unit: d_a_tag_mhint
//

#include "rel/d/a/tag/d_a_tag_mhint/d_a_tag_mhint.h"
#include "rel/d/a/d_a_midna/d_a_midna.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "d/a/d_a_npc.h"
#include "d/a/d_a_player.h"
#include "d/com/d_com_inf_game.h"
#include "d/d_procname.h"
#include "d/meter/d_meter2_info.h"
#include "dol2asm.h"

//
// Forward References:
//

extern "C" void create__12daTagMhint_cFv();
extern "C" static void daTagMhint_Create__FP10fopAc_ac_c();
extern "C" void __dt__12daTagMhint_cFv();
extern "C" static void daTagMhint_Delete__FP12daTagMhint_c();
extern "C" void eventOrder__12daTagMhint_cFv();
extern "C" void execute__12daTagMhint_cFv();
extern "C" static void daTagMhint_Execute__FP12daTagMhint_c();
extern "C" static bool daTagMhint_Draw__FP12daTagMhint_c();
extern "C" extern char const* const d_a_tag_mhint__stringBase0;
// extern "C" extern void* g_profile_Tag_Mhint[12];

//
// External References:
//

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistanceXZ2__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_orderSpeakEvent__FP10fopAc_ac_cUsUs();
extern "C" void fopAcM_orderOtherEventId__FP10fopAc_ac_csUcUsUsUs();
extern "C" void dComIfGp_getRoomCamera__Fi();
extern "C" void dComIfGp_getRoomArrow__Fi();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void getEventIdx__16dEvent_manager_cFP10fopAc_ac_cUc();
extern "C" void endCheck__16dEvent_manager_cFs();
extern "C" void request__10dAttHint_cFP10fopAc_ac_ci();
extern "C" void __ct__10dMsgFlow_cFv();
extern "C" void __dt__10dMsgFlow_cFv();
extern "C" void init__10dMsgFlow_cFP10fopAc_ac_ciiPP10fopAc_ac_c();
extern "C" void doFlow__10dMsgFlow_cFP10fopAc_ac_cPP10fopAc_ac_ci();
extern "C" void getEventId__10dMsgFlow_cFPi();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" u8 m_midnaActor__9daPy_py_c[4];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 805A6034-805A6038 000000 0004+00 2/2 0/0 0/0 .rodata          @3741 */
SECTION_RODATA static f32 const lit_3741 = 10.0f;
COMPILER_STRIP_GATE(0x805A6034, &lit_3741);

/* 805A56B8-805A58C8 000078 0210+00 1/1 0/0 0/0 .text            create__12daTagMhint_cFv */
int daTagMhint_c::create() {
    fopAcM_SetupActor(this, daTagMhint_c);

    field_0x574 = fopAcM_GetParam(this) & 0x3FF;
    field_0x57c = (fopAcM_GetParam(this) >> 10) & 0x3FF;
    field_0x578 = (fopAcM_GetParam(this) >> 20) & 0x1FF;
    field_0x57a = field_0x578;

    if ((fopAcM_GetParam(this) >> 0x1F)) {
        field_0x56a = 1;
    } else {
        field_0x56a = 0;
    }

    field_0x56b = (fopAcM_GetParam(this) >> 0x1D) & 1;

    if (daPy_getPlayerActorClass() != NULL) {
        field_0x572 = fopAcM_GetID(daPy_getPlayerActorClass()) == mParentPcId;
    } else {
        field_0x572 = 0;
    }

    field_0x568 = shape_angle.x & 0xFF;
    mSwitch = (shape_angle.x >> 8) & 0xFF;
    field_0x56d = shape_angle.y & 0xFF;
    mToolEventID = (shape_angle.y >> 8) & 0xFF;

    mEventID = i_dComIfGp_getEventManager().getEventIdx(this, mToolEventID);
    if ((fopAcM_GetParam(this) >> 0x1E) & 1) {
        mScale.x *= FLOAT_LABEL(lit_3741);
        mScale.y *= FLOAT_LABEL(lit_3741);
    }

    field_0x5cc = mScale.x * (mScale.x * 10000.0f);
    field_0x5d0 = current.pos.y + mScale.y * 100.0f;

    if (!checkNoAttention()) {
        stage_arrow_data_class* arrow_data_p =
            &dComIfGp_getRoomArrow(fopAcM_GetRoomNo(this))
                 ->mEntries[dComIfGp_getRoomCamera(fopAcM_GetRoomNo(this))
                                ->mEntries[field_0x56d]
                                .field_0x10];

        mEyePos.set(arrow_data_p->mPosition.x, arrow_data_p->mPosition.y,
                    arrow_data_p->mPosition.z);
        mAttentionInfo.mPosition = mEyePos;
    }

    return cPhs_COMPLEATE_e;
}

/* 805A58C8-805A58E8 000288 0020+00 1/0 0/0 0/0 .text            daTagMhint_Create__FP10fopAc_ac_c
 */
static int daTagMhint_Create(fopAc_ac_c* i_this) {
    return static_cast<daTagMhint_c*>(i_this)->create();
}

/* 805A58E8-805A594C 0002A8 0064+00 1/1 0/0 0/0 .text            __dt__12daTagMhint_cFv */
daTagMhint_c::~daTagMhint_c() {}

/* 805A594C-805A5974 00030C 0028+00 1/0 0/0 0/0 .text            daTagMhint_Delete__FP12daTagMhint_c
 */
static int daTagMhint_Delete(daTagMhint_c* i_this) {
    i_this->~daTagMhint_c();
    return 1;
}

/* ############################################################################################## */
/* 805A6040-805A6044 00000C 0004+00 1/2 0/0 0/0 .rodata          @3803 */
SECTION_RODATA static f32 const lit_3803 = 1.0f;
COMPILER_STRIP_GATE(0x805A6040, &lit_3803);

/* 805A6044-805A6048 000010 0004+00 1/2 0/0 0/0 .rodata          @3804 */
SECTION_RODATA static f32 const lit_3804 = -1.0f;
COMPILER_STRIP_GATE(0x805A6044, &lit_3804);

/* 805A604C-805A604C 000018 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_805A604C = "D_MN04B";
#pragma pop

/* 805A5974-805A5AE4 000334 0170+00 1/1 0/0 0/0 .text            eventOrder__12daTagMhint_cFv */
// literals / player ptr re-loads
#ifdef NONMATCHING
void daTagMhint_c::eventOrder() {
    if (!i_dComIfGp_event_runCheck()) {
        mEvtInfo.i_onCondition(dEvtCnd_CANTALK_e);

        if (!daPy_getPlayerActorClass()->checkPlayerFly() ||
            i_dComIfGp_checkPlayerStatus0(0, 0x100000))
        {
            if (field_0x56a != 0) {
                if (checkEventID()) {
                    fopAcM_orderOtherEventId(this, mEventID, mToolEventID, 0xFFFF, 0, 1);
                } else {
                    fopAcM_orderSpeakEvent(this, 0, 0);
                }
            } else if (!daPy_getPlayerActorClass()->i_checkMagneBootsOn() ||
                       strcmp(dComIfGp_getStartStageName(), "D_MN04B") == 0)
            {
                dComIfGp_att_ZHintRequest(this, 0x1FF);
                if (field_0x56f == 0) {
                    field_0x56f = 1;

                    if (field_0x57e == 0) {
                        mDoAud_seStart(Z2SE_NAVI_CALLVOICE, NULL, 0, 0);
                    }

                    field_0x57e = 60;
                }
            }
        }
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagMhint_c::eventOrder() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_mhint/d_a_tag_mhint/eventOrder__12daTagMhint_cFv.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 805A6048-805A604C 000014 0004+00 0/1 0/0 0/0 .rodata          @3956 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3956[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x805A6048, &lit_3956);
#pragma pop

/* 805A5AE4-805A6004 0004A4 0520+00 1/1 0/0 0/0 .text            execute__12daTagMhint_cFv */
// should match with literals, mDoExt_morf_c::isStop has optimization issues
#ifdef NONMATCHING
int daTagMhint_c::execute() {
    daMidna_c* midna_p = daPy_py_c::getMidnaActor();
    if (midna_p == NULL) {
        return 1;
    }

    if (field_0x57e != 0) {
        field_0x57e--;
    }

    if (checkNoAttention()) {
        mAttentionInfo.mPosition = midna_p->mAttentionInfo.mPosition;
        shape_angle.y = midna_p->shape_angle.y;
        mEyePos = mAttentionInfo.mPosition;
    } else {
        shape_angle.y = fopAcM_searchPlayerAngleY(this);
    }

    if (mEvtInfo.i_checkCommandDemoAccrpt()) {
        if (dComIfGp_evmng_endCheck(mEventID)) {
            i_dComIfGp_event_reset();
            fopAcM_orderSpeakEvent(this, 3, 0);
            field_0x570 = 1;
        }
    } else if (mEvtInfo.checkCommandTalk()) {
        if (!midna_p->checkShadowModeTalkWait()) {
            if (field_0x56e == 0) {
                mMsgFlow.init(this, shape_angle.z & 0xFFFF, 0, NULL);
                field_0x56e = 1;
                mDoAud_seStart(Z2SE_NAVI_TALK_START, NULL, 0, 0);
                field_0x571 = 0;
            } else if (mMsgFlow.doFlow(this, NULL, 0)) {
                int sp28;
                if (mMsgFlow.getEventId(&sp28) == 7) {
                    dMeter2Info_setPauseStatus(1);
                }

                if (field_0x571 == 0) {
                    field_0x571 = 1;
                    mDoAud_seStart(Z2SE_NAVI_TALK_END, NULL, 0, 0);
                }

                bool tmp;
                if (midna_p->checkShadowModelDraw()) {
                    midna_p->setShadowReturn();
                    tmp = midna_p->checkShadowReturnEnd();
                } else {
                    tmp = 1;
                }

                if (tmp) {
                    i_dComIfGp_event_reset();
                    field_0x570 = 0;

                    if (field_0x572 != 0 || (field_0x56b != 0 && mSwitch != 0xFF)) {
                        if (field_0x56b != 0) {
                            i_fopAcM_onSwitch(this, mSwitch);
                        }

                        fopAcM_delete(this);
                        field_0x578 = field_0x57a;
                    }
                }
            }
        }
    } else {
        if (field_0x570 != 0) {
            mEvtInfo.i_onCondition(dEvtCnd_CANTALK_e);
            fopAcM_orderSpeakEvent(this, 3, 0);
            return 1;
        }

        if (field_0x57c != 0x3FF &&
            i_dComIfGs_isEventBit(dSv_event_flag_c::saveBitLabels[field_0x57c]))
        {
            return 1;
        }

        if (mSwitch != 0xFF && i_fopAcM_isSwitch(this, mSwitch)) {
            fopAcM_delete(this);
            return 1;
        }

        field_0x56e = 0;

        daPy_py_c* player_p = daPy_getPlayerActorClass();
        if (current.pos.y <= player_p->current.pos.y && field_0x5d0 >= player_p->current.pos.y &&
            fopAcM_searchPlayerDistanceXZ2(this) < field_0x5cc)
        {
            if ((field_0x574 == 0x3FF ||
                 i_dComIfGs_isEventBit(dSv_event_flag_c::saveBitLabels[field_0x574])) &&
                (field_0x568 == 0xFF || i_fopAcM_isSwitch(this, field_0x568)))
            {
                if (field_0x578 != 0x1FF && field_0x578 != 0 && !i_dComIfGp_event_runCheck()) {
                    field_0x578--;
                }

                if (field_0x578 == 0 || field_0x578 == 0x1FF) {
                    eventOrder();
                }
            } else {
                field_0x578 = field_0x57a;
            }
        } else {
            field_0x578 = field_0x57a;
        }
    }

    if (!mEvtInfo.chkCondition(dEvtCnd_CANTALK_e)) {
        field_0x56f = 0;
    }

    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daTagMhint_c::execute() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_mhint/d_a_tag_mhint/execute__12daTagMhint_cFv.s"
}
#pragma pop
#endif

/* 805A6004-805A6024 0009C4 0020+00 1/0 0/0 0/0 .text daTagMhint_Execute__FP12daTagMhint_c */
static int daTagMhint_Execute(daTagMhint_c* i_this) {
    return i_this->execute();
}

/* 805A6024-805A602C 0009E4 0008+00 1/0 0/0 0/0 .text            daTagMhint_Draw__FP12daTagMhint_c
 */
static int daTagMhint_Draw(daTagMhint_c* i_this) {
    return 1;
}

/* ############################################################################################## */
/* 805A6054-805A6074 -00001 0020+00 1/0 0/0 0/0 .data            l_daTagMhint_Method */
static actor_method_class l_daTagMhint_Method = {
    (process_method_func)daTagMhint_Create,  (process_method_func)daTagMhint_Delete,
    (process_method_func)daTagMhint_Execute, (process_method_func)NULL,
    (process_method_func)daTagMhint_Draw,
};

/* 805A6074-805A60A4 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Tag_Mhint */
extern actor_process_profile_definition g_profile_Tag_Mhint = {
    fpcLy_CURRENT_e,
    7,
    fpcPi_CURRENT_e,
    PROC_Tag_Mhint,
    &g_fpcLf_Method.mBase,
    sizeof(daTagMhint_c),
    0,
    0,
    &g_fopAc_Method.base,
    254,
    &l_daTagMhint_Method,
    0x44000,
    fopAc_ENV_e,
    fopAc_CULLBOX_CUSTOM_e,
};
