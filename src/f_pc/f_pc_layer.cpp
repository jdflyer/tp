/**
 * f_pc_layer.cpp
 * Framework - Process Layer
 */

#include "f_pc/f_pc_layer.h"
#include "f_pc/f_pc_layer.h"
#include "f_pc/f_pc_method.h"
#include "f_pc/f_pc_method_iter.h"
#include "f_pc/f_pc_method_tag.h"

/* 80021588-800215A8 0020+00 s=0 e=4 z=0  None .text fpcLy_CancelQTo__FP24process_method_tag_class
 */
void fpcLy_CancelQTo(process_method_tag_class* pMthd) {
    fpcMtdTg_MethodQTo(pMthd);
}

/* 800215A8-800215CC 0024+00 s=0 e=3 z=0  None .text
 * fpcLy_ToCancelQ__FP11layer_classP24process_method_tag_class  */
s32 fpcLy_ToCancelQ(layer_class* pLayer, process_method_tag_class* pMthd) {
    return fpcMtdTg_ToMethodQ(&pLayer->mCancelList, pMthd);
}

/* 800215CC-800215F8 002C+00 s=1 e=0 z=0  None .text
 * fpcLy_CancelMethod__FP24process_method_tag_class             */
bool fpcLy_CancelMethod(process_method_tag_class* pLayer) {
    return fpcMtdTg_Do(pLayer) == 1;
}

/* 800215F8-8002161C 0024+00 s=0 e=1 z=0  None .text
 * fpcLy_IntoQueue__FP11layer_classiP16create_tag_classi        */
s32 fpcLy_IntoQueue(layer_class* pLayer, int treeListIdx, create_tag_class* pTag, int idx) {
    return cTg_InsertToTree(&pLayer->mNodeListTree, treeListIdx, pTag, idx);
}

/* 8002161C-80021640 0024+00 s=0 e=1 z=0  None .text
 * fpcLy_ToQueue__FP11layer_classiP16create_tag_class           */
s32 fpcLy_ToQueue(layer_class* pLayer, int treeListIdx, create_tag_class* pTag) {
    return cTg_AdditionToTree(&pLayer->mNodeListTree, treeListIdx, pTag);
}

/* 80021640-80021664 0024+00 s=0 e=1 z=0  None .text
 * fpcLy_QueueTo__FP11layer_classP16create_tag_class            */
s32 fpcLy_QueueTo(layer_class* pLayer, create_tag_class* pTag) {
    return cTg_SingleCutFromTree(pTag);
}

/* 80021664-80021678 0014+00 s=0 e=1 z=0  None .text      fpcLy_IsDeletingMesg__FP11layer_class */
BOOL fpcLy_IsDeletingMesg(layer_class* pLayer) {
    return pLayer->counts.mDeletingCount > 0;
}

/* 80021678-80021688 0010+00 s=0 e=1 z=0  None .text      fpcLy_DeletingMesg__FP11layer_class */
void fpcLy_DeletingMesg(layer_class* pLayer) {
    pLayer->counts.mDeletingCount++;
}

/* 80021688-800216A0 0018+00 s=0 e=1 z=0  None .text      fpcLy_DeletedMesg__FP11layer_class */
void fpcLy_DeletedMesg(layer_class* pLayer) {
    if (pLayer->counts.mDeletingCount > 0) {
        pLayer->counts.mDeletingCount--;
    }
}

/* 800216A0-800216B4 0014+00 s=0 e=2 z=0  None .text      fpcLy_IsCreatingMesg__FP11layer_class */
BOOL fpcLy_IsCreatingMesg(layer_class* pLayer) {
    return pLayer->counts.mCreatingCount > 0;
}

/* 800216B4-800216C4 0010+00 s=0 e=2 z=0  None .text      fpcLy_CreatingMesg__FP11layer_class */
void fpcLy_CreatingMesg(layer_class* pLayer) {
    pLayer->counts.mCreatingCount++;
}

/* 800216C4-800216DC 0018+00 s=0 e=2 z=0  None .text      fpcLy_CreatedMesg__FP11layer_class */
void fpcLy_CreatedMesg(layer_class* pLayer) {
    if (pLayer->counts.mCreatingCount > 0) {
        pLayer->counts.mCreatingCount--;
    }
}

/* ############################################################################################## */
/* 803A39B0-803A39DC 002C+00 s=2 e=0 z=0  None .data      l_fpcLy_Crear */
layer_class l_fpcLy_Crear = {
    NULL, NULL, 0, 0xFFFFFFFF, NULL, 0, NULL, NULL, NULL, 0, 0, 0,
};

