/**
 * f_pc_pause.cpp
 * Framework - Process Pause
 */

#include "f_pc/f_pc_pause.h"
#include "f_pc/f_pc_layer_iter.h"

/* 80023844-80023868 0024+00 s=0 e=3 z=0  None .text      fpcPause_IsEnable__FPvUc */
s32 fpcPause_IsEnable(void* pProcess, u8 flag) {
    base_process_class* pProc = (base_process_class*)pProcess;
    if ((pProc->mPauseFlag & flag) == flag) {
        return 1;
    } else {
        return 0;
    }
}

/* 80023868-800238D4 006C+00 s=0 e=1 z=0  None .text      fpcPause_Enable__FPvUc */
s32 fpcPause_Enable(void* pProcess, u8 flag) {
    base_process_class* pProc = (base_process_class*)pProcess;
    pProc->mPauseFlag |= flag;

    if (fpcBs_Is_JustOfType(g_fpcNd_type, pProc->mSubType)) {
        process_node_class* pNode = (process_node_class*)pProc;
        fpcLyIt_OnlyHere(&pNode->mLayer, (fpcLyIt_OnlyHereFunc)fpcPause_Enable,
                         (void*)(flag & 0xFF));
    }
    return 1;
}

/* 800238D4-80023948 0074+00 s=0 e=1 z=0  None .text      fpcPause_Disable__FPvUc */
s32 fpcPause_Disable(void* pProcess, u8 flag) {
    base_process_class* pProc = (base_process_class*)pProcess;
    pProc->mPauseFlag &= (0xFF - flag) & 0xFF;

    if (fpcBs_Is_JustOfType(g_fpcNd_type, pProc->mSubType)) {
        process_node_class* pNode = (process_node_class*)pProc;
        fpcLyIt_OnlyHere(&pNode->mLayer, (fpcLyIt_OnlyHereFunc)fpcPause_Disable, (void*)flag);
    }

    return 1;
}

/* 80023948-80023954 000C+00 s=0 e=1 z=0  None .text      fpcPause_Init__FPv */
void fpcPause_Init(void* pProcess) {
    base_process_class* pProc = (base_process_class*)pProcess;
    pProc->mPauseFlag = 0;
}
