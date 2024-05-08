/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct WEATHER_ASSET_CREATE_PARAM_ST {
    unsigned int AssetId{ 0 };
    unsigned int SlotNo{ 0 };
    unsigned char CreateConditionType{ 0 };
    unsigned char padding0[3];
    short TransitionSrcWeather{ 0 };
    short TransitionDstWeather{ 0 };
    short ElapsedTimeCheckweather{ 0 };
    unsigned char padding1[2];
    float ElapsedTime{ 0 };
    float CreateDelayTime{ -1 };
    unsigned int CreateProbability{ 100 };
    float LifeTime{ 600 };
    float FadeTime{ 1 };
    float EnableCreateTimeMin{ -1 };
    float EnableCreateTimeMax{ -1 };
    short CreatePoint0{ -1 };
    short CreatePoint1{ -1 };
    short CreatePoint2{ -1 };
    short CreatePoint3{ -1 };
    signed char CreateAssetLimitId0{ -1 };
    signed char CreateAssetLimitId1{ -1 };
    signed char CreateAssetLimitId2{ -1 };
    signed char CreateAssetLimitId3{ -1 };
    unsigned char Reserved2[4];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::WEATHER_ASSET_CREATE_PARAM_ST) == 64,
    "WEATHER_ASSET_CREATE_PARAM_ST paramdef size does not match detected size");
