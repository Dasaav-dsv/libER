/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct MAP_DEFAULT_INFO_PARAM_ST {
    bool disableParam_NT : 1 { false };
    unsigned char disableParamReserve1 : 7;
    unsigned char disableParamReserve2[3];
    unsigned int EnableFastTravelEventFlagId{ 0 };
    int WeatherLotTimeOffsetIngameSeconds{ 0 };
    signed char WeatherCreateAssetLimitId{ -1 };
    unsigned char MapAiSightType{ 0 };
    unsigned char SoundIndoorType{ 0 };
    signed char ReverbDefaultType{ -1 };
    short BgmPlaceInfo{ 0 };
    short EnvPlaceInfo{ 0 };
    int MapAdditionalSoundBankId{ -1 };
    short MapHeightForSound{ 0 };
    bool IsEnableBlendTimezoneEnvmap{ true };
    signed char OverrideGIResolution_XSS{ -1 };
    float MapLoHiChangeBorderDist_XZ{ 40 };
    float MapLoHiChangeBorderDist_Y{ 40 };
    float MapLoHiChangePlayDist{ 5 };
    unsigned int MapAutoDrawGroupBackFacePixelNum{ 32400 };
    float PlayerLigntScale{ 1 };
    bool IsEnableTimezonnePlayerLigntScale{ true };
    bool isDisableAutoCliffWind{ false };
    short OpenChrActivateThreshold{ -1 };
    int MapMimicryEstablishmentParamId{ -1 };
    signed char OverrideGIResolution_XSX{ -1 };
    unsigned char Reserve[7];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::MAP_DEFAULT_INFO_PARAM_ST) == 64,
    "MAP_DEFAULT_INFO_PARAM_ST paramdef size does not match detected size");
