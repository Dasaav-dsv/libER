/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct HIT_EFFECT_SFX_CONCEPT_PARAM_ST {
    /**
     * @brief Iron: Concept 1
     */
    short atkIron_1{ 0 };

    /**
     * @brief Iron: Concept 2
     */
    short atkIron_2{ 0 };

    /**
     * @brief Made of leather: Concept 1
     *
     * Leather: Concept 1
     */
    short atkLeather_1{ 0 };

    /**
     * @brief Made of leather: Concept 2
     *
     * Leather: Concept 2
     */
    short atkLeather_2{ 0 };

    /**
     * @brief Wooden: Concept 1
     */
    short atkWood_1{ 0 };

    /**
     * @brief Wooden: Concept 2
     */
    short atkWood_2{ 0 };

    /**
     * @brief Meat: Concept 1
     */
    short atkBody_1{ 0 };

    /**
     * @brief Meat: Concept 2
     */
    short atkBody_2{ 0 };

    /**
     * @brief Stone: Concept 1
     *
     * Corrosion: Concept 1
     */
    short atkStone_1{ 0 };

    /**
     * @brief Stone: Concept 2
     *
     * Corrosion: Concept 2
     */
    short atkStone_2{ 0 };

    unsigned char pad[4];

    /**
     * @brief None: Concept 1
     */
    short atkNone_1{ 0 };

    /**
     * @brief None: Concept 2
     */
    short atkNone_2{ 0 };

    unsigned char reserve[52];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::HIT_EFFECT_SFX_CONCEPT_PARAM_ST) == 80,
    "HIT_EFFECT_SFX_CONCEPT_PARAM_ST paramdef size does not match detected "
    "size");
