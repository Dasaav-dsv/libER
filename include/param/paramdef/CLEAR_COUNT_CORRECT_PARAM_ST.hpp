/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct CLEAR_COUNT_CORRECT_PARAM_ST {
    /**
     * @brief 《Maximum HP magnification [%]》
     *
     * Maximum HP magnification [%]
     */
    float MaxHpRate{ 1.f };

    /**
     * @brief 《Maximum MP magnification [%]》
     *
     * Maximum MP magnification [%]
     */
    float MaxMpRate{ 1.f };

    /**
     * @brief 《Maximum stamina magnification [%]》
     *
     * Maximum stamina magnification [%]
     */
    float MaxStaminaRate{ 1.f };

    /**
     * @brief 《Physical attack power multiplier》
     *
     * Physical attack power multiplier
     */
    float PhysicsAttackRate{ 1.f };

    /**
     * @brief 《Slashing attack power multiplier》
     *
     * Slash attack power multiplier
     */
    float SlashAttackRate{ 1.f };

    /**
     * @brief 《Batter attack power multiplier》
     *
     * Batter attack power multiplier
     */
    float BlowAttackRate{ 1.f };

    /**
     * @brief 《Puncture attack power multiplier》
     *
     * Puncture attack power multiplier
     */
    float ThrustAttackRate{ 1.f };

    /**
     * @brief 《Non-attribute attack power multiplier》
     *
     * Non-attribute attack power multiplier
     */
    float NeturalAttackRate{ 1.f };

    /**
     * @brief 《Magic attack power multiplier》
     *
     * Magic attack power multiplier
     */
    float MagicAttackRate{ 1.f };

    /**
     * @brief 《Flame attack power multiplier》
     *
     * Fire attack power multiplier
     */
    float FireAttackRate{ 1.f };

    /**
     * @brief 《Electric shock attack power multiplier》
     *
     * Electric shock attack power multiplier
     */
    float ThunderAttackRate{ 1.f };

    /**
     * @brief 《Dark attack power multiplier》
     *
     * Dark attack power multiplier
     */
    float DarkAttackRate{ 1.f };

    /**
     * @brief 《Physical defense multiplier》
     *
     * Physical defense power multiplier
     */
    float PhysicsDefenseRate{ 1.f };

    /**
     * @brief 《Magic Defense Multiplier》
     *
     * Magic defense multiplier
     */
    float MagicDefenseRate{ 1.f };

    /**
     * @brief 《Flame defense multiplier》
     *
     * Fire defense multiplier
     */
    float FireDefenseRate{ 1.f };

    /**
     * @brief 《Dengeki Defense Magnification》
     *
     * Electric shock defense power multiplier
     */
    float ThunderDefenseRate{ 1.f };

    /**
     * @brief 《Darkness Defense Multiplier》
     *
     * Dark defense multiplier
     */
    float DarkDefenseRate{ 1.f };

    /**
     * @brief 《Stamina attack power multiplier》
     *
     * Stamina attack power multiplier
     */
    float StaminaAttackRate{ 1.f };

    /**
     * @brief 《Soul possession rate》
     *
     * Possession soul rate
     */
    float SoulRate{ 1.f };

    /**
     * @brief 《Poison resistance change rate》
     *
     * Poison resistance change rate
     */
    float PoisionResistRate{ 1.f };

    /**
     * @brief 《Pesticide resistance change rate》
     *
     * Epidemic resistance change rate
     */
    float DiseaseResistRate{ 1.f };

    /**
     * @brief 《Bleeding resistance change rate》
     *
     * Bleeding resistance change rate
     */
    float BloodResistRate{ 1.f };

    /**
     * @brief 《Curse resistance change rate》
     *
     * Curse resistance change rate
     */
    float CurseResistRate{ 1.f };

    /**
     * @brief 《Cold air resistance change rate》
     *
     * Cold resistance change rate
     */
    float FreezeResistRate{ 1.f };

    /**
     * @brief 《Bleeding damage correction factor》
     *
     * Bleeding damage correction factor
     */
    float BloodDamageRate{ 1.f };

    /**
     * @brief 《SA damage correction factor》
     *
     * SA damage correction factor
     */
    float SuperArmorDamageRate{ 1.f };

    /**
     * @brief 《Cold air damage correction factor》
     *
     * Cold damage correction factor
     */
    float FreezeDamageRate{ 1.f };

    /**
     * @brief 《Sleep tolerance change rate》
     *
     * Sleep tolerance change rate
     */
    float SleepResistRate{ 1.f };

    /**
     * @brief 《Madness resistance change rate》
     *
     * Madness resistance change rate
     */
    float MadnessResistRate{ 1.f };

    /**
     * @brief 《Sleep damage correction factor》
     *
     * Sleep damage correction factor
     */
    float SleepDamageRate{ 1.f };

    /**
     * @brief 《Crazy damage correction factor》
     *
     * Mad damage correction factor
     */
    float MadnessDamageRate{ 1.f };

    unsigned char pad1[4];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::CLEAR_COUNT_CORRECT_PARAM_ST) == 128,
    "CLEAR_COUNT_CORRECT_PARAM_ST paramdef size does not match detected size");
