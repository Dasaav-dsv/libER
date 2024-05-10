/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct CLEAR_COUNT_CORRECT_PARAM_ST {
    float MaxHpRate{ 1 };
    float MaxMpRate{ 1 };
    float MaxStaminaRate{ 1 };
    float PhysicsAttackRate{ 1 };
    float SlashAttackRate{ 1 };
    float BlowAttackRate{ 1 };
    float ThrustAttackRate{ 1 };
    float NeturalAttackRate{ 1 };
    float MagicAttackRate{ 1 };
    float FireAttackRate{ 1 };
    float ThunderAttackRate{ 1 };
    float DarkAttackRate{ 1 };
    float PhysicsDefenseRate{ 1 };
    float MagicDefenseRate{ 1 };
    float FireDefenseRate{ 1 };
    float ThunderDefenseRate{ 1 };
    float DarkDefenseRate{ 1 };
    float StaminaAttackRate{ 1 };
    float SoulRate{ 1 };
    float PoisionResistRate{ 1 };
    float DiseaseResistRate{ 1 };
    float BloodResistRate{ 1 };
    float CurseResistRate{ 1 };
    float FreezeResistRate{ 1 };
    float BloodDamageRate{ 1 };
    float SuperArmorDamageRate{ 1 };
    float FreezeDamageRate{ 1 };
    float SleepResistRate{ 1 };
    float MadnessResistRate{ 1 };
    float SleepDamageRate{ 1 };
    float MadnessDamageRate{ 1 };
    unsigned char pad1[4];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::CLEAR_COUNT_CORRECT_PARAM_ST) == 128,
    "CLEAR_COUNT_CORRECT_PARAM_ST paramdef size does not match detected size");
