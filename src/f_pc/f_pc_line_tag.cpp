/**
 * f_pc_line_tag.cpp
 * Framework - Process Line Tag
 */

#include "f_pc/f_pc_line_tag.h"
#include "f_pc/f_pc_line.h"


/* 800235A8-80023600 0058+00 s=0 e=1 z=0  None .text      fpcLnTg_Move__FP8line_tagi */
s32 fpcLnTg_Move(line_tag* pLineTag, int newLineListID) {
    if (pLineTag->mLineListID != newLineListID) {
        fpcLnTg_QueueTo(pLineTag);
        return fpcLnTg_ToQueue(pLineTag, newLineListID);
    }

    return 1;
}

/* 80023600-80023634 0034+00 s=1 e=1 z=1  None .text      fpcLnTg_QueueTo__FP8line_tag */
void fpcLnTg_QueueTo(line_tag* pLineTag) {
    cTg_SingleCutFromTree(&pLineTag->mBase);
    pLineTag->mLineListID = -1;
}

/* 80023634-8002368C 0058+00 s=1 e=1 z=1  None .text      fpcLnTg_ToQueue__FP8line_tagi */
s32 fpcLnTg_ToQueue(line_tag* pLineTag, int lineListID) {
    s32 ret = cTg_AdditionToTree(&g_fpcLn_Queue, lineListID, &pLineTag->mBase);

    if (ret) {
        pLineTag->mLineListID = lineListID;
        return 1;
    } else {
        return 0;
    }
}

/* 8002368C-800236C0 0034+00 s=0 e=1 z=0  None .text      fpcLnTg_Init__FP8line_tagPv */
void fpcLnTg_Init(line_tag* pLineTag, void* pData) {
    cTg_Create(&pLineTag->mBase, pData);
    pLineTag->mLineListID = -1;
}
