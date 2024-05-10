/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct HIT_MTRL_PARAM_ST {
    float aiVolumeRate{ 1 };
    int spEffectIdOnHit0{ -1 };
    int spEffectIdOnHit1{ -1 };
    unsigned char footEffectHeightType : 2 { 0 };
    unsigned char footEffectDirType : 2 { 0 };
    unsigned char floorHeightType : 2 { 0 };
    bool disableFallDamage : 1 { false };
    bool isHardnessForSoundReverb : 1 { false };
    unsigned char hardnessType{ 0 };
    unsigned char pad2[6];
    int spEffectIdOnHit0_ClearCount_2{ -1 };
    int spEffectIdOnHit0_ClearCount_3{ -1 };
    int spEffectIdOnHit0_ClearCount_4{ -1 };
    int spEffectIdOnHit0_ClearCount_5{ -1 };
    int spEffectIdOnHit0_ClearCount_6{ -1 };
    int spEffectIdOnHit0_ClearCount_7{ -1 };
    int spEffectIdOnHit0_ClearCount_8{ -1 };
    int spEffectIdOnHit1_ClearCount_2{ -1 };
    int spEffectIdOnHit1_ClearCount_3{ -1 };
    int spEffectIdOnHit1_ClearCount_4{ -1 };
    int spEffectIdOnHit1_ClearCount_5{ -1 };
    int spEffectIdOnHit1_ClearCount_6{ -1 };
    int spEffectIdOnHit1_ClearCount_7{ -1 };
    int spEffectIdOnHit1_ClearCount_8{ -1 };
    short replaceMateiralId_Rain{ -1 };
    unsigned char pad4[2];
    int spEffectId_forWet00{ -1 };
    int spEffectId_forWet01{ -1 };
    int spEffectId_forWet02{ -1 };
    int spEffectId_forWet03{ -1 };
    int spEffectId_forWet04{ -1 };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::HIT_MTRL_PARAM_ST) == 100,
    "HIT_MTRL_PARAM_ST paramdef size does not match detected size");
