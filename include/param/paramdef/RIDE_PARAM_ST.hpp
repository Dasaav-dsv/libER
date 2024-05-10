/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct RIDE_PARAM_ST {
    unsigned int atkChrId{ 0 };
    unsigned int defChrId{ 0 };
    int rideCamParamId{ -1 };
    unsigned int atkChrAnimId{ 0 };
    unsigned int defChrAnimId{ 0 };
    int defAdjustDmyId{ -1 };
    int defCheckDmyId{ -1 };
    float diffAngMyToDef{ 0 };
    float dist{ 0 };
    float upperYRange{ 0 };
    float lowerYRange{ 0 };
    float diffAngMin{ 0 };
    float diffAngMax{ 0 };
    unsigned char pad[12];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::RIDE_PARAM_ST) == 64,
    "RIDE_PARAM_ST paramdef size does not match detected size");
