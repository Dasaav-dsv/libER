/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct REINFORCE_PARAM_WEAPON_ST {
    float physicsAtkRate{ 1 };
    float magicAtkRate{ 1 };
    float fireAtkRate{ 1 };
    float thunderAtkRate{ 1 };
    float staminaAtkRate{ 1 };
    float saWeaponAtkRate{ 1 };
    float saDurabilityRate{ 1 };
    float correctStrengthRate{ 1 };
    float correctAgilityRate{ 1 };
    float correctMagicRate{ 1 };
    float correctFaithRate{ 1 };
    float physicsGuardCutRate{ 1 };
    float magicGuardCutRate{ 1 };
    float fireGuardCutRate{ 1 };
    float thunderGuardCutRate{ 1 };
    float poisonGuardResistRate{ 1 };
    float diseaseGuardResistRate{ 1 };
    float bloodGuardResistRate{ 1 };
    float curseGuardResistRate{ 1 };
    float staminaGuardDefRate{ 1 };
    unsigned char spEffectId1{ 0 };
    unsigned char spEffectId2{ 0 };
    unsigned char spEffectId3{ 0 };
    unsigned char residentSpEffectId1{ 0 };
    unsigned char residentSpEffectId2{ 0 };
    unsigned char residentSpEffectId3{ 0 };
    unsigned char materialSetId{ 0 };
    unsigned char maxReinforceLevel{ 0 };
    float darkAtkRate{ 1 };
    float darkGuardCutRate{ 1 };
    float correctLuckRate{ 1 };
    float freezeGuardDefRate{ 1 };
    float reinforcePriceRate{ 1 };
    float baseChangePriceRate{ 1 };
    signed char enableGemRank{ 0 };
    unsigned char pad2[3];
    float sleepGuardDefRate{ 1 };
    float madnessGuardDefRate{ 1 };
    float baseAtkRate{ 1 };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::REINFORCE_PARAM_WEAPON_ST) == 128,
    "REINFORCE_PARAM_WEAPON_ST paramdef size does not match detected size");
