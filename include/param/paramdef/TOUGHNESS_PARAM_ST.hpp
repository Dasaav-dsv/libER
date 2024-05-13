/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct TOUGHNESS_PARAM_ST {
    /**
     * @brief Weapon toughness correction factor
     *
     * It is a correction magnification applied to the "toughness correction
     * magnification" of the weapon when calculating the toughness.
     */
    float correctionRate{ 1.f };

    /**
     * @brief Minimum toughness
     *
     * The lower limit of current toughness applied at the beginning of the
     * toughness period. If the toughness falls below this value at the start of
     * toughness, it will recover to this value.
     */
    unsigned short minToughness{ 0 };

    /**
     * @brief Minimum toughness value is not affected by toughness multiplier
     *
     * The toughness correction factor will no longer be applied to the minimum
     * toughness.
     */
    bool isNonEffectiveCorrectionForMin{ false };

    unsigned char pad2[1];

    /**
     * @brief Special effect ID
     *
     * Replacement special effect Id that takes place during the toughness
     * period. If -1, the normal replacement rule applies. Only used by player
     * characters
     */
    int spEffectId{ -1 };

    /**
     * @brief Armor toughness correction factor
     *
     * This is the correction factor applied to the "toughness correction
     * factor" of the armor when determining the toughness.
     */
    float proCorrectionRate{ 1.f };

    unsigned char pad1[16];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::TOUGHNESS_PARAM_ST) == 32,
    "TOUGHNESS_PARAM_ST paramdef size does not match detected size");
