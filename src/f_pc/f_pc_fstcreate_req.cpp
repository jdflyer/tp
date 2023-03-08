/**
 * f_pc_fstcreate_req.cpp
 * Framework - Process Fast Create Request
 */

#include "f_pc/f_pc_fstcreate_req.h"
#include "dol2asm.h"
#include "dolphin/types.h"
#include "f_pc/f_pc_load.h"

/* 80023A48-80023A98 0050+00 s=1 e=3 z=52  None .text      fpcFCtRq_Do__FP19fast_create_request */
s32 fpcFCtRq_Do(fast_create_request* pFstCreateReq) {
    if (pFstCreateReq->mpFastCreateFunc != NULL &&
        pFstCreateReq->mpFastCreateFunc(pFstCreateReq->mBase.mpRes,
                                        pFstCreateReq->mpFastCreateData) == 0) {
        return 3;
    } else {
        return 4;
    }
}

/* 80023A98-80023AA0 0008+00 s=1 e=0 z=0  None .text      fpcFCtRq_Delete__FP19fast_create_request
 */
s32 fpcFCtRq_Delete(fast_create_request* pFstCreateReq) {
    return 1;
}

/* ############################################################################################## */
/* 803A3AE0-803A3AF0 000C+04 s=1 e=0 z=0  None .data      submethod$2214 */
create_request_method_class submethod = {(cPhs__Handler)fpcFCtRq_Do, NULL,
                                         (process_method_func)fpcFCtRq_Delete};

/* 80023AA0-80023B70 00D0+00 s=0 e=3 z=43  None .text
 * fpcFCtRq_Request__FP11layer_classsPFPvPv_iPvPv               */
base_process_class* fpcFCtRq_Request(layer_class* pLayer, s16 pProcTypeID,
                                     fstCreateFunc pFastCreateFunc, void* pFastCreateData,
                                     void* pData) {
    if (!fpcLd_Use(pProcTypeID)) {
        return NULL;
    } else {
        fast_create_request* request =
            (fast_create_request*)fpcCtRq_Create(pLayer, 0x50, &submethod);
        if (request != NULL) {
            base_process_class* proc;
            fpcLy_SetCurrentLayer(pLayer);
            proc = fpcBs_Create(pProcTypeID, fpcBs_MakeOfId(), pData);
            if (proc != NULL) {
                proc->mpCtRq = (struct create_request*)request;
                request->mBase.mpRes = proc;
                request->mBase.mBsPcId = proc->mBsPcId;
                if (fpcBs_SubCreate(proc) == 2) {
                    request->mpFastCreateFunc = pFastCreateFunc;
                    request->mpFastCreateData = pFastCreateData;
                    return proc;
                }
            }
            fpcCtRq_Cancel(&request->mBase);
        }
        return NULL;
    }
}
