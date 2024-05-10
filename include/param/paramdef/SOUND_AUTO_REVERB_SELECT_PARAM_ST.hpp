/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct SOUND_AUTO_REVERB_SELECT_PARAM_ST {
    unsigned int reverbType{ 0 };
    int AreaNo{ -1 };
    signed char IndoorOutdoor{ -1 };
    signed char useDistNoA{ -1 };
    signed char useDistNoB{ -1 };
    unsigned char pad0[1];
    float DistMinA{ -1 };
    float DistMaxA{ -1 };
    float DistMinB{ -1 };
    float DistMaxB{ -1 };
    int NoHitNumMin{ -1 };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::SOUND_AUTO_REVERB_SELECT_PARAM_ST) == 32,
    "SOUND_AUTO_REVERB_SELECT_PARAM_ST paramdef size does not match detected "
    "size");
