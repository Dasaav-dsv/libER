/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct THROW_PARAM_ST {
    int AtkChrId{ 0 };
    int DefChrId{ 0 };
    float Dist{ 0 };
    float DiffAngMin{ 0 };
    float DiffAngMax{ 0 };
    float upperYRange{ 0.2 };
    float lowerYRange{ 0.2 };
    float diffAngMyToDef{ 60 };
    int throwTypeId{ 0 };
    int atkAnimId{ 0 };
    int defAnimId{ 0 };
    unsigned short escHp{ 0 };
    unsigned short selfEscCycleTime{ 0 };
    unsigned short sphereCastRadiusRateTop{ 80 };
    unsigned short sphereCastRadiusRateLow{ 80 };
    unsigned char PadType{ 1 };
    unsigned char AtkEnableState{ 0 };
    unsigned char throwFollowingType{ 0 };
    unsigned char pad2[1];
    unsigned char throwType{ 0 };
    unsigned char selfEscCycleCnt{ 0 };
    unsigned char dmyHasChrDirType{ 0 };
    bool isTurnAtker : 1 { false };
    bool isSkipWepCate : 1 { false };
    bool isSkipSphereCast : 1 { false };
    bool isEnableCorrectPos_forThrowAdjust : 1 { true };
    bool isEnableThrowFollowingFallAssist : 1 { true };
    bool isEnableThrowFollowingFeedback : 1 { true };
    unsigned char pad0 : 2;
    short atkSorbDmyId{ 0 };
    short defSorbDmyId{ 0 };
    float Dist_start{ 0 };
    float DiffAngMin_start{ 0 };
    float DiffAngMax_start{ 0 };
    float upperYRange_start{ 0 };
    float lowerYRange_start{ 0 };
    float diffAngMyToDef_start{ 0 };
    int judgeRangeBasePosDmyId1{ -1 };
    int judgeRangeBasePosDmyId2{ -1 };
    float adsrobModelPosInterpolationTime{ 0.5 };
    float throwFollowingEndEasingTime{ 0.5 };
    unsigned char pad1[24];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::THROW_PARAM_ST) == 128,
    "THROW_PARAM_ST paramdef size does not match detected size");