/* 803A39DC-803A39E8 000C+00 s=3 e=0 z=0  None .data      l_fpcLy_LayerList */
node_list_class l_fpcLy_LayerList = {
    NULL,
    NULL,
    0,
};

/* 800216DC-800216EC 0010+00 s=2 e=3 z=0  None .text      fpcLy_RootLayer__Fv */
layer_class* fpcLy_RootLayer(void) {
    return (layer_class*)l_fpcLy_LayerList.mpHead;
}

/* ############################################################################################## */
/* 80450D18-80450D1C 0004+00 s=2 e=0 z=0  None .sbss      l_fpcLy_CurrLayer_p */
static layer_class* l_fpcLy_CurrLayer_p;

/* 800216EC-800216F4 0008+00 s=1 e=13 z=0  None .text      fpcLy_SetCurrentLayer__FP11layer_class */
void fpcLy_SetCurrentLayer(layer_class* pLayer) {
    l_fpcLy_CurrLayer_p = pLayer;
}

/* 800216F4-800216FC 0008+00 s=1 e=21 z=0  None .text      fpcLy_CurrentLayer__Fv */
layer_class* fpcLy_CurrentLayer(void) {
    return l_fpcLy_CurrLayer_p;
}

/* 800216FC-8002174C 0050+00 s=1 e=0 z=0  None .text      fpcLy_Search__FUi */
layer_class* fpcLy_Search(unsigned int id) {
    layer_class* iVar1 = fpcLy_RootLayer();
    while (iVar1 != NULL) {
        if (iVar1->mLayerID == id) {
            return iVar1;
        }
        iVar1 = (layer_class*)iVar1->mNode.mpNextNode;
    }
    return NULL;
}

/* 8002174C-800217BC 0070+00 s=0 e=5 z=0  None .text      fpcLy_Layer__FUi */
layer_class* fpcLy_Layer(unsigned int id) {
    if (id == 0 || fpcLy_RootLayer()->mLayerID == id) {
        return fpcLy_RootLayer();
    } else if (id == ~2 || fpcLy_CurrentLayer()->mLayerID == id) {
        return fpcLy_CurrentLayer();
    } else {
        return fpcLy_Search(id);
    }
}

/* 800217BC-800217E8 002C+00 s=1 e=0 z=0  None .text      fpcLy_Regist__FP11layer_class */
void fpcLy_Regist(layer_class* pLayer) {
    cLs_Addition(&l_fpcLy_LayerList, (node_class*)pLayer);
}

/* 800217E8-8002189C 00B4+00 s=0 e=1 z=0  None .text      fpcLy_Delete__FP11layer_class */
s32 fpcLy_Delete(layer_class* pLayer) {
    if (pLayer->mNodeListTree.mpLists->mSize == 0 && pLayer->mCancelList.mSize == 0) {
        cLs_SingleCut((node_class*)pLayer);
        *pLayer = l_fpcLy_Crear;
        return 1;
    } else {
        return 0;
    }
}

/* 8002189C-800218C8 002C+00 s=0 e=1 z=0  None .text      fpcLy_Cancel__FP11layer_class */
void fpcLy_Cancel(layer_class* pLayer) {
    fpcMtdIt_Method(&pLayer->mCancelList, (fpcMtdIt_MethodFunc)fpcLy_CancelMethod);
}

/* 800218C8-80021A00 0138+00 s=0 e=2 z=0  None .text
 * fpcLy_Create__FP11layer_classPvP15node_list_classi           */
void fpcLy_Create(layer_class* pLayer, void* pPcNode, node_list_class* pLists, int listNum) {
    void* pvVar1;
    s32 iVar2;

    static int IsInitOfLayerList = 1;
    static int layer_id = 0;
    *pLayer = l_fpcLy_Crear;
    cNd_Create((node_class*)pLayer, NULL);
    pLayer->mLayerID = layer_id++;
    pLayer->mpPcNode = static_cast<process_node_class*>(pPcNode);
    if (IsInitOfLayerList == 0x1) {
        IsInitOfLayerList = 0x0;
        cLs_Create(&l_fpcLy_LayerList);
        fpcLy_SetCurrentLayer(pLayer);
    }
    (pLayer->mNodeListTree).mpLists = pLists;
    (pLayer->mNodeListTree).mNumLists = listNum;
    cTr_Create(&pLayer->mNodeListTree, (pLayer->mNodeListTree).mpLists,
               (pLayer->mNodeListTree).mNumLists);
    fpcLy_Regist(pLayer);
}
