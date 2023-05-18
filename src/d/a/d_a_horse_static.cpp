//
// Generated By: dol2asm
// Translation Unit: d/a/d_a_horse_static
//

#include "d/a/d_a_horse_static.h"
#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/e/d_a_e_wb/d_a_e_wb.h"

BOOL e_wb_class::checkWait() {
    return field_0x5b4 == 0x2A;
}

void e_wb_class::setPlayerRideNow() {
    mActionID = ACT_PL_RIDE_NOW;
    field_0x5b4 = 0;
    field_0x6be |= 3;
}

void e_wb_class::setPlayerRide() {
    mActionID = ACT_PL_RIDE;
    field_0x5b4 = 0;
    field_0x6be |= 3;

    mZ2Ride.setLinkRiding(true);
}

void e_wb_class::getOff() {
    if (!checkDownDamage() || mActionID == ACT_PL_RIDE_NOW) {
        mActionID = 0;
    } else {
        field_0x692 = 0;
    }

    field_0x5b4 = 0;
    field_0x6be &= ~3;
    mZ2Ride.setLinkRiding(false);
}

BOOL e_wb_class::checkDownDamage() {
    return mActionID != ACT_PL_RIDE && mActionID != 0x66 && mActionID != ACT_S_DAMAGE;
}

u8 e_wb_class::checkNormalRideMode() const {
    return mActionID != 0x66 || field_0x5b4 < 1;
}

void e_wb_class::setRunRideMode() {
    if (mActionID == ACT_PL_RIDE) {
        field_0x5b4 = 0;
        mActionID = ACT_S_DAMAGE;
        field_0x692 = 0x65;
    }
}

daTagHstop_c* daTagHstop_c::m_top;
