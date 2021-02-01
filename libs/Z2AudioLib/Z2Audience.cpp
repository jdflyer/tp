/* Z2Audience.cpp autogenerated by split.py v0.3 at 2021-01-04 22:46:19.894499 */

#include "Z2AudioLib/Z2Audience/Z2Audience.h"
#include "JSystem/JAudio2/JAIAudible.h"
#include "JSystem/JAudio2/JAIAudience/JAIAudience.h"
#include "JSystem/JAudio2/JASGenericMemPool.h"
#include "JSystem/JAudio2/JASSoundParams.h"
#include "Z2AudioLib/Z2AudibleChannel/Z2AudibleChannel.h"
#include "Z2AudioLib/Z2AudioCamera/Z2AudioCamera.h"
#include "Z2AudioLib/Z2Calc/Z2Calc.h"
#include "Z2AudioLib/Z2SoundInfo/Z2SoundInfo.h"
#include "Z2AudioLib/Z2SpotMic/Z2SpotMic.h"
#include "global.h"

extern "C" {
void __dl__FPv(void);
void func_80361C24(void);
void func_80361D60(void);
void func_803620AC(void);
}

extern "C" {
// calc__15Z2AudibleAbsPosFRCQ29JGeometry8TVec3<f>
// Z2AudibleAbsPos::calc(JGeometry::TVec3<f>)
asm void Z2AudibleAbsPos_NS_calc(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BBCDC.s"
}

// init__15Z2AudibleAbsPosFPQ29JGeometry8TVec3<f>RCQ29JGeometry8TVec3<f>PCQ29JGeometry8TVec3<f>
// Z2AudibleAbsPos::init(JGeometry::TVec3<f>, JGeometry::TVec3<f>, JGeometry::TVec3<f>)
asm void Z2AudibleAbsPos_NS_init(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BBD18.s"
}

// __ct__9Z2AudibleFRCQ29JGeometry8TVec3<f>PCQ29JGeometry8TVec3<f>Ulb
// Z2Audible::Z2Audible(JGeometry::TVec3<f>, JGeometry::TVec3<f>, unsigned long, bool)
asm void Z2Audible(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BBD94.s"
}

// __ct__16Z2AudibleChannelFv
// Z2AudibleChannel::Z2AudibleChannel(void)
asm void Z2AudibleChannel(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BBE74.s"
}

// calc__9Z2AudibleFv
// Z2Audible::calc(void)
asm void func_802BBE98(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BBE98.s"
}

// getOuterParams__9Z2AudibleFi
// Z2Audible::getOuterParams(int)
asm void func_802BBED0(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BBED0.s"
}

// setOuterParams__9Z2AudibleFRC14JASSoundParamsRC14JASSoundParamsi
// Z2Audible::setOuterParams(const JASSoundParams&, const JASSoundParams&, int)
asm void Z2Audible_NS_setOuterParams(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BBEE4.s"
}

// getChannel__9Z2AudibleFi
// Z2Audible::getChannel(int)
asm void Z2Audible_NS_getChannel(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BC204.s"
}

// getDistVolBit__9Z2AudibleFv
// Z2Audible::getDistVolBit(void)
asm void Z2Audible_NS_getDistVolBit(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BC218.s"
}

// __ct__19Z2Audience3DSettingFv
// Z2Audience3DSetting::Z2Audience3DSetting(void)
asm void Z2Audience3DSetting(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BC248.s"
}

// init__19Z2Audience3DSettingFv
// Z2Audience3DSetting::init(void)
asm void Z2Audience3DSetting_NS_init(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BC284.s"
}

// initVolumeDist__19Z2Audience3DSettingFv
// Z2Audience3DSetting::initVolumeDist(void)
asm void Z2Audience3DSetting_NS_initVolumeDist(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BC308.s"
}

// updateVolumeDist__19Z2Audience3DSettingFf
// Z2Audience3DSetting::updateVolumeDist(float)
asm void Z2Audience3DSetting_NS_updateVolumeDist(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BC4D0.s"
}

// initDolbyDist__19Z2Audience3DSettingFv
// Z2Audience3DSetting::initDolbyDist(void)
asm void Z2Audience3DSetting_NS_initDolbyDist(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BC6A4.s"
}

// updateDolbyDist__19Z2Audience3DSettingFff
// Z2Audience3DSetting::updateDolbyDist(float, float)
asm void Z2Audience3DSetting_NS_updateDolbyDist(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BC6F8.s"
}

// __ct__13Z2AudioCameraFv
// Z2AudioCamera::Z2AudioCamera(void)
asm void Z2AudioCamera(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BC758.s"
}

// init__13Z2AudioCameraFv
// Z2AudioCamera::init(void)
asm void Z2AudioCamera_NS_init(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BC788.s"
}

// setCameraState__13Z2AudioCameraFPA4_CfR3Vecb
// Z2AudioCamera::setCameraState(const float [][4], Vec&, bool)
asm void Z2AudioCamera_NS_setCameraState(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BC7DC.s"
}

// setCameraState__13Z2AudioCameraFPA4_fR3VecR3Vecffbb
// Z2AudioCamera::setCameraState(float [][4], Vec&, Vec&, float, float, bool, bool)
asm void Z2AudioCamera_NS_setCameraState_X1_(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BC8AC.s"
}

// convertAbsToRel__13Z2AudioCameraFP9Z2Audiblei
// Z2AudioCamera::convertAbsToRel(Z2Audible*, int)
asm void Z2AudioCamera_NS_convertAbsToRel(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BCBEC.s"
}

// convertAbsToRel__13Z2AudioCameraCFR3VecP3Vec
// Z2AudioCamera::convertAbsToRel(Vec&, Vec*) const
asm void Z2AudioCamera_NS_convertAbsToRel_X1_(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BCC7C.s"
}

// isInSight__13Z2AudioCameraCFR3Vec
// Z2AudioCamera::isInSight(Vec&) const
asm void Z2AudioCamera_NS_isInSight(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BCCC0.s"
}

// __ct__9Z2SpotMicFv
// Z2SpotMic::Z2SpotMic(void)
asm void Z2SpotMic(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BCD28.s"
}

// clearMicState__9Z2SpotMicFi
// Z2SpotMic::clearMicState(int)
asm void Z2SpotMic_NS_clearMicState(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BCDA8.s"
}

// calcVolumeFactor__9Z2SpotMicFi
// Z2SpotMic::calcVolumeFactor(int)
asm void Z2SpotMic_NS_calcVolumeFactor(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BCDE8.s"
}

// setMicState__9Z2SpotMicFP13Z2AudioCamerai
// Z2SpotMic::setMicState(Z2AudioCamera*, int)
asm void Z2SpotMic_NS_setMicState(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BCE14.s"
}

// calcMicDist__9Z2SpotMicFP9Z2Audible
// Z2SpotMic::calcMicDist(Z2Audible*)
asm void Z2SpotMic_NS_calcMicDist(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BCF5C.s"
}

// calcMicPriority__9Z2SpotMicFf
// Z2SpotMic::calcMicPriority(float)
asm void Z2SpotMic_NS_calcMicPriority(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BCFE4.s"
}

// calcMicVolume__9Z2SpotMicFfif
// Z2SpotMic::calcMicVolume(float, int, float)
asm void Z2SpotMic_NS_calcMicVolume(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BD03C.s"
}

// __ct__10Z2AudienceFv
// Z2Audience::Z2Audience(void)
asm void Z2Audience(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BD130.s"
}

// __dt__10Z2AudienceFv
// Z2Audience::~Z2Audience(void)
asm void Z2Audience_NS_dtor(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BD1FC.s"
}

// __dt__22JASMemPool<9Z2Audible>Fv
// JASMemPool<9Z2Audible>::~JASMemPool<9Z2Audible>(void)
asm void JASMemPool_NS_dtor_X5_(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BD288.s"
}

// setAudioCamera__10Z2AudienceFPA4_fR3VecR3Vecffbib
// Z2Audience::setAudioCamera(float [][4], Vec&, Vec&, float, float, bool, int, bool)
asm void Z2Audience_NS_setAudioCamera(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BD2DC.s"
}

// newAudible__10Z2AudienceFRCQ29JGeometry8TVec3<f>10JAISoundIDPCQ29JGeometry8TVec3<f>Ul
// Z2Audience::newAudible(JGeometry::TVec3<f>, JAISoundID, JGeometry::TVec3<f>, unsigned long)
asm void func_802BD338(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BD338.s"
}

// deleteAudible__10Z2AudienceFP10JAIAudible
// Z2Audience::deleteAudible(JAIAudible*)
asm void func_802BD4D4(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BD4D4.s"
}

// __dt__9Z2AudibleFv
// Z2Audible::~Z2Audible(void)
asm void func_802BD510(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BD510.s"
}

// calcPriority__10Z2AudienceFP10JAIAudible
// Z2Audience::calcPriority(JAIAudible*)
asm void func_802BD5B8(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BD5B8.s"
}

// calcOffMicSound__10Z2AudienceFf
// Z2Audience::calcOffMicSound(float)
asm void Z2Audience_NS_calcOffMicSound(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BD704.s"
}

// mixChannelOut__10Z2AudienceFRC14JASSoundParamsP10JAIAudiblei
// Z2Audience::mixChannelOut(const JASSoundParams&, JAIAudible*, int)
asm void func_802BD71C(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BD71C.s"
}

// setTargetVolume__10Z2AudienceFfi
// Z2Audience::setTargetVolume(float, int)
asm void Z2Audience_NS_setTargetVolume(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BD90C.s"
}

// convertAbsToRel__10Z2AudienceFR3VecP3Veci
// Z2Audience::convertAbsToRel(Vec&, Vec*, int)
asm void Z2Audience_NS_convertAbsToRel(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BD92C.s"
}

// calcRelPosVolume__10Z2AudienceFRC3Vecfi
// Z2Audience::calcRelPosVolume(const Vec&, float, int)
asm void Z2Audience_NS_calcRelPosVolume(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BD95C.s"
}

// calcRelPosPan__10Z2AudienceFRC3Veci
// Z2Audience::calcRelPosPan(const Vec&, int)
asm void Z2Audience_NS_calcRelPosPan(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BDA44.s"
}

// calcRelPosDolby__10Z2AudienceFRC3Veci
// Z2Audience::calcRelPosDolby(const Vec&, int)
asm void Z2Audience_NS_calcRelPosDolby(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BDB44.s"
}

// calcVolume___10Z2AudienceCFfi
// Z2Audience::calcVolume_(float, int) const
asm void Z2Audience_NS_calcVolume_(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BDBDC.s"
}

// calcDeltaPriority___10Z2AudienceCFfib
// Z2Audience::calcDeltaPriority_(float, int, bool) const
asm void Z2Audience_NS_calcDeltaPriority_(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BDC44.s"
}

// calcPitchDoppler___10Z2AudienceCFRCQ29JGeometry8TVec3<f>RCQ29JGeometry8TVec3<f>RCQ29JGeometry8TVec3<f>f
// Z2Audience::calcPitchDoppler_(JGeometry::TVec3<f>, JGeometry::TVec3<f>, JGeometry::TVec3<f>,
// float) const
asm void Z2Audience_NS_calcPitchDoppler_(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BDCB0.s"
}

// calcFxMix___10Z2AudienceCFfi
// Z2Audience::calcFxMix_(float, int) const
asm void Z2Audience_NS_calcFxMix_(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BDD00.s"
}

// calcPitch___10Z2AudienceCFP16Z2AudibleChannelPC9Z2AudiblePC13Z2AudioCamera
// Z2Audience::calcPitch_(Z2AudibleChannel*, const Z2Audible*, const Z2AudioCamera*) const
asm void Z2Audience_NS_calcPitch_(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BDD48.s"
}

// getMaxChannels__10Z2AudienceFv
// Z2Audience::getMaxChannels(void)
asm void func_802BDED4(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BDED4.s"
}

// __sinit_Z2Audience_cpp
//
asm void func_802BDEDC(void) {
    nofralloc
#include "Z2AudioLib/Z2Audience/asm/func_802BDEDC.s"
}
};
