/**
 * f_pc_draw_priority.cpp
 * Framework - Process Draw Priority
 */

#include "f_pc/f_pc_draw_priority.h"

/* 80021308-80021310 0008+00 s=0 e=1 z=0  None .text      fpcDwPi_Get__FPC19draw_priority_class */
s16 fpcDwPi_Get(const draw_priority_class* pDwPi) {
    return pDwPi->mPriority;
}

/* 80021310-80021318 0008+00 s=1 e=0 z=0  None .text      fpcDwPi_Set__FP19draw_priority_classs */
void fpcDwPi_Set(draw_priority_class* pDwPi, s16 p) {
    pDwPi->mPriority = p;
}

/* 80021318-80021338 0020+00 s=0 e=1 z=0  None .text      fpcDwPi_Init__FP19draw_priority_classs */
void fpcDwPi_Init(draw_priority_class* pDwPi, s16 p) {
    fpcDwPi_Set(pDwPi, p);
}
