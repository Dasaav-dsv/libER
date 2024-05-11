/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct CLEAR_COUNT_CORRECT_PARAM_ST {
    /**
     * @brief 《Maximum HP magnification [%]》
     *
     * Maximum HP magnification [%]
     */
    float MaxHpRate{ 1 };

    /**
     * @brief 《Maximum MP magnification [%]》
     *
     * Maximum MP magnification [%]
     */
    float MaxMpRate{ 1 };

    /**
     * @brief 《Maximum stamina magnification [%]》
     *
     * Maximum stamina magnification [%]
     */
    float MaxStaminaRate{ 1 };

    /**
     * @brief 《Physical attack power multiplier》
     *
     * Physical attack power multiplier
     */
    float PhysicsAttackRate{ 1 };

    /**
     * @brief 《Slashing attack power multiplier》
     *
     * Slash attack power multiplier
     */
    float SlashAttackRate{ 1 };

    /**
     * @brief 《Batter attack power multiplier》
     *
     * Batter attack power multiplier
     */
    float BlowAttackRate{ 1 };

    /**
     * @brief 《Puncture attack power multiplier》
     *
     * Puncture attack power multiplier
     */
    float ThrustAttackRate{ 1 };

    /**
     * @brief 《Non-attribute attack power multiplier》
     *
     * Non-attribute attack power multiplier
     */
    float NeturalAttackRate{ 1 };

    /**
     * @brief 《Magic attack power multiplier》
     *
     * Magic attack power multiplier
     */
    float MagicAttackRate{ 1 };

    /**
     * @brief 《Flame attack power multiplier》
     *
     * Fire attack power multiplier
     */
    float FireAttackRate{ 1 };

    /**
     * @brief 《Electric shock attack power multiplier》
     *
     * Electric shock attack power multiplier
     */
    float ThunderAttackRate{ 1 };

    /**
     * @brief 《Dark attack power multiplier》
     *
     * Dark attack power multiplier
     */
    float DarkAttackRate{ 1 };

    /**
     * @brief 《Physical defense multiplier》
     *
     * Physical defense power multiplier
     */
    float PhysicsDefenseRate{ 1 };

    /**
     * @brief 《Magic Defense Multiplier》
     *
     * Magic defense multiplier
     */
    float MagicDefenseRate{ 1 };

    /**
     * @brief 《Flame defense multiplier》
     *
     * Fire defense multiplier
     */
    float FireDefenseRate{ 1 };

    /**
     * @brief 《Dengeki Defense Magnification》
     *
     * Electric shock defense power multiplier
     */
    float ThunderDefenseRate{ 1 };

    /**
     * @brief 《Darkness Defense Multiplier》
     *
     * Dark defense multiplier
     */
    float DarkDefenseRate{ 1 };

    /**
     * @brief 《Stamina attack power multiplier》
     *
     * Stamina attack power multiplier
     */
    float StaminaAttackRate{ 1 };

    /**
     * @brief 《Soul possession rate》
     *
     * Possession soul rate
     */
    float SoulRate{ 1 };

    /**
     * @brief 《Poison resistance change rate》
     *
     * Poison resistance change rate
     */
    float PoisionResistRate{ 1 };

    /**
     * @brief 《Pesticide resistance change rate》
     *
     * Epidemic resistance change rate
     */
    float DiseaseResistRate{ 1 };

    /**
     * @brief 《Bleeding resistance change rate》
     *
     * Bleeding resistance change rate
     */
    float BloodResistRate{ 1 };

    /**
     * @brief 《Curse resistance change rate》
     *
     * Curse resistance change rate
     */
    float CurseResistRate{ 1 };

    /**
     * @brief 《Cold air resistance change rate》
     *
     * Cold resistance change rate
     */
    float FreezeResistRate{ 1 };

    /**
     * @brief 《Bleeding damage correction factor》
     *
     * Bleeding damage correction factor
     */
    float BloodDamageRate{ 1 };

    /**
     * @brief 《SA damage correction factor》
     *
     * SA damage correction factor
     */
    float SuperArmorDamageRate{ 1 };

    /**
     * @brief 《Cold air damage correction factor》
     *
     * Cold damage correction factor
     */
    float FreezeDamageRate{ 1 };

    /**
     * @brief 《Sleep tolerance change rate》
     *
     * Sleep tolerance change rate
     */
    float SleepResistRate{ 1 };

    /**
     * @brief 《Madness resistance change rate》
     *
     * Madness resistance change rate
     */
    float MadnessResistRate{ 1 };

    /**
     * @brief 《Sleep damage correction factor》
     *
     * Sleep damage correction factor
     */
    float SleepDamageRate{ 1 };

    /**
     * @brief 《Crazy damage correction factor》
     *
     * Mad damage correction factor
     */
    float MadnessDamageRate{ 1 };

    unsigned char pad1[4];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::CLEAR_COUNT_CORRECT_PARAM_ST) == 128,
    "CLEAR_COUNT_CORRECT_PARAM_ST paramdef size does not match detected size");
