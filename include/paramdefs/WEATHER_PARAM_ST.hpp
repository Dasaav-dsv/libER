/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct WEATHER_PARAM_ST {
    int SfxId{ -1 };
    int WindSfxId{ -1 };
    int GroundHitSfxId{ -1 };
    int SoundId{ -1 };
    float WetTime{ -1 };
    unsigned int GparamId{ 0 };
    unsigned int NextLotIngameSecondsMin{ 3600 };
    unsigned int NextLotIngameSecondsMax{ 7200 };
    int WetSpEffectId00{ -1 };
    int WetSpEffectId01{ -1 };
    int WetSpEffectId02{ -1 };
    int WetSpEffectId03{ -1 };
    int WetSpEffectId04{ -1 };
    int SfxIdInoor{ -1 };
    int SfxIdOutdoor{ -1 };
    float aiSightRate{ 1 };
    float DistViewWeatherGparamOverrideWeight{ -1 };
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::WEATHER_PARAM_ST) == 68,
    "WEATHER_PARAM_ST paramdef size does not match detected size");
