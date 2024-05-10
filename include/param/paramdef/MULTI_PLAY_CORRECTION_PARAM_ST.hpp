/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct MULTI_PLAY_CORRECTION_PARAM_ST {
    bool disableParam_NT : 1 { false };
    unsigned char disableParamReserve1 : 7;
    unsigned char disableParamReserve2[3];
    int client1SpEffectId{ -1 };
    int client2SpEffectId{ -1 };
    int client3SpEffectId{ -1 };
    bool bOverrideSpEffect{ false };
    unsigned char pad3[15];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::MULTI_PLAY_CORRECTION_PARAM_ST) == 32,
    "MULTI_PLAY_CORRECTION_PARAM_ST paramdef size does not match detected "
    "size");
