/**
 * f_pc_create_req.cpp
 * Framework - Process Create Request
 */

#include "f_pc/f_pc_create_req.h"
#include "SSystem/SComponent/c_malloc.h"
#include "f_pc/f_pc_create_iter.h"
#include "f_pc/f_pc_create_tag.h"
#include "f_pc/f_pc_deletor.h"
#include "f_pc/f_pc_executor.h"
#include "f_pc/f_pc_layer_iter.h"

/* 80020ACC-80020AE8 001C+00 s=1 e=0 z=0  None .text      fpcCtRq_isCreatingByID__FP10create_tagPUi
 */
bool fpcCtRq_isCreatingByID(create_tag* pTag, unsigned int* pId) {
    create_request* pReq = static_cast<create_request*>(pTag->mBase.mpTagData);
    return pReq->mBsPcId == *pId;
}

/* 80020AE8-80020B20 0038+00 s=0 e=2 z=0  None .text      fpcCtRq_IsCreatingByID__FUi */
BOOL fpcCtRq_IsCreatingByID(unsigned int id) {
    return fpcCtIt_Judge((fpcLyIt_JudgeFunc)fpcCtRq_isCreatingByID, &id) != NULL ? 1 : 0;
}

/* 80020B20-80020B5C 003C+00 s=1 e=0 z=0  None .text      fpcCtRq_CreateQTo__FP14create_request */
void fpcCtRq_CreateQTo(create_request* pReq) {
    fpcCtTg_CreateQTo(&pReq->mBase);
    fpcLy_CreatedMesg(pReq->mpLayer);
    fpcLy_CancelQTo(&pReq->mMtdTg);
}

/* 80020B5C-80020BA0 0044+00 s=1 e=0 z=0  None .text      fpcCtRq_ToCreateQ__FP14create_request */
void fpcCtRq_ToCreateQ(create_request* pReq) {
    fpcLy_CreatingMesg(pReq->mpLayer);
    fpcLy_ToCancelQ(pReq->mpLayer, &pReq->mMtdTg);
    fpcCtTg_ToCreateQ(&pReq->mBase);
}

/* 80020BA0-80020C14 0074+00 s=2 e=0 z=0  None .text      fpcCtRq_Delete__FP14create_request */
BOOL fpcCtRq_Delete(create_request* pReq) {
    fpcCtRq_CreateQTo(pReq);
    if (pReq->mpCtRqMtd != NULL && fpcMtd_Method(pReq->mpCtRqMtd->mpDelete, pReq) == 0) {
        return 0;
    } else {
        if (pReq->mpRes) {
            pReq->mpRes->mpCtRq = NULL;
        }
        cMl::free(pReq);
        return 1;
    }
}

/* 80020C14-80020CAC 0098+00 s=2 e=2 z=0  None .text      fpcCtRq_Cancel__FP14create_request */
BOOL fpcCtRq_Cancel(create_request* pReq) {
    base_process_class* pProc;
    if (pReq != NULL && !pReq->mbIsCancelling) {
        pReq->mbIsCancelling = TRUE;
        pProc = pReq->mpRes;

        if (pProc != NULL && !fpcDt_Delete(pProc))
            return FALSE;

        if (pReq->mpCtRqMtd != NULL && !fpcMtd_Method(pReq->mpCtRqMtd->mpCancel, pReq))
            return FALSE;

        return fpcCtRq_Delete(pReq);
    } else {
        return TRUE;
    }
}

/* 80020CAC-80020CC8 001C+00 s=0 e=1 z=0  None .text      fpcCtRq_IsDoing__FP14create_request */
s32 fpcCtRq_IsDoing(create_request* pReq) {
    if (pReq != NULL)
        return pReq->mbIsCreating;
    else
        return FALSE;
}

/* 80020CC8-80020D84 00BC+00 s=1 e=0 z=0  None .text      fpcCtRq_Do__FP14create_request */
BOOL fpcCtRq_Do(create_request* pReq) {
    s32 ret = cPhs_COMPLEATE_e;

    if (pReq->mpCtRqMtd != NULL) {
        cPhs__Handler pHandler = pReq->mpCtRqMtd->mpHandler;
        if (pHandler != NULL) {
            pReq->mbIsCreating = TRUE;
            ret = pHandler(pReq);
            pReq->mbIsCreating = FALSE;
        }
    }

    switch (ret) {
    case cPhs_COMPLEATE_e: {
        s32 success = fpcEx_ToExecuteQ(pReq->mpRes);
        if (success == 0)
            return fpcCtRq_Cancel(pReq);
        else
            return fpcCtRq_Delete(pReq);
    }
    case 3:
    case cPhs_ERROR_e:
        return fpcCtRq_Cancel(pReq);
    }

    return 1;
}

/* 80020D84-80020DB0 002C+00 s=0 e=1 z=0  None .text      fpcCtRq_Handler__Fv */

void fpcCtRq_Handler(void) {
    fpcCtIt_Method((fpcCtIt_MethodFunc)fpcCtRq_Do, NULL);
}

/* 80020DB0-80020E38 0088+00 s=0 e=2 z=0  None .text
 * fpcCtRq_Create__FP11layer_classUlP27create_request_method_class */
create_request* fpcCtRq_Create(layer_class* pLayer, u32 size, create_request_method_class* pMthd) {
    create_request* pReq = (create_request*)cMl::memalignB(-4, size);

    if (pReq != NULL) {
        fpcCtTg_Init(&pReq->mBase, pReq);
        fpcMtdTg_Init(&pReq->mMtdTg, (process_method_tag_func)fpcCtRq_Cancel, pReq);
        pReq->mpLayer = pLayer;
        pReq->mpCtRqMtd = pMthd;
        pReq->mBsPcId = fpcBs_MakeOfId();
        pReq->mpRes = NULL;
        pReq->mbIsCancelling = FALSE;
        fpcCtRq_ToCreateQ(pReq);
    }

    return pReq;
}
