//
// Generated By: dol2asm
// Translation Unit: J2DTextBoxEx
//

#include "JSystem/J2DGraph/J2DTextBoxEx.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void __ct__12J2DTextBoxExFP7J2DPaneP20JSURandomInputStreamUlP11J2DMaterial();
extern "C" void __dt__12J2DTextBoxExFv();
extern "C" void drawSelf__12J2DTextBoxExFffPA3_A4_f();
extern "C" void draw__12J2DTextBoxExFff();
extern "C" void draw__12J2DTextBoxExFfff18J2DTextBoxHBinding();
extern "C" void setFont__12J2DTextBoxExFP7JUTFont();
extern "C" void getFont__12J2DTextBoxExCFv();
extern "C" void setTevOrder__12J2DTextBoxExFb();
extern "C" void setTevStage__12J2DTextBoxExFb();
extern "C" void setStage__12J2DTextBoxExFP11J2DTevStageQ212J2DTextBoxEx10stage_enum();
extern "C" void setBlack__12J2DTextBoxExFQ28JUtility6TColor();
extern "C" void setWhite__12J2DTextBoxExFQ28JUtility6TColor();
extern "C" void setBlackWhite__12J2DTextBoxExFQ28JUtility6TColorQ28JUtility6TColor();
extern "C" void getBlackWhite__12J2DTextBoxExCFPQ28JUtility6TColorPQ28JUtility6TColor();
extern "C" void isSetBlackWhite__12J2DTextBoxExCFQ28JUtility6TColorQ28JUtility6TColor();
extern "C" void getBlack__12J2DTextBoxExCFv();
extern "C" void getWhite__12J2DTextBoxExCFv();
extern "C" void setAlpha__12J2DTextBoxExFUc();
extern "C" void setCullBack__12J2DTextBoxExF11_GXCullMode();
extern "C" void rewriteAlpha__12J2DTextBoxExFv();
extern "C" void isUsed__12J2DTextBoxExFPC7ResFONT();
extern "C" void setAnimation__12J2DTextBoxExFP11J2DAnmColor();
extern "C" void setAnimation__12J2DTextBoxExFP19J2DAnmTextureSRTKey();
extern "C" void setAnimation__12J2DTextBoxExFP16J2DAnmTexPattern();
extern "C" void setAnimation__12J2DTextBoxExFP15J2DAnmTevRegKey();
extern "C" void setAnimation__12J2DTextBoxExFP20J2DAnmVisibilityFull();
extern "C" void animationPane__12J2DTextBoxExFPC15J2DAnmTransform();
extern "C" void setCullBack__12J2DTextBoxExFb();
extern "C" void isUsed__12J2DTextBoxExFPC7ResTIMG();
extern "C" void setAnimation__12J2DTextBoxExFP14J2DAnmVtxColor();
extern "C" void setAnimation__12J2DTextBoxExFP10J2DAnmBase();
extern "C" extern char const* const J2DTextBoxEx__stringBase0;

//
// External References:
//

