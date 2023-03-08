/**
 * f_pc_searcher.cpp
 * Framework - Process Searcher
 */

#include "f_pc/f_pc_searcher.h"

/* 80023578-80023590 0018+00 s=0 e=3 z=77  None .text      fpcSch_JudgeForPName__FPvPv */
void* fpcSch_JudgeForPName(void* pProc, void* pUserData) {
    s16 pname = *(s16*)pUserData;
    if (((base_process_class*)pProc)->mProcName == pname)
        return pProc;
    return NULL;
}

/* 80023590-800235A8 0018+00 s=0 e=44 z=270  None .text      fpcSch_JudgeByID__FPvPv */
void* fpcSch_JudgeByID(void* pProc, void* pUserData) {
    s32 id = *(s32*)pUserData;
    if (((base_process_class*)pProc)->mBsPcId == id)
        return pProc;
    return NULL;
}
