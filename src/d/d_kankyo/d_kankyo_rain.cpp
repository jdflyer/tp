/* d_kankyo_rain.cpp autogenerated by split.py v0.3 at 2021-01-01 22:35:45.009983 */

#include "SComponent/c_math.h"
#include "d/d_bg/d_bg_s/d_bg_s_poly_pass_chk.h"
#include "d/d_com/d_com_inf_game/d_com_inf_game.h"
#include "d/d_kankyo/d_kankyo.h"
#include "global.h"

extern "C" {
// vectle_calc__FP10DOUBLE_POSP4cXyz
// vectle_calc(DOUBLE_POS*, cXyz*)
asm void vectle_calc_X1_(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_8005B660.s"
}

// get_vectle_calc__FP4cXyzP4cXyzP4cXyz
// get_vectle_calc(cXyz*, cXyz*, cXyz*)
asm void get_vectle_calc_X1_(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_8005B708.s"
}

// dKyr_get_vectle_calc__FP4cXyzP4cXyzP4cXyz
// dKyr_get_vectle_calc(cXyz*, cXyz*, cXyz*)
asm void dKyr_get_vectle_calc(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_8005B760.s"
}

// dKy_set_eyevect_calc__FP12camera_classP3Vecff
// dKy_set_eyevect_calc(camera_class*, Vec*, float, float)
asm void dKy_set_eyevect_calc(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_8005B780.s"
}

// dKy_set_eyevect_calc2__FP12camera_classP3Vecff
// dKy_set_eyevect_calc2(camera_class*, Vec*, float, float)
asm void dKy_set_eyevect_calc2(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_8005B830.s"
}

// dKyr_set_btitex_common__FP9_GXTexObjP7ResTIMG11_GXTexMapID
// dKyr_set_btitex_common(_GXTexObj*, ResTIMG*, _GXTexMapID)
asm void dKyr_set_btitex_common(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_8005B92C.s"
}

// dKyr_set_btitex__FP9_GXTexObjP7ResTIMG
// dKyr_set_btitex(_GXTexObj*, ResTIMG*)
asm void dKyr_set_btitex(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_8005BA24.s"
}

// dKyr_lenzflare_move__Fv
// dKyr_lenzflare_move(void)
asm void dKyr_lenzflare_move(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_8005BA48.s"
}

// dKyr_moon_arrival_check__Fv
// dKyr_moon_arrival_check(void)
asm void dKyr_moon_arrival_check(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_8005BED8.s"
}

// dKyr_sun_move__Fv
// dKyr_sun_move(void)
asm void dKyr_sun_move(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_8005BF08.s"
}

// dKyr_rain_init__Fv
// dKyr_rain_init(void)
asm void dKyr_rain_init(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_8005CC5C.s"
}

// rain_bg_chk__FP19dKankyo_rain_Packeti
// rain_bg_chk(dKankyo_rain_Packet*, int)
asm void rain_bg_chk(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_8005CDA8.s"
}

// overhead_bg_chk__Fv
// overhead_bg_chk(void)
asm void overhead_bg_chk(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_8005CDD0.s"
}

// forward_overhead_bg_chk__FP4cXyzf
// forward_overhead_bg_chk(cXyz*, float)
asm void forward_overhead_bg_chk(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_8005CF78.s"
}

// dKyr_rain_move__Fv
// dKyr_rain_move(void)
asm void dKyr_rain_move(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_8005D18C.s"
}

// d_krain_cut_turn_check__Fv
// d_krain_cut_turn_check(void)
asm void d_krain_cut_turn_check(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_8005E8B0.s"
}

// dKyr_housi_move__Fv
// dKyr_housi_move(void)
asm void dKyr_housi_move(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_8005E8F8.s"
}

// dKyr_snow_init__Fv
// dKyr_snow_init(void)
asm void dKyr_snow_init(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_8005FBDC.s"
}

// dKyr_snow_move__Fv
// dKyr_snow_move(void)
asm void dKyr_snow_move(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_8005FD48.s"
}

// dKyr_star_init__Fv
// dKyr_star_init(void)
asm void dKyr_star_init(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_80061324.s"
}

// dKyr_star_move__Fv
// dKyr_star_move(void)
asm void dKyr_star_move(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_8006140C.s"
}

// cloud_shadow_move__Fv
// cloud_shadow_move(void)
asm void cloud_shadow_move(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_80061438.s"
}

// vrkumo_move__Fv
// vrkumo_move(void)
asm void vrkumo_move(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_800620AC.s"
}

// dKr_cullVtx_Set__Fv
// dKr_cullVtx_Set(void)
asm void dKr_cullVtx_Set(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_80062ADC.s"
}

// dKyr_draw_rev_moon__FPA4_fPPUc
asm void dKyr_draw_rev_moon(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_80062B4C.s"
}

// dKyr_drawSun__FPA4_fP4cXyzR8_GXColorPPUc
asm void dKyr_drawSun(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_80063670.s"
}

// dKyr_drawLenzflare__FPA4_fP4cXyzR8_GXColorPPUc
asm void dKyr_drawLenzflare(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_8006444C.s"
}

// dKyr_drawRain__FPA4_fPPUc
asm void dKyr_drawRain(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_8006562C.s"
}

// dKyr_drawSibuki__FPA4_fPPUc
asm void dKyr_drawSibuki(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_80066048.s"
}

// dKyr_drawHousi__FPA4_fPPUc
asm void dKyr_drawHousi(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_8006653C.s"
}

// dKyr_drawSnow__FPA4_fPPUc
asm void dKyr_drawSnow(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_80067488.s"
}

// dKyr_drawStar__FPA4_fPPUc
asm void dKyr_drawStar(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_800685DC.s"
}

// drawCloudShadow__FPA4_fPPUc
asm void drawCloudShadow(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_8006950C.s"
}

// drawVrkumo__FPA4_fR8_GXColorPPUc
asm void drawVrkumo(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_8006A090.s"
}

// dKyr_thunder_init__Fv
// dKyr_thunder_init(void)
asm void dKyr_thunder_init(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_8006B190.s"
}

// dKyr_thunder_move__Fv
// dKyr_thunder_move(void)
asm void dKyr_thunder_move(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_8006B1A8.s"
}

// dKyr_shstar_init__Fv
// dKyr_shstar_init(void)
asm void dKyr_shstar_init(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_8006B8DC.s"
}

// dKyr_shstar_move__Fv
// dKyr_shstar_move(void)
asm void dKyr_shstar_move(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_8006B8E0.s"
}

// dKyr_odour_init__Fv
// dKyr_odour_init(void)
asm void dKyr_odour_init(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_8006B8E4.s"
}

// dKyr_odour_move__Fv
// dKyr_odour_move(void)
asm void dKyr_odour_move(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_8006B924.s"
}

// dKyr_odour_draw__FPA4_fPPUc
asm void dKyr_odour_draw(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_8006BE0C.s"
}

// dKyr_mud_init__Fv
// dKyr_mud_init(void)
asm void dKyr_mud_init(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_8006C790.s"
}

// dKyr_mud_move__Fv
// dKyr_mud_move(void)
asm void dKyr_mud_move(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_8006C85C.s"
}

// dKyr_mud_draw__FPA4_fPPUc
asm void dKyr_mud_draw(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_8006D01C.s"
}

// dKyr_evil_init__Fv
// dKyr_evil_init(void)
asm void dKyr_evil_init(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_8006D914.s"
}

// dKyr_evil_move__Fv
// dKyr_evil_move(void)
asm void dKyr_evil_move(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_8006DA04.s"
}

// dKyr_evil_draw2__FPA4_fPPUc
asm void dKyr_evil_draw2(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_8006DA7C.s"
}

// dKyr_near_bosslight_check__F4cXyz
// dKyr_near_bosslight_check(cXyz)
asm void dKyr_near_bosslight_check(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_8006E448.s"
}

// dKyr_evil_draw__FPA4_fPPUc
asm void dKyr_evil_draw(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_8006E6B0.s"
}

// getKandelaarFlamePos__9daPy_py_cFv
// daPy_py_c::getKandelaarFlamePos(void)
asm void func_8006F160(void) {
    nofralloc
#include "d/d_kankyo/d_kankyo_rain/asm/func_8006F160.s"
}
};
