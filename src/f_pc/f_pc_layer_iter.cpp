/**
 * f_pc_layer_iter.cpp
 * Framework - Process Layer Iterator
 */

#include "f_pc/f_pc_layer_iter.h"
#include "SSystem/SComponent/c_node_iter.h"
#include "SSystem/SComponent/c_tag_iter.h"
#include "SSystem/SComponent/c_tree_iter.h"

/* 80021B88-80021BC0 0038+00 s=1 e=4 z=0  None .text fpcLyIt_OnlyHere__FP11layer_classPFPvPv_iPv
 */
s32 fpcLyIt_OnlyHere(layer_class* pLayer, fpcLyIt_OnlyHereFunc pFunc, void* pUserData) {
    layer_iter lIter;
    lIter.mpFunc = pFunc;
    lIter.mpUserData = pUserData;
    return cTrIt_Method(&pLayer->mNodeListTree, (cNdIt_MethodFunc)cTgIt_MethodCall, &lIter);
}

/* 80021BC0-80021C28 0068+00 s=0 e=1 z=0  None .text fpcLyIt_OnlyHereLY__FP11layer_classPFPvPv_iPv
 */
s32 fpcLyIt_OnlyHereLY(layer_class* pLayer, fpcLyIt_OnlyHereFunc pFunc, void* pUserData) {
    s32 result;
    layer_class* currentLayer = fpcLy_CurrentLayer();
    fpcLy_SetCurrentLayer(pLayer);
    result = fpcLyIt_OnlyHere(pLayer, pFunc, pUserData);
    fpcLy_SetCurrentLayer(currentLayer);
    return result;
}

/* 80021C28-80021C60 0038+00 s=0 e=3 z=0  None .text      fpcLyIt_Judge__FP11layer_classPFPvPv_PvPv
 */
void* fpcLyIt_Judge(layer_class* pLayer, fpcLyIt_JudgeFunc pFunc, void* pUserData) {
    layer_iter lIter;
    lIter.mpFunc = pFunc;
    lIter.mpUserData = pUserData;
    return cTrIt_Judge(&pLayer->mNodeListTree, (cNdIt_JudgeFunc)cTgIt_JudgeFilter, &lIter);
}

/* 80021C60-80021CD4 0074+00 s=0 e=1 z=4  None .text      fpcLyIt_AllJudge__FPFPvPv_PvPv */
void* fpcLyIt_AllJudge(fpcLyIt_JudgeFunc pFunc, void* pUserData) {
    layer_iter lIter;
    layer_class* current;
    lIter.mpFunc = pFunc;
    lIter.mpUserData = pUserData;

    current = fpcLy_RootLayer();
    while (current != NULL) {
        void* result =
            cTrIt_Judge(&current->mNodeListTree, (cNdIt_JudgeFunc)cTgIt_JudgeFilter, &lIter);
        if (result != NULL) {
            return result;
        }
        current = (layer_class*)current->mNode.mpNextNode;
    }
    return NULL;
}
