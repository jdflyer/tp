//
// Generated By: dol2asm
// Translation Unit: JUTAssert
//

#include "JSystem/JUtility/JUTAssert.h"
#include "JSystem/JUtility/JUTConsole.h"
#include "JSystem/JUtility/JUTDbPrint.h"
#include "JSystem/JUtility/JUTDirectPrint.h"
#include "stdio.h"
#include "dolphin/vi/vi.h"

namespace JUTAssertion {

/* 802E495C-802E4960 2DF29C 0004+00 0/0 1/1 0/0 .text            create__12JUTAssertionFv */
void create() {}

namespace {
/* 80451530-80451538 000A30 0004+04 2/2 0/0 0/0 .sbss
 * sMessageLife__Q212JUTAssertion23@unnamed@JUTAssert_cpp@      */
static u32 sMessageLife;

/* 80434870-804348B0 061590 0040+00 2/2 0/0 0/0 .bss
 * sMessageFileLine__Q212JUTAssertion23@unnamed@JUTAssert_cpp@  */
static char sMessageFileLine[64];

/* 804348B0-804349B0 0615D0 0100+00 2/2 0/0 0/0 .bss
 * sMessageString__Q212JUTAssertion23@unnamed@JUTAssert_cpp@    */
static char sMessageString[256];

static s32 sDisplayTime = -1;
static s32 sDevice = 3;
static bool mVisible = true;
static s32 sMessageOwner;
static u8 mSynchro;
};  // namespace

/* 802E4960-802E499C 2DF2A0 003C+00 2/2 0/0 0/0 .text            flush_subroutine__12JUTAssertionFv
 */
u32 flush_subroutine() {
    if (sMessageLife == 0) {
        return 0;
    }

    if (sMessageLife != -1) {
        sMessageLife--;
    }

    if (sMessageLife >= 5) {
        return sMessageLife;
    }

    return 0;
}

/* 802E499C-802E4A54 2DF2DC 00B8+00 0/0 1/1 0/0 .text            flushMessage__12JUTAssertionFv */
void flushMessage() {
    if (flush_subroutine() && sAssertVisible == true) {
        JUTDirectPrint* manager = JUTDirectPrint::getManager();
        JUtility::TColor color = manager->getCharColor();
        manager->setCharColor(JUtility::TColor(255, 200, 200, 255));
        manager->drawString(16, 16, sMessageFileLine);
        manager->drawString(16, 24, sMessageString);
        manager->setCharColor(color);
    }
}

/* 802E4A54-802E4C34 2DF394 01E0+00 0/0 1/1 0/0 .text flushMessage_dbPrint__12JUTAssertionFv */
void flushMessage_dbPrint() {
    if (flush_subroutine() && sAssertVisible == true && JUTDbPrint::getManager() != NULL) {
        JUTFont* font = JUTDbPrint::getManager()->getFont();
        if (font != NULL) {
            u8 tmp = ((VIGetRetraceCount() & 0x3C) << 2) | 0xF;
            font->setGX();
            font->setCharColor(JUtility::TColor(255, tmp, tmp, 255));
            font->drawString(30, 36, sMessageFileLine, true);
            font->drawString(30, 54, sMessageString, true);
        }
    }
}

u32 getSDevice() {
    return sDevice;
}

/* 802C7698-802C7788       .text setConfirmMessage__12JUTAssertionFUlPcibPCc */
void setConfirmMessage(u32 param_1, char* file, int line, bool param_4, const char* msg) {
    if (param_4 == 1) {
        return;
    }
    u32 r28 = sMessageLife;
    if (r28 == 0 && (param_1 & 1) != 0) {
        sMessageLife = sDisplayTime;
        sMessageOwner = 2;
        snprintf(sMessageFileLine, sizeof(sMessageFileLine) - 1, "FAILED [%s:%d]", file, line);
        snprintf(sMessageString, sizeof(sMessageString) - 1, "%s", msg);
    }
    if ((r28 == 0 || mSynchro == 0) && (param_1 & 2) != 0) {
        JUTWarningConsole_f("FAILED [%s:%d] %s\n", file, line, msg);
    }
}

void showAssert_f_va(u32 device, const char* file, int line, const char* msg, va_list args) {
    sMessageLife = -1;
    vsnprintf(sMessageString, 255, msg, args);

    if (device & 2) {
        OSReport("Failed assertion: %s:%d\n", file, line);
        OSReport("%s\n", sMessageString);
    }

    if ((device & 1) && JUTDirectPrint::getManager()) {
        JUtility::TColor old_color(JUTDirectPrint::getManager()->getCharColor());
        JUTDirectPrint::getManager()->setCharColor(JUtility::TColor(255, 255, 255, 255));
        JUTDirectPrint::getManager()->erase(10, 16, 306, 24);

        snprintf(sMessageFileLine, 63, "Failed assertion: %s:%d", file, line);
        JUTDirectPrint::getManager()->drawString(16, 16, sMessageFileLine);
        JUTDirectPrint::getManager()->drawString(16, 24, sMessageString);

        JUTDirectPrint::getManager()->setCharColor(old_color);
        VISetNextFrameBuffer(JUTDirectPrint::getManager()->getFrameBuffer());
        VIFlush();
        OSEnableInterrupts();

        u32 retrace_count = VIGetRetraceCount();
        u32 new_count;
        do {
            new_count = VIGetRetraceCount();
        } while (retrace_count == new_count);

        // busy loop for 2 seconds
        OSTime var1 = OSGetTime();
        while (OSTicksToMilliseconds(OSGetTime() - var1) < 2000) {
        }
    }
}

void showAssert_f(u32 device, const char* file, int line, const char* msg, ...) {
    va_list args;
    va_start(args, msg);
    showAssert_f_va(device, file, line, msg, args);
    va_end(args);
}

/* 802C7788-802C78E4       .text showAssert__12JUTAssertionFUlPCciPCc */
void showAssert(u32 device, const char* file, int line, const char* msg) {
    showAssert_f(device, file, line, "%s", msg);
}

/* 802C78E4-802C79FC       .text setWarningMessage_f_va */
void setWarningMessage_f_va(u32 device, const char* file, int line, const char* msg, va_list args) {
    u32 messageLife = sMessageLife;
    bool r26 = false;
    if (messageLife == 0) {
        if (device & 1) {
            sMessageLife = sDisplayTime;
            sMessageOwner = 3;
            snprintf(sMessageFileLine, sizeof(sMessageFileLine) - 1, "WARNING [%s:%d]", file, line);
        }
        vsnprintf(sMessageString, sizeof(sMessageString) - 1, msg, args);
        r26 = true;
    }
    if ((messageLife == 0 || mSynchro == 0) && (device & 2)) {
        JUTWarningConsole_f("WARNING [%s:%d] ", file, line);
        if (!r26) {
            JUTWarningConsole_f_va(msg, args);
        } else {
            JUTWarningConsole(sMessageString);
        }
        JUTWarningConsole("\n");
    }
}

/* 802C79FC-802C7A7C       .text setWarningMessage_f__12JUTAssertionFUlPciPCce */
void setWarningMessage_f(u32 device, char* file, int line, const char* msg, ...) {
    va_list args;
    va_start(args, msg);
    setWarningMessage_f_va(device, file, line, msg, args);
    va_end(args);
}

/* 802C7A7C-802C7B94       .text setLogMessage_f_va */
void setLogMessage_f_va(u32 device, const char* file, int line, const char* msg, va_list args) {
    u32 messageLife = sMessageLife;
    bool r26 = false;
    if (messageLife == 0) {
        if (device & 1) {
            sMessageLife = sDisplayTime;
            sMessageOwner = 4;
            snprintf(sMessageFileLine, sizeof(sMessageFileLine) - 1, "[%s:%d]", file, line);
        }
        vsnprintf(sMessageString, sizeof(sMessageString) - 1, msg, args);
        r26 = true;
    }
    if ((messageLife == 0 || mSynchro == 0) && (device & 2)) {
        JUTReportConsole_f("[%s:%d] ", file, line);
        if (!r26) {
            JUTReportConsole_f_va(msg, args);
        } else {
            JUTReportConsole(sMessageString);
        }
        JUTReportConsole("\n");
    }
}

/* 802C7B94-802C7C14       .text setLogMessage_f__12JUTAssertionFUlPciPCce */
void setLogMessage_f(u32 device, char* file, int line, const char* msg, ...) {
    va_list args;
    va_start(args, msg);
    setLogMessage_f_va(device, file, line, msg, args);
    va_end(args);
}

/* 802E4C34-802E4C3C 2DF574 0008+00 0/0 2/2 0/0 .text            setVisible__12JUTAssertionFb */
void setVisible(bool visible) {
    sAssertVisible = visible;
}

/* 802E4C3C-802E4C54 2DF57C 0018+00 0/0 2/2 0/0 .text            setMessageCount__12JUTAssertionFi
 */
void setMessageCount(int msg_count) {
    sMessageLife = msg_count <= 0 ? 0 : msg_count;
}

};  // namespace JUTAssertion
