//
// Generated By: dol2asm
// Translation Unit: d/a/d_a_itembase
//

#include "d/a/d_a_itembase.h"
#include "d/com/d_com_inf_game.h"
#include "d/d_item_data.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// External References:
//

extern "C" extern dScnKy_env_light_c g_env_light;

//
// Declarations:
//

/* 80144724-8014474C 13F064 0028+00 0/0 1/1 8/8 .text            DeleteBase__12daItemBase_cFPCc */
int daItemBase_c::DeleteBase(char const* res) {
    dComIfG_resDelete(&mPhase, res);
    return 1;
}

/* 8014474C-80144754 13F08C 0008+00 1/0 1/0 9/0 .text            clothCreate__12daItemBase_cFv */
int daItemBase_c::clothCreate() {
    return 1;
}

/* 80144754-8014475C 13F094 0008+00 1/0 1/0 3/0 .text            __CreateHeap__12daItemBase_cFv */
int daItemBase_c::__CreateHeap() {
    return 1;
}

/* 8014475C-80144B94 13F09C 0438+00 0/0 3/3 0/0 .text CreateItemHeap__12daItemBase_cFPCcsssssss */
int daItemBase_c::CreateItemHeap(char const* arcName, s16 bmdName, s16 btkName, s16 bpkName,
                                 s16 bckName, s16 bxaName, s16 brkName, s16 btpName) {
    J3DModelData* modelData = (J3DModelData*)dComIfG_getObjectRes(arcName, bmdName);

    u32 flags = 0x11000084;
    u32 uvar7 = 0x80000;

    if (btkName > 0) {
        flags |= 0x200;
    }

    if (bpkName > 0) {
        flags |= 0x1;
    }

    if (btpName > 0) {
        flags |= 0x20000;
    }

    if (chkFlag(4)) {
        uvar7 = 0;
    }

    mpModel = mDoExt_J3DModel__create(modelData, uvar7, flags);

    if (mpModel == NULL) {
        return 0;
    } else {
        mpBtkAnm = NULL;
        if (btkName > 0) {
            J3DAnmTextureSRTKey* pbtk =
                (J3DAnmTextureSRTKey*)dComIfG_getObjectRes(arcName, btkName);
            mpBtkAnm = new mDoExt_btkAnm();

            if (mpBtkAnm == NULL || !mpBtkAnm->init(modelData, pbtk, 1, 2, 1.0f, 0, -1)) {
                return 0;
            }
        }

        mpBpkAnm = NULL;
        if (bpkName > 0) {
            J3DAnmColor* pbpk = (J3DAnmColor*)dComIfG_getObjectRes(arcName, bpkName);
            mpBpkAnm = new mDoExt_bpkAnm();

            if (mpBpkAnm == NULL || !mpBpkAnm->init(modelData, pbpk, 1, 2, 1.0f, 0, -1)) {
                return 0;
            }
        }

        mpBckAnm = NULL;
        if (bckName > 0) {
            J3DAnmTransform* pbck = (J3DAnmTransform*)dComIfG_getObjectRes(arcName, bckName);
            mpBckAnm = new mDoExt_bckAnm();

            if (mpBckAnm == NULL || !mpBckAnm->init(pbck, 1, 2, 1.0f, 0, -1, false)) {
                return 0;
            }
        }

        mpBrkAnm = NULL;
        if (brkName > 0) {
            J3DAnmTevRegKey* pbrk = (J3DAnmTevRegKey*)dComIfG_getObjectRes(arcName, brkName);
            s8 tevFrm = getTevFrm();
            int tmp = 1;
            if (tevFrm != -1) {
                tmp = 0;
            }

            mpBrkAnm = new mDoExt_brkAnm();

            if (mpBrkAnm == NULL || !mpBrkAnm->init(modelData, pbrk, tmp, 2, 1.0f, 0, -1)) {
                return 0;
            }
        }

        mpBtpAnm = NULL;
        if (btpName > 0) {
            J3DAnmTexPattern* pbtp = (J3DAnmTexPattern*)dComIfG_getObjectRes(arcName, btpName);
            mpBtpAnm = new mDoExt_btpAnm();

            if (mpBtpAnm == NULL || !mpBtpAnm->init(modelData, pbtp, 1, 2, 1.0f, 0, -1)) {
                return 0;
            }
        }

        if (!clothCreate()) {
            return 0;
        }
    }

    return __CreateHeap() ? 1 : 0;
}

/* 80144B94-80144C30 13F4D4 009C+00 1/0 1/0 9/0 .text            DrawBase__12daItemBase_cFv */
int daItemBase_c::DrawBase() {
    setTevStr();
    animEntry();
    setListStart();
    settingBeforeDraw();
    mDoExt_modelUpdateDL(mpModel);
    setListEnd();
    setShadow();
    return 1;
}

/* 80144C30-80144C7C 13F570 004C+00 1/0 1/0 9/0 .text            RotateYBase__12daItemBase_cFv */
void daItemBase_c::RotateYBase() {
    mCollisionRot.y += (s16)(0xFFFF / getData().field_0x1c);
}

/* 80144C7C-80144CA0 13F5BC 0024+00 1/0 1/0 5/0 .text            setListStart__12daItemBase_cFv */
void daItemBase_c::setListStart() {
    dComIfGd_setListDark();
}

/* 80144CA0-80144CC4 13F5E0 0024+00 1/1 0/0 0/0 .text            setListEnd__12daItemBase_cFv */
void daItemBase_c::setListEnd() {
    dComIfGd_setList();
}

