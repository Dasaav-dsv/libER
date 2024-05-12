/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct REINFORCE_PARAM_PROTECTOR_ST {
    /**
     * @brief Physical defense
     *
     * Physical defense correction value
     */
    float physicsDefRate{ 1.f };

    /**
     * @brief Magic defense
     *
     * Magic defense correction value
     */
    float magicDefRate{ 1.f };

    /**
     * @brief Fire defense
     *
     * Fire defense correction value
     */
    float fireDefRate{ 1.f };

    /**
     * @brief Electric shock defense
     *
     * Electric shock defense correction value
     */
    float thunderDefRate{ 1.f };

    /**
     * @brief Slash defense
     *
     * Slash defense correction value
     */
    float slashDefRate{ 1.f };

    /**
     * @brief Strike defense
     *
     * Impact defense correction value
     */
    float blowDefRate{ 1.f };

    /**
     * @brief Puncture defense
     *
     * Correction value of piercing defense power
     */
    float thrustDefRate{ 1.f };

    /**
     * @brief Poison resistance
     *
     * Poison resistance correction value
     */
    float resistPoisonRate{ 1.f };

    /**
     * @brief Epidemic resistance
     *
     * Epidemic resistance correction value
     */
    float resistDiseaseRate{ 1.f };

    /**
     * @brief Bleeding resistance
     *
     * Bleeding resistance correction value
     */
    float resistBloodRate{ 1.f };

    /**
     * @brief Curse resistance
     *
     * Curse resistance correction value
     */
    float resistCurseRate{ 1.f };

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
     * @brief Dark defense
     *
     * Dark defense correction value
     */
    float darkDefRate{ 1.f };

    /**
     * @brief Cold resistance
     *
     * Cold resistance correction value
     */
    float resistFreezeRate{ 1.f };

    /**
     * @brief Sleep tolerance
     *
     * Correction value for sleep tolerance
     */
    float resistSleepRate{ 1.f };

    /**
     * @brief Madness resistance
     *
     * Madness resistance correction value
     */
    float resistMadnessRate{ 1.f };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::REINFORCE_PARAM_PROTECTOR_ST) == 64,
    "REINFORCE_PARAM_PROTECTOR_ST paramdef size does not match detected size");
