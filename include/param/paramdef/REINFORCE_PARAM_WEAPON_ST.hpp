/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct REINFORCE_PARAM_WEAPON_ST {
    /**
     * @brief Physical attack power basic value
     *
     * Physical attack power correction value
     */
    float physicsAtkRate{ 1.f };

    /**
     * @brief Magic attack power basic value
     *
     * Magic attack power correction value
     */
    float magicAtkRate{ 1.f };

    /**
     * @brief Fire attack power basic value
     *
     * Fire attack power correction value
     */
    float fireAtkRate{ 1.f };

    /**
     * @brief Electric shock attack power basic value
     *
     * Correction value of electric shock attack power
     */
    float thunderAtkRate{ 1.f };

    /**
     * @brief Stamina attack power
     *
     * Stamina attack power correction value
     */
    float staminaAtkRate{ 1.f };

    /**
     * @brief SA weapon attack power
     *
     * Super Armor Weapon Attack Color Correction Value
     */
    float saWeaponAtkRate{ 1.f };

    /**
     * @brief SA durability value
     *
     * SA endurance correction value
     */
    float saDurabilityRate{ 1.f };

    /**
     * @brief Strength correction
     *
     * Correction value of muscle strength correction
     */
    float correctStrengthRate{ 1.f };

    /**
     * @brief Agility correction
     *
     * Correction value of agility correction
     */
    float correctAgilityRate{ 1.f };

    /**
     * @brief Magic correction
     *
     * Correction value of magic power correction
     */
    float correctMagicRate{ 1.f };

    /**
     * @brief Faith correction
     *
     * Correction value of faith correction
     */
    float correctFaithRate{ 1.f };

    /**
     * @brief Physical attack cut rate when guarding
     *
     * Correction value of physical attack cut rate when guarding
     */
    float physicsGuardCutRate{ 1.f };

    /**
     * @brief Magic attack cut rate when guarding
     *
     * Correction value of magic attack cut rate when guarding
     */
    float magicGuardCutRate{ 1.f };

    /**
     * @brief Flame attack cut rate when guarding
     *
     * Correction value of flame attack cut rate when guarding
     */
    float fireGuardCutRate{ 1.f };

    /**
     * @brief Electric shock attack cut rate when guarding
     *
     * Correction value of electric shock attack cut rate when guarding
     */
    float thunderGuardCutRate{ 1.f };

    /**
     * @brief Guard time poison attack cut rate
     *
     * Correction value of poison attack cut rate when guarding
     */
    float poisonGuardResistRate{ 1.f };

    /**
     * @brief Epidemic attack cut rate when guarding
     *
     * Correction value of plague attack cut rate when guarding
     */
    float diseaseGuardResistRate{ 1.f };

    /**
     * @brief Bleeding attack cut rate when guarding
     *
     * Correction value for bleeding attack cut rate when guarding
     */
    float bloodGuardResistRate{ 1.f };

    /**
     * @brief Curse attack cut rate when guarding
     *
     * Correction value of curse attack cut rate when guarding
     */
    float curseGuardResistRate{ 1.f };

    /**
     * @brief Stamina defense when guarding
     *
     * Correction value of stamina defense power when guarding
     */
    float staminaGuardDefRate{ 1.f };

    /**
     * @brief Special effect ID1
     *
     * Addition correction value for special effect ID1
     */
    unsigned char spEffectId1{ 0 };

    /**
     * @brief Special effect ID2
     *
     * Addition correction value for special effect ID2
     */
    unsigned char spEffectId2{ 0 };

    /**
     * @brief Special effect ID3
     *
     * Addition correction value for special effect ID3
     */
    unsigned char spEffectId3{ 0 };

    /**
     * @brief Resident special effect ID1
     *
     * Addition correction value for resident special effect ID1
     */
    unsigned char residentSpEffectId1{ 0 };

    /**
     * @brief Resident special effect ID2
     *
     * Addition correction value for resident special effect ID2
     */
    unsigned char residentSpEffectId2{ 0 };

    /**
     * @brief Resident special effect ID3
     *
     * Addition correction value for resident special effect ID3
     */
    unsigned char residentSpEffectId3{ 0 };

    /**
     * @brief Material ID addition value
     *
     * Addition correction value of material parameter ID
     */
    unsigned char materialSetId{ 0 };

    /**
     * @brief Level value for maximum enhanced weapon level
     */
    unsigned char maxReinforceLevel{ 0 };

    /**
     * @brief Dark attack power basic value
     *
     * Dark attack power correction value
     */
    float darkAtkRate{ 1.f };

    /**
     * @brief Dark attack cut rate when guarding
     *
     * Correction value of darkness attack cut rate when guarding
     */
    float darkGuardCutRate{ 1.f };

    /**
     * @brief Luck correction
     *
     * Correction value of luck correction
     */
    float correctLuckRate{ 1.f };

    /**
     * @brief Cold attack cut rate when guarding
     *
     * Correction value of cold air attack cut rate when guarding
     */
    float freezeGuardDefRate{ 1.f };

    /**
     * @brief Enhanced price correction value
     *
     * Correction value to multiply the enhancement price of the weapon
     * parameter
     */
    float reinforcePriceRate{ 1.f };

    /**
     * @brief Evolution price correction value
     *
     * Correction value to multiply the evolution price of the weapon parameter
     */
    float baseChangePriceRate{ 1.f };

    /**
     * @brief Mountable magic stone rank
     */
    signed char enableGemRank{ 0 };

    unsigned char pad2[3];

    /**
     * @brief Sleep attack cut rate when guarding
     *
     * Correction value of sleep attack cut rate when guarding
     */
    float sleepGuardDefRate{ 1.f };

    /**
     * @brief Mad attack cut rate when guarding
     *
     * Correction value of mad attack cut rate when guarding
     */
    float madnessGuardDefRate{ 1.f };

    /**
     * @brief Additional attack power multiplier
     */
    float baseAtkRate{ 1.f };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::REINFORCE_PARAM_WEAPON_ST) == 128,
    "REINFORCE_PARAM_WEAPON_ST paramdef size does not match detected size");
