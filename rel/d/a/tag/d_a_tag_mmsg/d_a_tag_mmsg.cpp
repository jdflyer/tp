//
// Generated By: dol2asm
// Translation Unit: d_a_tag_mmsg
//

#include "rel/d/a/tag/d_a_tag_mmsg/d_a_tag_mmsg.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "d/a/d_a_player.h"
#include "d/com/d_com_inf_game.h"
#include "d/d_procname.h"
#include "f_op/f_op_actor_mng.h"

/* ############################################################################################## */
/* 80D5B918-80D5BA94 000078 017C+00 1/1 0/0 0/0 .text            create__11daTagMmsg_cFv */
int daTagMmsg_c::create() {
    fopAcM_SetupActor(this, daTagMmsg_c);

    field_0x570 = fpcM_GetParam(this) & 0x3FF;
    field_0x572 = (fpcM_GetParam(this) >> 10) & 0x3FF;
    field_0x56b = (fpcM_GetParam(this) >> 29) & 1;
    field_0x568 = shape_angle.x;
    field_0x569 = (shape_angle.x >> 8) & 0xFF;

    if ((fpcM_GetParam(this) >> 30) & 1) {
        mScale.x *= 10.0f;
        mScale.y *= 10.0f;
    }

    field_0x574 = mScale.x * (10000.0f * mScale.x);
    field_0x578 = current.pos.y + mScale.y * 100.0f;
    mAttention = shape_angle.y;

    if (!checkNoAttention()) {
        s32 roomNo = fopAcM_GetRoomNo(this);
        cXyz* tmp =
            &dComIfGp_getRoomArrow(roomNo)
                 ->mEntries[dComIfGp_getRoomCamera(roomNo)->mEntries[mAttention].field_0x10]
                 .mPosition;
        mEyePos.set(tmp->x, tmp->y, tmp->z);
        mAttentionInfo.mPosition = mEyePos;
    }

    shape_angle.y = fopAcM_searchPlayerAngleY(this);
    return 4;
}

/* 80D5BA94-80D5BAB4 0001F4 0020+00 1/0 0/0 0/0 .text            daTagMmsg_Create__FP10fopAc_ac_c */
static int daTagMmsg_Create(fopAc_ac_c* i_this) {
    return static_cast<daTagMmsg_c*>(i_this)->create();
}

/* 80D5BAB4-80D5BB08 000214 0054+00 1/1 0/0 0/0 .text            __dt__11daTagMmsg_cFv */
daTagMmsg_c::~daTagMmsg_c() {}

/* 80D5BB08-80D5BB30 000268 0028+00 1/0 0/0 0/0 .text            daTagMmsg_Delete__FP11daTagMmsg_c
 */
static int daTagMmsg_Delete(daTagMmsg_c* i_this) {
    i_this->~daTagMmsg_c();
    return 1;
}

/* 80D5BB30-80D5BD08 000290 01D8+00 1/1 0/0 0/0 .text            execute__11daTagMmsg_cFv */
int daTagMmsg_c::execute() {
    if (daPy_py_c::getMidnaActor() == NULL) {
        return 1;
    }

    if (field_0x572 != 0x3FF && i_dComIfGs_isEventBit(dSv_event_flag_c::saveBitLabels[field_0x572]))
    {
        return 1;
    }

    if (field_0x569 != 0xFF && dComIfGs_isSwitch(field_0x569, fopAcM_GetHomeRoomNo(this))) {
        fopAcM_delete(this);
        return 1;
    }

    if (mUseFlg && !i_dComIfGp_event_runCheck() && field_0x56b && field_0x569 != 0xFF) {
        dComIfGs_onSwitch(field_0x569, fopAcM_GetHomeRoomNo(this));
        fopAcM_delete(this);
        return 1;
    }

    daPy_py_c* player = daPy_getLinkPlayerActorClass();
    if ((current.pos.y <= player->current.pos.y) && (field_0x578 >= player->current.pos.y) &&
        (fopAcM_searchPlayerDistanceXZ2(this) < field_0x574) &&
        (field_0x570 == 0x3FF ||
         i_dComIfGs_isEventBit(dSv_event_flag_c::saveBitLabels[field_0x570])) &&
        (field_0x568 == 0xFF || dComIfGs_isSwitch(field_0x568, fopAcM_GetHomeRoomNo(this))))
    {
        player->setMidnaMsgNum(this, shape_angle.z);
    }

    return 1;
}

/* 80D5BD08-80D5BD28 000468 0020+00 1/0 0/0 0/0 .text            daTagMmsg_Execute__FP11daTagMmsg_c
 */
static int daTagMmsg_Execute(daTagMmsg_c* i_this) {
    return i_this->execute();
}

/* 80D5BD28-80D5BD30 000488 0008+00 1/0 0/0 0/0 .text            daTagMmsg_Draw__FP11daTagMmsg_c */
static int daTagMmsg_Draw(daTagMmsg_c* i_this) {
    return 1;
}

/* ############################################################################################## */
/* 80D5BD44-80D5BD64 -00001 0020+00 1/0 0/0 0/0 .data            l_daTagMmsg_Method */
static actor_method_class l_daTagMmsg_Method = {
    (process_method_func)daTagMmsg_Create,  (process_method_func)daTagMmsg_Delete,
    (process_method_func)daTagMmsg_Execute, (process_method_func)NULL,
    (process_method_func)daTagMmsg_Draw,
};

/* 80D5BD64-80D5BD94 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Tag_Mmsg */
extern actor_process_profile_definition g_profile_Tag_Mmsg = {
    fpcLy_CURRENT_e,        // mLayerID
    7,                      // mListID
    fpcPi_CURRENT_e,        // mListPrio
    PROC_Tag_Mmsg,          // mProcName
    &g_fpcLf_Method.mBase,  // mSubMtd
    sizeof(daTagMmsg_c),    // mSize
    0,                      // mSizeOther
    0,                      // mParameters
    &g_fopAc_Method.base,   // mSubMtd
    255,                    // mPriority
    &l_daTagMmsg_Method,    // mSubMtd
    0x44000,                // mStatus
    fopAc_ENV_e,            // mActorType
    fopAc_CULLBOX_CUSTOM_e, // mCullType
};