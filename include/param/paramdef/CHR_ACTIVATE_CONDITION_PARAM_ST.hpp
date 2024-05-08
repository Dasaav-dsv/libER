/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct CHR_ACTIVATE_CONDITION_PARAM_ST {
    bool weatherSunny : 1 { true };
    bool weatherClearSky : 1 { true };
    bool weatherWeakCloudy : 1 { true };
    bool weatherCloudy : 1 { true };
    bool weatherRain : 1 { true };
    bool weatherHeavyRain : 1 { true };
    bool weatherStorm : 1 { true };
    bool weatherStormForBattle : 1 { true };
    bool weatherSnow : 1 { true };
    bool weatherHeavySnow : 1 { true };
    bool weatherFog : 1 { true };
    bool weatherHeavyFog : 1 { true };
    bool weatherHeavyFogRain : 1 { true };
    bool weatherSandStorm : 1 { true };
    unsigned char pad1 : 2;
    unsigned char timeStartHour{ 0 };
    unsigned char timeStartMin{ 0 };
    unsigned char timeEndHour{ 0 };
    unsigned char timeEndMin{ 0 };
    unsigned char pad2[2];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::CHR_ACTIVATE_CONDITION_PARAM_ST) == 8,
    "CHR_ACTIVATE_CONDITION_PARAM_ST paramdef size does not match detected "
    "size");
