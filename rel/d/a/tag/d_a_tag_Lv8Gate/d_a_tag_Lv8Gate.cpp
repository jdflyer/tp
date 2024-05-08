//
// Generated By: dol2asm
// Translation Unit: d_a_tag_Lv8Gate
//

#include "rel/d/a/tag/d_a_tag_Lv8Gate/d_a_tag_Lv8Gate.h"

#include "JSystem/J3DGraphBase/J3DMaterial.h"
#include "d/a/d_a_player.h"
#include "d/com/d_com_inf_game.h"
#include "d/d_procname.h"
#include "rel/d/a/obj/mirror/d_a_obj_mirror_table/d_a_obj_mirror_table.h"

//
// Declarations:
//

static char* l_arcName = "Lv8Gate";

/* 80D51C38-80D51C58 000078 0020+00 1/1 0/0 0/0 .text            createSolidHeap__FP10fopAc_ac_c */
static int createSolidHeap(fopAc_ac_c* i_this) {
    return static_cast<daTagLv8Gate_c*>(i_this)->createHeap();
}

daTagLv8Gate_c::~daTagLv8Gate_c() {
    dComIfG_resDelete(&mPhaseReq, l_arcName);
}

inline void daTagLv8Gate_c::initBaseMtx() {
    if (mpModel != NULL) {
        fopAcM_SetMtx(this, mpModel->getBaseTRMtx());
        mDoMtx_stack_c::transS(current.pos);
        mDoMtx_stack_c::YrotM(shape_angle.y + 0x8000);
        mpModel->setBaseTRMtx(mDoMtx_stack_c::get());
    }
}

inline void daTagLv8Gate_c::create_init() {
    fopAcM_setCullSizeBox(this, -100.0f, -50.0f, -100.0f, 100.0f, 220.0f, 100.0f);
    fopAcM_OnCarryType(this, fopAcM_CARRY_LIGHT);

    attention_info.flags = 0x10;
    attention_info.distances[fopAc_attn_CARRY_e] = 90;

    mEventID = -1;

    initBaseMtx();
}

inline int daTagLv8Gate_c::create() {
    fopAcM_SetupActor(this, daTagLv8Gate_c);

    cPhs__Step step;
    if (!dComIfGs_isEventBit(dSv_event_flag_c::saveBitLabels[354])) {
        step = cPhs_ERROR_e;
    } else {
        step = (cPhs__Step)dComIfG_resLoad(&mPhaseReq, l_arcName);
        if (step == cPhs_COMPLEATE_e) {
            if (!fopAcM_entrySolidHeap(this, createSolidHeap, 0x1600)) {
                step = cPhs_ERROR_e;
            } else {
                create_init();
            }
        }
    }

    return step;
}

inline int daTagLv8Gate_c::draw() {
    if (mpModel != NULL) {
        for (u16 index = 0; index < 3; index++) {
            J3DMaterial* material = mpModel->getModelData()->getMaterialNodePointer(index);
            material->getTevKColor(1)->r = 128;
            material->getTevKColor(1)->g = 120;
            material->getTevKColor(1)->b = 100;
        }

        g_env_light.settingTevStruct(0x10, &current.pos, &tevStr);
        g_env_light.setLightTevColorType_MAJI(mpModel, &tevStr);

        if (mpBck != NULL) {
            mpBck->entry(mpModel->getModelData());
        }

        dComIfGd_setListBG();
        mDoExt_modelUpdateDL(mpModel);
        dComIfGd_setList();

        if (mpBck != NULL) {
            mpModel->getModelData()->getJointNodePointer(0)->setMtxCalc(NULL);
        }
    }
    return TRUE;
}

/* 80D51C58-80D51D80 000098 0128+00 1/1 0/0 0/0 .text            createHeap__14daTagLv8Gate_cFv */
int daTagLv8Gate_c::createHeap() {
    if (strcmp(dComIfGp_getStartStageName(), "D_MN08") == 0) {
        J3DModelData* model_data = (J3DModelData*)dComIfG_getObjectRes(l_arcName, 8);
        mpModel = mDoExt_J3DModel__create(model_data, 0x80000, 0x11000084);

        J3DAnmTransform* bck = (J3DAnmTransform*)dComIfG_getObjectRes(l_arcName, 5);
        mpBck = new mDoExt_bckAnm();
        if (mpBck == NULL ||
            !mpBck->init(bck, TRUE, J3DFrameCtrl::LOOP_REPEAT_e, 1.0f, 0, -1, false))
        {
            return 0;
        }
    }

    return 1;
}

/* 80D51DC8-80D51F28 000208 0160+00 1/0 0/0 0/0 .text            daTagLv8Gate_Create__FP10fopAc_ac_c
 */
static int daTagLv8Gate_Create(fopAc_ac_c* i_this) {
    daTagLv8Gate_c* a_this = static_cast<daTagLv8Gate_c*>(i_this);
    return a_this->create();
}

/* 80D51F28-80D51F48 000368 0020+00 1/0 0/0 0/0 .text daTagLv8Gate_Execute__FP14daTagLv8Gate_c */
static int daTagLv8Gate_Execute(daTagLv8Gate_c* i_this) {
    return i_this->execute();
}

