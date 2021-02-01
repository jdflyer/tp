/* Z2FxLineMgr.cpp autogenerated by split.py v0.3 at 2021-01-05 01:17:25.439819 */

#include "Z2AudioLib/Z2FxLineMgr/Z2FxLineMgr.h"
#include "JSystem/JAudio2/JASDsp.h"
#include "JSystem/JSupport/JSUMemoryInputStream.h"
#include "global.h"

extern "C" {
class JSUInputStream;
s32 JSUInputStream_NS_read(JSUInputStream*, u8*, u32);
void JSUInputStream_NS_dtor(void);
void free__7JKRHeapFPvP7JKRHeap(void);
void getResource__10JKRArchiveFUs(void);
void countResource__10JKRArchiveCFv(void);
void __nwa__FUlP7JKRHeapi(void);
}

extern "C" {
// __ct__11Z2FxLineMgrFv
// Z2FxLineMgr::Z2FxLineMgr(void)
asm void Z2FxLineMgr(void) {
    nofralloc
#include "Z2AudioLib/Z2FxLineMgr/asm/func_802BA7DC.s"
}

// initDataArc__11Z2FxLineMgrFP10JKRArchiveP7JKRHeap
// Z2FxLineMgr::initDataArc(JKRArchive*, JKRHeap*)
asm void Z2FxLineMgr_NS_initDataArc(void) {
    nofralloc
#include "Z2AudioLib/Z2FxLineMgr/asm/func_802BA7FC.s"
}

// setLineID__11Z2FxLineMgrFScbb
// Z2FxLineMgr::setLineID(char, bool, bool)
asm void Z2FxLineMgr_NS_setLineID(void) {
    nofralloc
#include "Z2AudioLib/Z2FxLineMgr/asm/func_802BAC28.s"
}

// setLine__11Z2FxLineMgrFP14Z2FxLineConfigbb
// Z2FxLineMgr::setLine(Z2FxLineConfig*, bool, bool)
asm void Z2FxLineMgr_NS_setLine(void) {
    nofralloc
#include "Z2AudioLib/Z2FxLineMgr/asm/func_802BAC74.s"
}

// setFxForceOff__11Z2FxLineMgrFb
// Z2FxLineMgr::setFxForceOff(bool)
asm void Z2FxLineMgr_NS_setFxForceOff(void) {
    nofralloc
#include "Z2AudioLib/Z2FxLineMgr/asm/func_802BAE1C.s"
}

// setUnderWaterFx__11Z2FxLineMgrFb
// Z2FxLineMgr::setUnderWaterFx(bool)
asm void Z2FxLineMgr_NS_setUnderWaterFx(void) {
    nofralloc
#include "Z2AudioLib/Z2FxLineMgr/asm/func_802BAE48.s"
}

// setSceneFx__11Z2FxLineMgrFl
// Z2FxLineMgr::setSceneFx(long)
asm void Z2FxLineMgr_NS_setSceneFx(void) {
    nofralloc
#include "Z2AudioLib/Z2FxLineMgr/asm/func_802BAEB8.s"
}
};
