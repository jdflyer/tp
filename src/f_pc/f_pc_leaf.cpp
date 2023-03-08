/**
 * f_pc_leaf.cpp
 * Framework - Process Leaf
 */

#include "f_pc/f_pc_leaf.h"

/* 80021A00-80021A24 0024+00 s=0 e=4 z=2  None .text      fpcLf_GetPriority__FPC14leafdraw_class */
s16 fpcLf_GetPriority(const leafdraw_class* pLeaf) {
    return fpcDwPi_Get(&pLeaf->mDwPi);
}

/* 80021A24-80021A48 0024+00 s=1 e=6 z=0  None .text fpcLf_DrawMethod__FP21leafdraw_method_classPv
 */
s32 fpcLf_DrawMethod(leafdraw_method_class* pMthd, void* pUserData) {
    return fpcMtd_Method(pMthd->mpDrawFunc, pUserData);
}

/* 80021A48-80021A80 0038+00 s=1 e=0 z=0  None .text      fpcLf_Draw__FP14leafdraw_class */
s32 fpcLf_Draw(leafdraw_class* pLeaf) {
    s32 ret = 0;
    if (pLeaf->mbUnk0 == 0)
        ret = fpcLf_DrawMethod(pLeaf->mpDrawMtd, pLeaf);
    return ret;
}

/* 80021A80-80021AA8 0028+00 s=1 e=0 z=0  None .text      fpcLf_Execute__FP14leafdraw_class */
s32 fpcLf_Execute(leafdraw_class* pLeaf) {
    return fpcMtd_Execute(&pLeaf->mpDrawMtd->mBase, pLeaf);
}

/* 80021AA8-80021AD0 0028+00 s=1 e=0 z=0  None .text      fpcLf_IsDelete__FP14leafdraw_class */
s32 fpcLf_IsDelete(leafdraw_class* pLeaf) {
    return fpcMtd_IsDelete(&pLeaf->mpDrawMtd->mBase, pLeaf);
}

/* 80021AD0-80021B14 0044+00 s=1 e=0 z=0  None .text      fpcLf_Delete__FP14leafdraw_class */
s32 fpcLf_Delete(leafdraw_class* pLeaf) {
    s32 ret = fpcMtd_Delete(&pLeaf->mpDrawMtd->mBase, pLeaf);
    if (ret == 1) {
        pLeaf->mBase.mSubType = 0;
    }
    return ret;
}

/* ############################################################################################## */
/* 80450D30-80450D38 0004+04 s=1 e=1 z=0  None .sbss      g_fpcLf_type */
int g_fpcLf_type;

/* 80021B14-80021B88 0074+00 s=1 e=0 z=0  None .text      fpcLf_Create__FP14leafdraw_class */
s32 fpcLf_Create(leafdraw_class* pLeaf) {
    leaf_process_profile_definition* profDef;
    if (pLeaf->mBase.mInitState == 0) {
        profDef = (leaf_process_profile_definition*)pLeaf->mBase.mpProf;
        pLeaf->mpDrawMtd = profDef->mSubMtd;
        pLeaf->mBase.mSubType = fpcBs_MakeOfType(&g_fpcLf_type);
        fpcDwPi_Init(&pLeaf->mDwPi, profDef->mPriority);
        pLeaf->mbUnk0 = 0;
    }
    return fpcMtd_Create(&pLeaf->mpDrawMtd->mBase, pLeaf);
}

/* ############################################################################################## */
/* 803A39E8-803A3A00 0014+04 s=0 e=27 z=756  None .data      g_fpcLf_Method */
leafdraw_method_class g_fpcLf_Method = {
    (process_method_func)fpcLf_Create,  (process_method_func)fpcLf_Delete,
    (process_method_func)fpcLf_Execute, (process_method_func)fpcLf_IsDelete,
    (process_method_func)fpcLf_Draw,
};