/* 80D51F48-80D522F0 000388 03A8+00 1/1 0/0 0/0 .text            execute__14daTagLv8Gate_cFv */
int daTagLv8Gate_c::execute() {
    dComIfG_inf_c& game_info = g_dComIfG_gameInfo;  // Fake match?

    if (game_info.getPlay().getEvent().runCheck() && !eventInfo.checkCommandTalk()) {
        s32 cut_index = dComIfGp_getEventManager().getMyStaffId(l_arcName, NULL, 0);

        if (cut_index != -1) {
            int* cut_name = (int*)dComIfGp_getEventManager().getMyNowCutName(cut_index);

            if (dComIfGp_getEventManager().getIsAddvance(cut_index)) {
                switch (*cut_name) {
                case '0001':
                    dComIfGp_getEvent().setSkipProc(this, dEv_noFinishSkipProc, 0);
                    daPy_getPlayerActorClass()->setPlayerPosAndAngle(&current.pos, shape_angle.y,
                                                                     0);

                    fopAc_ac_c* mirror_table = fopAcM_SearchByName(PROC_Obj_MirrorTable);
                    if (mirror_table != NULL) {
                        static_cast<daObjMirrorTable_c*>(mirror_table)->field_0x874 = true;
                    }
                    break;

                case '0002':
                    dStage_changeScene(getSceneNo(), 0.0f, 0, fopAcM_GetRoomNo(this), 0, -1);
                    break;
                }
            }

            if (dComIfGp_getEvent().checkSkipEdge()) {
                dComIfGp_event_reset();
                dStage_changeScene(getSceneNo(), 0.0f, 0, fopAcM_GetRoomNo(this), 0, -1);
            }

            switch (*cut_name) {
            case '0001':
            case '0002':
                dComIfGp_evmng_cutEnd(cut_index);
                break;
            }

            if (eventInfo.i_checkCommandDemoAccrpt() && mEventID != -1) {
                if (dComIfGp_evmng_endCheck(mEventID)) {
                    mEventID = -1;
                }
            }
        }
    } else {
        if (daPy_getPlayerActorClass()->checkPriActorOwn(this)) {
            for (int i = 0; i < dComIfGp_getAttention().GetActionCount(); i++) {
                if (dComIfGp_getAttention().ActionTarget(i) == this) {
                    if (dComIfGp_getAttention().getActionBtnB() != NULL &&
                        dComIfGp_getAttention().getActionBtnB()->mType == 4)
                    {
                        dComIfGp_setDoStatusForce(7, 0);
                    }
                }
            }
        }

        if (fopAcM_checkCarryNow(this)) {
            fopAcM_cancelCarryNow(this);
            attention_info.flags &= ~0x10;
            eventInfo.setArchiveName(l_arcName);
            dComIfGp_getEventManager().setObjectArchive(eventInfo.getArchiveName());
            mEventID = dComIfGp_getEventManager().getEventIdx(this, "LV8_GATE_ENTRY", -1);
            fopAcM_orderOtherEventId(this, mEventID, -1, -1, 0, 1);
        }
    }

    if (mpBck != NULL) {
        mpBck->play();
    }

    cXyz pos(0.0f, 400.0f, 1400.0f);
    mDoMtx_stack_c::transS(current.pos);
    mDoMtx_stack_c::YrotM(current.angle.y);
    mDoMtx_stack_c::multVec(&pos, &pos);

    Z2GetAudioMgr()->seStartLevel(Z2SE_OBJ_MONOLIS_HOLE, &pos, 0, 0, 1.0f, 1.0f, -1.0f, -1.0f, 0);

    return 1;
}

/* 80D522F0-80D5246C 000730 017C+00 1/0 0/0 0/0 .text daTagLv8Gate_Draw__FP14daTagLv8Gate_c */
static int daTagLv8Gate_Draw(daTagLv8Gate_c* i_this) {
    return i_this->draw();
}

/* 80D5246C-80D52474 0008AC 0008+00 1/0 0/0 0/0 .text daTagLv8Gate_IsDelete__FP14daTagLv8Gate_c */
static int daTagLv8Gate_IsDelete(daTagLv8Gate_c* i_this) {
    return TRUE;
}

/* 80D52474-80D524C4 0008B4 0050+00 1/0 0/0 0/0 .text daTagLv8Gate_Delete__FP14daTagLv8Gate_c */
static int daTagLv8Gate_Delete(daTagLv8Gate_c* i_this) {
    i_this->~daTagLv8Gate_c();
    return TRUE;
}

/* 80D52514-80D52534 -00001 0020+00 1/0 0/0 0/0 .data            l_daTagLv8Gate_Method */
static actor_method_class l_daTagLv8Gate_Method = {
    (process_method_func)daTagLv8Gate_Create,  (process_method_func)daTagLv8Gate_Delete,
    (process_method_func)daTagLv8Gate_Execute, (process_method_func)daTagLv8Gate_IsDelete,
    (process_method_func)daTagLv8Gate_Draw,
};

/* 80D52534-80D52564 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Tag_Lv8Gate */
extern actor_process_profile_definition g_profile_Tag_Lv8Gate = {
    fpcLy_CURRENT_e,         // mLayerID
    7,                       // mListID
    fpcPi_CURRENT_e,         // mListPrio
    PROC_Tag_Lv8Gate,        // mProcName
    &g_fpcLf_Method.mBase,   // sub_method
    sizeof(daTagLv8Gate_c),  // mSize
    0,                       // mSizeOther
    0,                       // mParameters
    &g_fopAc_Method.base,    // sub_method
    0x108,                   // mPriority
    &l_daTagLv8Gate_Method,  // sub_method
    0x40000,                 // mStatus
    0,                       // mActorType
    fopAc_CULLBOX_CUSTOM_e,  // cullType
};