extern "C" void calcMtx__7J2DPaneFv();
extern "C" void makeMatrix__7J2DPaneFff();
extern "C" void getMaterial__12J2DTextBoxExCFv();
extern "C" void setAnimation__12J2DTextBoxExFP15J2DAnmTransform();
extern "C" void* __nwa__FUl();
extern "C" void __dl__FPv();
extern "C" void read__14JSUInputStreamFPvl();
extern "C" void peek__20JSURandomInputStreamFPvl();
extern "C" void seek__20JSURandomInputStreamFl17JSUStreamSeekFrom();
extern "C" void setGX__11J2DMaterialFv();
extern "C" void setAnimation__11J2DMaterialFP11J2DAnmColor();
extern "C" void setAnimation__11J2DMaterialFP19J2DAnmTextureSRTKey();
extern "C" void setAnimation__11J2DMaterialFP16J2DAnmTexPattern();
extern "C" void setAnimation__11J2DMaterialFP15J2DAnmTevRegKey();
extern "C" void
__ct__8J2DPrintFP7JUTFontffQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor();
extern "C" void __dt__8J2DPrintFv();
extern "C" void locate__8J2DPrintFff();
extern "C" void print__8J2DPrintFffUcPCce();
extern "C" void printReturn__8J2DPrintFPCcff18J2DTextBoxHBinding18J2DTextBoxVBindingffUc();
extern "C" void move__7J2DPaneFff();
extern "C" void add__7J2DPaneFff();
extern "C" void search__7J2DPaneFUx();
extern "C" void searchUserInfo__7J2DPaneFUx();
extern "C" void isUsed__7J2DPaneFPC7ResTIMG();
extern "C" void isUsed__7J2DPaneFPC7ResFONT();
extern "C" void makeMatrix__7J2DPaneFffff();
extern "C" void setCullBack__7J2DPaneF11_GXCullMode();
extern "C" void makePaneExStream__7J2DPaneFP7J2DPaneP20JSURandomInputStream();
extern "C" void setAnimation__7J2DPaneFP10J2DAnmBase();
extern "C" void clearAnmTransform__7J2DPaneFv();
extern "C" void animationTransform__7J2DPaneFPC15J2DAnmTransform();
extern "C" void setVisibileAnimation__7J2DPaneFP20J2DAnmVisibilityFull();
extern "C" void setVtxColorAnimation__7J2DPaneFP14J2DAnmVtxColor();
extern "C" void animationPane__7J2DPaneFPC15J2DAnmTransform();
extern "C" void setAnimationVF__7J2DPaneFP20J2DAnmVisibilityFull();
extern "C" void setAnimationVC__7J2DPaneFP14J2DAnmVtxColor();
extern "C" void update__7J2DPaneFv();
extern "C" void __ct__10J2DTextBoxFv();
extern "C" void __dt__10J2DTextBoxFv();
extern "C" void setConnectParent__10J2DTextBoxFb();
extern "C" void drawSelf__10J2DTextBoxFff();
extern "C" void resize__10J2DTextBoxFff();
extern "C" s32 getTypeID__10J2DTextBoxCFv();
extern "C" void getVisibility__20J2DAnmVisibilityFullCFUsPUc();
extern "C" void _savegpr_25();
extern "C" void _savegpr_28();
extern "C" void _restgpr_25();
extern "C" void _restgpr_28();

//
// Declarations:
//

