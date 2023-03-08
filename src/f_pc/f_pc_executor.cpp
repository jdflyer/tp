/**
 * f_pc_executor.cpp
 * Framework - Process Executor
 */

#include "f_pc/f_pc_executor.h"
#include "f_pc/f_pc_node.h"
#include "f_pc/f_pc_pause.h"
#include "f_pc/f_pc_searcher.h"

/* 80021338-80021358 0020+00 s=1 e=9 z=291  None .text      fpcEx_Search__FPFPvPv_PvPv */
base_process_class* fpcEx_Search(fpcLyIt_JudgeFunc pFunc, void* pUserData) {
    return (base_process_class*)fpcLyIt_AllJudge(pFunc, pUserData);
}

/* 80021358-8002139C 0044+00 s=1 e=5 z=30  None .text      fpcEx_SearchByID__FUi */
base_process_class* fpcEx_SearchByID(unsigned int id) {
    if (id + 2 <= 1)
        return NULL;

    return fpcEx_Search(fpcSch_JudgeByID, &id);
}

/* 8002139C-800213C4 0028+00 s=0 e=7 z=42  None .text      fpcEx_IsExist__FUi */
BOOL fpcEx_IsExist(unsigned int id) {
    return fpcEx_SearchByID(id) != NULL ? 1 : 0;
}

/* 800213C4-80021418 0054+00 s=0 e=1 z=0  None .text      fpcEx_Execute__FP18base_process_class */
s32 fpcEx_Execute(base_process_class* pProc) {
    if (pProc->mInitState != 2 || fpcPause_IsEnable(pProc, 1) == 1)
        return 0;
    return fpcBs_Execute(pProc);
}

/* 80021418-800214C4 00AC+00 s=1 e=0 z=0  None .text      fpcEx_ToLineQ__FP18base_process_class */
s32 fpcEx_ToLineQ(base_process_class* pProc) {
    layer_class* pLayer = pProc->mLyTg.mpLayer;
    base_process_class* pLayerPcNode = &pLayer->mpPcNode->mBase;

    if (pLayer->mLayerID == 0 || cTg_IsUse(&pLayerPcNode->mLnTg.mBase) == TRUE) {
        s32 ret = fpcLnTg_ToQueue(&pProc->mLnTg, pProc->mPi.mInfoCurr.mListID);
        if (ret == 0) {
            fpcLyTg_QueueTo(&pProc->mLyTg);
            return 0;
        }

        pProc->mInitState = 2;
        if (fpcBs_Is_JustOfType(g_fpcNd_type, pProc->mSubType)) {
            process_node_class* pNode = (process_node_class*)pProc;
            fpcLyIt_OnlyHere(&pNode->mLayer, (fpcLyIt_OnlyHereFunc)fpcEx_ToLineQ, pNode);
        }

        return 1;
    }

    return 0;
}

/* 800214C4-80021510 004C+00 s=0 e=1 z=0  None .text      fpcEx_ExecuteQTo__FP18base_process_class
 */
s32 fpcEx_ExecuteQTo(base_process_class* pProc) {
    s32 ret = fpcLyTg_QueueTo(&pProc->mLyTg);
    if (ret == 1) {
        pProc->mInitState = 3;
        return 1;
    } else {
        return 0;
    }
}

/* 80021510-80021568 0058+00 s=0 e=1 z=0  None .text      fpcEx_ToExecuteQ__FP18base_process_class
 */
s32 fpcEx_ToExecuteQ(base_process_class* pProc) {
    s32 ret = fpcLyTg_ToQueue(&pProc->mLyTg, pProc->mPi.mInfoCurr.mLayer,
                              pProc->mPi.mInfoCurr.mListID, pProc->mPi.mInfoCurr.mListPrio);
    if (ret == 1) {
        fpcEx_ToLineQ(pProc);
        return 1;
    } else {
        return 0;
    }
}

/* 80021568-80021588 0020+00 s=0 e=1 z=0  None .text      fpcEx_Handler__FPFPvPv_i */
void fpcEx_Handler(fpcLnIt_QueueFunc pFunc) {
    fpcLnIt_Queue(pFunc);
}
