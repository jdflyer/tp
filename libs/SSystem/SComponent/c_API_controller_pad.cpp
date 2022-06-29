//
// Generated By: dol2asm
// Translation Unit: c_API_controller_pad
//

#include "SSystem/SComponent/c_API_controller_pad.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct mDoCPd_c {
    /* 80007D74 */ void recalibrate();

    static u8 m_cpadInfo[256];
};

//
// Forward References:
//

extern "C" void cAPICPad_recalibrate__Fv();
extern "C" void cAPICPad_ANY_BUTTON__FUl();

//
// External References:
//

extern "C" void recalibrate__8mDoCPd_cFv();
extern "C" u8 m_cpadInfo__8mDoCPd_c[256];

//
// Declarations:
//

/* 8026328C-802632AC 25DBCC 0020+00 0/0 3/3 0/0 .text            cAPICPad_recalibrate__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cAPICPad_recalibrate() {
    nofralloc
#include "asm/SSystem/SComponent/c_API_controller_pad/cAPICPad_recalibrate__Fv.s"
}
#pragma pop

/* 802632AC-802632C8 25DBEC 001C+00 0/0 3/3 1/1 .text            cAPICPad_ANY_BUTTON__FUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm u32 cAPICPad_ANY_BUTTON(u32 param_0) {
    nofralloc
#include "asm/SSystem/SComponent/c_API_controller_pad/cAPICPad_ANY_BUTTON__FUl.s"
}
#pragma pop
