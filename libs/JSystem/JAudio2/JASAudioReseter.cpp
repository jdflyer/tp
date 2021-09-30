//
// Generated By: dol2asm
// Translation Unit: JASAudioReseter
//

#include "JSystem/JAudio2/JASAudioReseter.h"
#include "dol2asm.h"
#include "dolphin/os/OS.h"
#include "dolphin/types.h"

//
// Types:
//

struct JASDSPChannel {
    /* 8029D340 */ void drop();
    /* 8029D948 */ void getHandle(u32);
};

struct JASAudioThread {
    /* 8029CDC0 */ void stop();
};

//
// Forward References:
//

extern "C" void __ct__15JASAudioReseterFv();
extern "C" void __dt__15JASAudioReseterFv();
extern "C" void start__15JASAudioReseterFUlb();
extern "C" void resume__15JASAudioReseterFv();
extern "C" void checkDone__15JASAudioReseterCFv();
extern "C" void calc__15JASAudioReseterFv();
extern "C" void callback__15JASAudioReseterFPv();

//
// External References:
//

extern "C" void stop__14JASAudioThreadFv();
extern "C" void drop__13JASDSPChannelFv();
extern "C" void getHandle__13JASDSPChannelFUl();
extern "C" void setDSPLevel__9JASDriverFf();
extern "C" void getDSPLevel__9JASDriverFv();
extern "C" void registerDspSyncCallback__9JASDriverFPFPv_lPv();
extern "C" void __dl__FPv();
extern "C" extern u8 data_80450B8C[4];

//
// Declarations:
//

/* 8029D0B4-8029D0FC 2979F4 0048+00 0/0 1/1 0/0 .text            __ct__15JASAudioReseterFv */
JASAudioReseter::JASAudioReseter() {
    field_0x0 = 0;
    mIsDone = true;
    field_0xc = false;
    mDSPLevel = JASDriver::getDSPLevel();
}

/* 8029D0FC-8029D138 297A3C 003C+00 0/0 1/1 0/0 .text            __dt__15JASAudioReseterFv */
JASAudioReseter::~JASAudioReseter() {}

/* 8029D138-8029D1D4 297A78 009C+00 0/0 1/1 0/0 .text            start__15JASAudioReseterFUlb */
#ifdef NONMATCHING
bool JASAudioReseter::start(u32 param_0, bool param_1) {
    u32 interrupt_status;

    if (mIsDone == false) {
        return false;
    } else {
        field_0xc = param_1;
        interrupt_status = OSDisableInterrupts();

        if (!JASDriver::registerDspSyncCallback(callback, (void*)param_0)) {
            OSRestoreInterrupts(interrupt_status);
            return false;
        } else {
            mDSPLevel = JASDriver::getDSPLevel();
            field_0x0 = param_0;
            mIsDone = false;
            OSRestoreInterrupts(interrupt_status);
            return true;
        }
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool JASAudioReseter::start(u32 param_0, bool param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JASAudioReseter/start__15JASAudioReseterFUlb.s"
}
#pragma pop
#endif

/* 8029D1D4-8029D1F8 297B14 0024+00 0/0 1/1 0/0 .text            resume__15JASAudioReseterFv */
void JASAudioReseter::resume() {
    JASDriver::setDSPLevel(mDSPLevel);
}

/* 8029D1F8-8029D200 297B38 0008+00 0/0 2/2 0/0 .text            checkDone__15JASAudioReseterCFv */
s32 JASAudioReseter::checkDone() const {
    return mIsDone;
}

/* ############################################################################################## */
/* 80455740-80455748 003D40 0008+00 1/1 0/0 0/0 .sdata2          @156 */
SECTION_SDATA2 static f64 lit_156 = 4503599627370496.0 /* cast u32 to float */;

/* 8029D200-8029D2D4 297B40 00D4+00 1/1 0/0 0/0 .text            calc__15JASAudioReseterFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm s32 JASAudioReseter::calc() {
    nofralloc
#include "asm/JSystem/JAudio2/JASAudioReseter/calc__15JASAudioReseterFv.s"
}
#pragma pop

/* 8029D2D4-8029D2F4 297C14 0020+00 1/1 0/0 0/0 .text            callback__15JASAudioReseterFPv */
s32 JASAudioReseter::callback(void* param_0) {
    return calc();
}