/* ############################################################################################## */
/* 803CD608-803CD6C8 02A728 00BC+04 2/2 0/0 0/0 .data            __vt__12J2DTextBoxEx */
SECTION_DATA extern void* __vt__12J2DTextBoxEx[47 + 1 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J2DTextBoxExFv,
    (void*)getTypeID__10J2DTextBoxCFv,
    (void*)move__7J2DPaneFff,
    (void*)add__7J2DPaneFff,
    (void*)resize__10J2DTextBoxFff,
    (void*)setCullBack__12J2DTextBoxExFb,
    (void*)setCullBack__12J2DTextBoxExF11_GXCullMode,
    (void*)setAlpha__12J2DTextBoxExFUc,
    (void*)setConnectParent__10J2DTextBoxFb,
    (void*)calcMtx__7J2DPaneFv,
    (void*)update__7J2DPaneFv,
    (void*)drawSelf__10J2DTextBoxFff,
    (void*)drawSelf__12J2DTextBoxExFffPA3_A4_f,
    (void*)search__7J2DPaneFUx,
    (void*)searchUserInfo__7J2DPaneFUx,
    (void*)makeMatrix__7J2DPaneFff,
    (void*)makeMatrix__7J2DPaneFffff,
    (void*)isUsed__12J2DTextBoxExFPC7ResTIMG,
    (void*)isUsed__12J2DTextBoxExFPC7ResFONT,
    (void*)clearAnmTransform__7J2DPaneFv,
    (void*)rewriteAlpha__12J2DTextBoxExFv,
    (void*)setAnimation__12J2DTextBoxExFP10J2DAnmBase,
    (void*)setAnimation__12J2DTextBoxExFP15J2DAnmTransform,
    (void*)setAnimation__12J2DTextBoxExFP11J2DAnmColor,
    (void*)setAnimation__12J2DTextBoxExFP16J2DAnmTexPattern,
    (void*)setAnimation__12J2DTextBoxExFP19J2DAnmTextureSRTKey,
    (void*)setAnimation__12J2DTextBoxExFP15J2DAnmTevRegKey,
    (void*)setAnimation__12J2DTextBoxExFP20J2DAnmVisibilityFull,
    (void*)setAnimation__12J2DTextBoxExFP14J2DAnmVtxColor,
    (void*)animationTransform__7J2DPaneFPC15J2DAnmTransform,
    (void*)setVisibileAnimation__7J2DPaneFP20J2DAnmVisibilityFull,
    (void*)setAnimationVF__7J2DPaneFP20J2DAnmVisibilityFull,
    (void*)setVtxColorAnimation__7J2DPaneFP14J2DAnmVtxColor,
    (void*)setAnimationVC__7J2DPaneFP14J2DAnmVtxColor,
    (void*)animationPane__12J2DTextBoxExFPC15J2DAnmTransform,
    (void*)draw__12J2DTextBoxExFff,
    (void*)draw__12J2DTextBoxExFfff18J2DTextBoxHBinding,
    (void*)setFont__12J2DTextBoxExFP7JUTFont,
    (void*)getFont__12J2DTextBoxExCFv,
    (void*)setBlack__12J2DTextBoxExFQ28JUtility6TColor,
    (void*)setWhite__12J2DTextBoxExFQ28JUtility6TColor,
    (void*)setBlackWhite__12J2DTextBoxExFQ28JUtility6TColorQ28JUtility6TColor,
    (void*)getBlack__12J2DTextBoxExCFv,
    (void*)getWhite__12J2DTextBoxExCFv,
    (void*)getMaterial__12J2DTextBoxExCFv,
    /* padding */
    NULL,
};

/* 804562D8-804562E0 0048D8 0004+04 4/4 0/0 0/0 .sdata2          @1534 */
SECTION_SDATA2 static f32 lit_1534[1 + 1 /* padding */] = {
    0.0f,
    /* padding */
    0.0f,
};

/* 804562E0-804562E8 0048E0 0008+00 2/2 0/0 0/0 .sdata2          @1536 */
SECTION_SDATA2 static f64 lit_1536 = 4503601774854144.0 /* cast s32 to float */;

/* 804562E8-804562F0 0048E8 0008+00 1/1 0/0 0/0 .sdata2          @1539 */
SECTION_SDATA2 static f64 lit_1539 = 4503599627370496.0 /* cast u32 to float */;

/* 803071E4-8030751C 301B24 0338+00 0/0 1/1 0/0 .text
 * __ct__12J2DTextBoxExFP7J2DPaneP20JSURandomInputStreamUlP11J2DMaterial */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DTextBoxEx::J2DTextBoxEx(J2DPane* param_0, JSURandomInputStream* param_1, u32 param_2,
                               J2DMaterial* param_3) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DTextBoxEx/__ct__12J2DTextBoxExFP7J2DPaneP20JSURandomInputStreamUlP11J2DMaterial.s"
}
#pragma pop

/* 8030751C-803075AC 301E5C 0090+00 1/0 0/0 0/0 .text            __dt__12J2DTextBoxExFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __dt__12J2DTextBoxExFv() {
    // asm J2DTextBoxEx::~J2DTextBoxEx() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DTextBoxEx/__dt__12J2DTextBoxExFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804562F0-804562F8 0048F0 0004+04 1/1 0/0 0/0 .sdata2          @1731 */
SECTION_SDATA2 static f32 lit_1731[1 + 1 /* padding */] = {
    9.999999747378752e-05f,
    /* padding */
    0.0f,
};

