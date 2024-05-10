/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct REINFORCE_PARAM_PROTECTOR_ST {
    float physicsDefRate{ 1 };
    float magicDefRate{ 1 };
    float fireDefRate{ 1 };
    float thunderDefRate{ 1 };
    float slashDefRate{ 1 };
    float blowDefRate{ 1 };
    float thrustDefRate{ 1 };
    float resistPoisonRate{ 1 };
    float resistDiseaseRate{ 1 };
    float resistBloodRate{ 1 };
    float resistCurseRate{ 1 };
    unsigned char residentSpEffectId1{ 0 };
    unsigned char residentSpEffectId2{ 0 };
    unsigned char residentSpEffectId3{ 0 };
    unsigned char materialSetId{ 0 };
    float darkDefRate{ 1 };
    float resistFreezeRate{ 1 };
    float resistSleepRate{ 1 };
    float resistMadnessRate{ 1 };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::REINFORCE_PARAM_PROTECTOR_ST) == 64,
    "REINFORCE_PARAM_PROTECTOR_ST paramdef size does not match detected size");