/* 80144CC4-80144D18 13F604 0054+00 1/0 1/0 9/0 .text            settingBeforeDraw__12daItemBase_cFv
 */
void daItemBase_c::settingBeforeDraw() {
    if (chkFlag(4)) {
        fopAcM_setEffectMtx(this, mpModel->getModelData());
    }
}

/* 80144D18-80144D70 13F658 0058+00 1/0 0/0 8/0 .text            setTevStr__12daItemBase_cFv */
void daItemBase_c::setTevStr() {
    g_env_light.settingTevStruct(0, &mCurrent.mPosition, &mTevStr);
    g_env_light.setLightTevColorType_MAJI(mpModel, &mTevStr);
}

/* 80144D70-80144EDC 13F6B0 016C+00 1/0 1/0 9/1 .text            setShadow__12daItemBase_cFv */
void daItemBase_c::setShadow() {
    f32 scale = mScale.x * getShadowSize();

    if (!chkFlag(0x10)) {
        if (getShadowSize() != 0.0f) {
            dComIfGd_setSimpleShadow(&mCurrent.mPosition, mAcch.GetGroundH(), scale,
                                     mAcch.m_gnd, 0, 1.0f,
                                     dDlst_shadowControl_c::getSimpleTex());
        }
    } else {
        f32 shadowSize = getShadowSize();
        if (shadowSize == 0.0f) {
            shadowSize = 150.0f;
        }

        field_0x91c =
            dComIfGd_setShadow(field_0x91c, 3, mpModel, &mCurrent.mPosition, shadowSize, 0.0f,
                               mCurrent.mPosition.y, mAcch.GetGroundH(), mAcch.m_gnd,
                               &mTevStr, 0, 1.0f, dDlst_shadowControl_c::getSimpleTex());
    }
}

/* 80144EDC-8014503C 13F81C 0160+00 1/0 1/0 9/0 .text            animEntry__12daItemBase_cFv */
void daItemBase_c::animEntry() {
    if (mpBrkAnm != NULL) {
        s8 tevFrm = getTevFrm();
        if (tevFrm != -1) {
            mpBrkAnm->entry(mpModel->getModelData(), tevFrm);
        } else {
            mpBrkAnm->entry(mpModel->getModelData());
        }
    }

    if (mpBtpAnm != NULL) {
        s8 btpFrm = getBtpFrm();
        if (btpFrm != -1) {
            mpBtpAnm->entry(mpModel->getModelData(), btpFrm);
        } else {
            mpBtpAnm->entry(mpModel->getModelData());
        }
    }

    if (mpBtkAnm != NULL) {
        mpBtkAnm->entry(mpModel->getModelData());
    }

    if (mpBckAnm != NULL) {
        mpBckAnm->entry(mpModel->getModelData());
    }

    if (mpBpkAnm != NULL) {
        mpBpkAnm->entry(mpModel->getModelData());
    }
}

/* 8014503C-80145144 13F97C 0108+00 0/0 2/2 4/4 .text            animPlay__12daItemBase_cFffffff */
void daItemBase_c::animPlay(f32 btkSpeed, f32 bpkSpeed, f32 bckSpeed, f32 param_3, f32 brkSpeed,
                            f32 btpSpeed) {
    if (mpBrkAnm != NULL && getTevFrm() == -1) {
        mpBrkAnm->setPlaySpeed(brkSpeed);
        mpBrkAnm->play();
    }

    if (mpBtpAnm != NULL && getBtpFrm() == -1) {
        mpBtpAnm->setPlaySpeed(btpSpeed);
        mpBtpAnm->play();
    }

    if (mpBtkAnm != NULL) {
        mpBtkAnm->setPlaySpeed(btkSpeed);
        mpBtkAnm->play();
    }

    if (mpBpkAnm != NULL) {
        mpBpkAnm->setPlaySpeed(bpkSpeed);
        mpBpkAnm->play();
    }

    if (mpBckAnm != NULL) {
        mpBckAnm->setPlaySpeed(bckSpeed);
        mpBckAnm->play();
    }
}

/* 80145144-80145164 13FA84 0020+00 1/0 1/0 8/0 .text            chkFlag__12daItemBase_cFi */
BOOL daItemBase_c::chkFlag(int flag) {
    return dItem_data::chkFlag(m_itemNo, flag);
}

/* 80145164-80145180 13FAA4 001C+00 1/0 1/0 8/0 .text            getTevFrm__12daItemBase_cFv */
s8 daItemBase_c::getTevFrm() {
    return dItem_data::getTevFrm(m_itemNo);
}

/* 80145180-8014519C 13FAC0 001C+00 1/0 1/0 8/0 .text            getBtpFrm__12daItemBase_cFv */
s8 daItemBase_c::getBtpFrm() {
    return dItem_data::getBtpFrm(m_itemNo);
}

/* 8014519C-801451B4 13FADC 0018+00 1/0 1/0 8/0 .text            getShadowSize__12daItemBase_cFv */
u8 daItemBase_c::getShadowSize() {
    return dItem_data::getShadowSize(m_itemNo);
}

/* 801451B4-801451D0 13FAF4 001C+00 1/0 1/0 8/0 .text            getCollisionH__12daItemBase_cFv */
u8 daItemBase_c::getCollisionH() {
    return dItem_data::getH(m_itemNo);
}

/* 801451D0-801451EC 13FB10 001C+00 1/0 1/0 8/0 .text            getCollisionR__12daItemBase_cFv */
u8 daItemBase_c::getCollisionR() {
    return dItem_data::getR(m_itemNo);
}