/* 803075AC-803078AC 301EEC 0300+00 1/0 0/0 0/0 .text            drawSelf__12J2DTextBoxExFffPA3_A4_f
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DTextBoxEx::drawSelf(f32 param_0, f32 param_1, f32 (*param_2)[3][4]) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DTextBoxEx/drawSelf__12J2DTextBoxExFffPA3_A4_f.s"
}
#pragma pop

/* ############################################################################################## */
/* 803A1DF0-803A1DF0 02E450 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_803A1DF0 = "%s";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_803A1DF3 = "\0\0\0\0";
#pragma pop

/* 803078AC-80307AF0 3021EC 0244+00 1/0 0/0 0/0 .text            draw__12J2DTextBoxExFff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DTextBoxEx::draw(f32 param_0, f32 param_1) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DTextBoxEx/draw__12J2DTextBoxExFff.s"
}
#pragma pop

/* 80307AF0-80307D5C 302430 026C+00 1/0 0/0 0/0 .text draw__12J2DTextBoxExFfff18J2DTextBoxHBinding
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DTextBoxEx::draw(f32 param_0, f32 param_1, f32 param_2, J2DTextBoxHBinding param_3) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DTextBoxEx/draw__12J2DTextBoxExFfff18J2DTextBoxHBinding.s"
}
#pragma pop

/* 80307D5C-80307DC0 30269C 0064+00 1/0 0/0 0/0 .text            setFont__12J2DTextBoxExFP7JUTFont
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DTextBoxEx::setFont(JUTFont* param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DTextBoxEx/setFont__12J2DTextBoxExFP7JUTFont.s"
}
#pragma pop

/* 80307DC0-80307E0C 302700 004C+00 1/0 0/0 0/0 .text            getFont__12J2DTextBoxExCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JUTFont* J2DTextBoxEx::getFont() const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DTextBoxEx/getFont__12J2DTextBoxExCFv.s"
}
#pragma pop

/* 80307E0C-80307EF0 30274C 00E4+00 1/1 0/0 0/0 .text            setTevOrder__12J2DTextBoxExFb */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DTextBoxEx::setTevOrder(bool param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DTextBoxEx/setTevOrder__12J2DTextBoxExFb.s"
}
#pragma pop

/* 80307EF0-80307F94 302830 00A4+00 1/1 0/0 0/0 .text            setTevStage__12J2DTextBoxExFb */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DTextBoxEx::setTevStage(bool param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DTextBoxEx/setTevStage__12J2DTextBoxExFb.s"
}
#pragma pop

/* ############################################################################################## */
/* 803A1DB8-803A1DC4 02E418 000C+00 1/1 0/0 0/0 .rodata          @1953 */
SECTION_RODATA static u8 const lit_1953[12] = {
    0x0F, 0x08, 0x0A, 0x0F, 0x02, 0x04, 0x08, 0x0F, 0x0F, 0x0A, 0x00, 0x0F,
};
COMPILER_STRIP_GATE(0x803A1DB8, &lit_1953);

/* 803A1DC4-803A1DD0 02E424 000C+00 0/1 0/0 0/0 .rodata          @1954 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_1954[12] = {
    0x07, 0x04, 0x05, 0x07, 0x01, 0x02, 0x04, 0x07, 0x07, 0x05, 0x00, 0x07,
};
COMPILER_STRIP_GATE(0x803A1DC4, &lit_1954);
#pragma pop

/* 803A1DD0-803A1DE0 02E430 000F+01 0/1 0/0 0/0 .rodata          @1955 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_1955[15 + 1 /* padding */] = {
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    /* padding */
    0x00,
};
COMPILER_STRIP_GATE(0x803A1DD0, &lit_1955);
#pragma pop

/* 803A1DE0-803A1DF0 02E440 000F+01 0/1 0/0 0/0 .rodata          @1956 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_1956[15 + 1 /* padding */] = {
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    /* padding */
    0x00,
};
COMPILER_STRIP_GATE(0x803A1DE0, &lit_1956);
#pragma pop

