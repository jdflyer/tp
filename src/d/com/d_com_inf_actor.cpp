//
// Generated By: dol2asm
// Translation Unit: d/com/d_com_inf_actor
//

#include "d/com/d_com_inf_actor.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" extern u8 g_dComIfGoat_gameInfo[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 80450610-80450618 000090 0008+00 0/0 1/1 0/0 .sdata           g_dComIfAc_gameInfo */
SECTION_SDATA extern dComIfAc_info_c g_dComIfAc_gameInfo = {
    0, 0,
};

/* 80450618-80450620 000098 0004+04 0/0 2/2 7/7 .sdata           g_dComIfGoat_gameInfo */
SECTION_SDATA extern u8 g_dComIfGoat_gameInfo[4 + 4 /* padding */] = {
    0x00,
    0x00,
    0x00,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
    0x00,
};
