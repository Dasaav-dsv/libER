/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct AI_SOUND_PARAM_ST {
    float radius{ 0 };
    float lifeFrame{ 0 };
    bool bSpEffectEnable{ false };
    unsigned char type{ 0 };
    bool opposeTarget : 1 { true };
    bool friendlyTarget : 1 { false };
    bool selfTarget : 1 { false };
    bool disableOnTargetPCompany : 1 { false };
    unsigned char rank{ 0 };
    float forgetTime{ -1 };
    int priority{ 100 };
    int soundBehaviorId{ -1 };
    unsigned char aiSoundLevel{ 0 };
    unsigned char replaningState{ 0 };
    unsigned char pad1[6];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::AI_SOUND_PARAM_ST) == 32,
    "AI_SOUND_PARAM_ST paramdef size does not match detected size");