/* 80307F94-8030823C 3028D4 02A8+00 1/1 0/0 0/0 .text
 * setStage__12J2DTextBoxExFP11J2DTevStageQ212J2DTextBoxEx10stage_enum */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DTextBoxEx::setStage(J2DTevStage* param_0, J2DTextBoxEx::stage_enum param_1) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DTextBoxEx/setStage__12J2DTextBoxExFP11J2DTevStageQ212J2DTextBoxEx10stage_enum.s"
}
#pragma pop

/* 8030823C-803082C4 302B7C 0088+00 1/0 0/0 0/0 .text setBlack__12J2DTextBoxExFQ28JUtility6TColor
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DTextBoxEx::setBlack(JUtility::TColor param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DTextBoxEx/setBlack__12J2DTextBoxExFQ28JUtility6TColor.s"
}
#pragma pop

/* 803082C4-8030834C 302C04 0088+00 1/0 0/0 0/0 .text setWhite__12J2DTextBoxExFQ28JUtility6TColor
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DTextBoxEx::setWhite(JUtility::TColor param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DTextBoxEx/setWhite__12J2DTextBoxExFQ28JUtility6TColor.s"
}
#pragma pop

/* 8030834C-803084CC 302C8C 0180+00 1/0 0/0 0/0 .text
 * setBlackWhite__12J2DTextBoxExFQ28JUtility6TColorQ28JUtility6TColor */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DTextBoxEx::setBlackWhite(JUtility::TColor param_0, JUtility::TColor param_1) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DTextBoxEx/setBlackWhite__12J2DTextBoxExFQ28JUtility6TColorQ28JUtility6TColor.s"
}
#pragma pop

/* 803084CC-80308668 302E0C 019C+00 4/4 0/0 0/0 .text
 * getBlackWhite__12J2DTextBoxExCFPQ28JUtility6TColorPQ28JUtility6TColor */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DTextBoxEx::getBlackWhite(JUtility::TColor* param_0, JUtility::TColor* param_1) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DTextBoxEx/getBlackWhite__12J2DTextBoxExCFPQ28JUtility6TColorPQ28JUtility6TColor.s"
}
#pragma pop

/* 80308668-803086FC 302FA8 0094+00 1/1 0/0 0/0 .text
 * isSetBlackWhite__12J2DTextBoxExCFQ28JUtility6TColorQ28JUtility6TColor */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DTextBoxEx::isSetBlackWhite(JUtility::TColor param_0, JUtility::TColor param_1) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DTextBoxEx/isSetBlackWhite__12J2DTextBoxExCFQ28JUtility6TColorQ28JUtility6TColor.s"
}
#pragma pop

/* 803086FC-8030875C 30303C 0060+00 1/0 0/0 0/0 .text            getBlack__12J2DTextBoxExCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DTextBoxEx::getBlack() const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DTextBoxEx/getBlack__12J2DTextBoxExCFv.s"
}
#pragma pop

/* 8030875C-803087BC 30309C 0060+00 1/0 0/0 0/0 .text            getWhite__12J2DTextBoxExCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DTextBoxEx::getWhite() const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DTextBoxEx/getWhite__12J2DTextBoxExCFv.s"
}
#pragma pop

/* 803087BC-803087DC 3030FC 0020+00 1/0 0/0 0/0 .text            setAlpha__12J2DTextBoxExFUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DTextBoxEx::setAlpha(u8 param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DTextBoxEx/setAlpha__12J2DTextBoxExFUc.s"
}
#pragma pop

/* 803087DC-80308810 30311C 0034+00 1/0 0/0 0/0 .text setCullBack__12J2DTextBoxExF11_GXCullMode */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DTextBoxEx::setCullBack(_GXCullMode param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DTextBoxEx/setCullBack__12J2DTextBoxExF11_GXCullMode.s"
}
#pragma pop

