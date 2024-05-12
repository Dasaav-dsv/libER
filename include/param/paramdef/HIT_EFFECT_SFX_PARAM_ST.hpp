/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct HIT_EFFECT_SFX_PARAM_ST {
    /**
     * @brief Slash: Standard
     */
    int Slash_Normal{ 0 };

    /**
     * @brief Slash: Small
     */
    int Slash_S{ 0 };

    /**
     * @brief Slash: Large
     */
    int Slash_L{ 0 };

    /**
     * @brief Slash: Designation 1
     */
    int Slash_Specific1{ 0 };

    /**
     * @brief Slash: Designation 2
     */
    int Slash_Specific2{ 0 };

    /**
     * @brief Batter: Standard
     */
    int Blow_Normal{ 0 };

    /**
     * @brief Batter: Small
     */
    int Blow_S{ 0 };

    /**
     * @brief Batter: Large
     */
    int Blow_L{ 0 };

    /**
     * @brief Batter: Designation 1
     */
    int Blow_Specific1{ 0 };

    /**
     * @brief Batter: Designation 2
     */
    int Blow_Specific2{ 0 };

    /**
     * @brief Piercing: Standard
     */
    int Thrust_Normal{ 0 };

    /**
     * @brief Piercing: Small
     */
    int Thrust_S{ 0 };

    /**
     * @brief Piercing: Large
     */
    int Thrust_L{ 0 };

    /**
     * @brief Piercing: Designation 1
     */
    int Thrust_Specific1{ 0 };

    /**
     * @brief Piercing: Designation 2
     */
    int Thrust_Specific2{ 0 };

    /**
     * @brief Non-attribute: standard
     */
    int Neutral_Normal{ 0 };

    /**
     * @brief Non-attribute: small
     */
    int Neutral_S{ 0 };

    /**
     * @brief Non-attribute: Large
     */
    int Neutral_L{ 0 };

    /**
     * @brief Non-attribute: Designation 1
     */
    int Neutral_Specific1{ 0 };

    /**
     * @brief Non-attribute: Designation 2
     */
    int Neutral_Specific2{ 0 };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::HIT_EFFECT_SFX_PARAM_ST) == 80,
    "HIT_EFFECT_SFX_PARAM_ST paramdef size does not match detected size");