/* 80308810-80308828 303150 0018+00 1/0 0/0 0/0 .text            rewriteAlpha__12J2DTextBoxExFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DTextBoxEx::rewriteAlpha() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DTextBoxEx/rewriteAlpha__12J2DTextBoxExFv.s"
}
#pragma pop

/* 80308828-803088B4 303168 008C+00 1/0 0/0 0/0 .text            isUsed__12J2DTextBoxExFPC7ResFONT
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DTextBoxEx::isUsed(ResFONT const* param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DTextBoxEx/isUsed__12J2DTextBoxExFPC7ResFONT.s"
}
#pragma pop

/* 803088B4-803088E0 3031F4 002C+00 1/0 0/0 0/0 .text setAnimation__12J2DTextBoxExFP11J2DAnmColor
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DTextBoxEx::setAnimation(J2DAnmColor* param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DTextBoxEx/setAnimation__12J2DTextBoxExFP11J2DAnmColor.s"
}
#pragma pop

/* 803088E0-8030890C 303220 002C+00 1/0 0/0 0/0 .text
 * setAnimation__12J2DTextBoxExFP19J2DAnmTextureSRTKey          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DTextBoxEx::setAnimation(J2DAnmTextureSRTKey* param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DTextBoxEx/setAnimation__12J2DTextBoxExFP19J2DAnmTextureSRTKey.s"
}
#pragma pop

/* 8030890C-80308938 30324C 002C+00 1/0 0/0 0/0 .text
 * setAnimation__12J2DTextBoxExFP16J2DAnmTexPattern             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DTextBoxEx::setAnimation(J2DAnmTexPattern* param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DTextBoxEx/setAnimation__12J2DTextBoxExFP16J2DAnmTexPattern.s"
}
#pragma pop

/* 80308938-80308964 303278 002C+00 1/0 0/0 0/0 .text
 * setAnimation__12J2DTextBoxExFP15J2DAnmTevRegKey              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DTextBoxEx::setAnimation(J2DAnmTevRegKey* param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DTextBoxEx/setAnimation__12J2DTextBoxExFP15J2DAnmTevRegKey.s"
}
#pragma pop

/* 80308964-8030896C -00001 0008+00 0/0 0/0 0/0 .text
 * setAnimation__12J2DTextBoxExFP20J2DAnmVisibilityFull         */
void J2DTextBoxEx::setAnimation(J2DAnmVisibilityFull* param_0) {
    *(u32*)(((u8*)this) + 324) /* this->field_0x144 */ = (u32)(param_0);
}

/* 8030896C-803089EC 3032AC 0080+00 1/0 0/0 0/0 .text
 * animationPane__12J2DTextBoxExFPC15J2DAnmTransform            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DTextBoxEx::animationPane(J2DAnmTransform const* param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DTextBoxEx/animationPane__12J2DTextBoxExFPC15J2DAnmTransform.s"
}
#pragma pop

/* 803089EC-80308A28 30332C 003C+00 1/0 0/0 0/0 .text            setCullBack__12J2DTextBoxExFb */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DTextBoxEx::setCullBack(bool param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DTextBoxEx/setCullBack__12J2DTextBoxExFb.s"
}
#pragma pop

/* 80308A28-80308A48 303368 0020+00 1/0 0/0 0/0 .text            isUsed__12J2DTextBoxExFPC7ResTIMG
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DTextBoxEx::isUsed(ResTIMG const* param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DTextBoxEx/isUsed__12J2DTextBoxExFPC7ResTIMG.s"
}
#pragma pop

/* 80308A48-80308A4C 303388 0004+00 1/0 0/0 0/0 .text
 * setAnimation__12J2DTextBoxExFP14J2DAnmVtxColor               */
void J2DTextBoxEx::setAnimation(J2DAnmVtxColor* param_0) {
    /* empty function */
}

/* 80308A4C-80308A6C 30338C 0020+00 1/0 0/0 0/0 .text setAnimation__12J2DTextBoxExFP10J2DAnmBase
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DTextBoxEx::setAnimation(J2DAnmBase* param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DTextBoxEx/setAnimation__12J2DTextBoxExFP10J2DAnmBase.s"
}
#pragma pop

/* 803A1DF0-803A1DF0 02E450 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
