/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct NETWORK_AREA_PARAM_ST {
    /**
     * @brief Cell size X
     */
    float cellSizeX{ 30.f };

    /**
     * @brief Cell size Y
     */
    float cellSizeY{ 8.f };

    /**
     * @brief Cell size Z
     */
    float cellSizeZ{ 30.f };

    /**
     * @brief Cell offset X
     */
    float cellOffsetX{ 0.f };

    /**
     * @brief Cell offset Y
     */
    float cellOffsetY{ 0.f };

    /**
     * @brief Cell offset Z
     */
    float cellOffsetZ{ 0.f };

    /**
     * @brief Effective bloodstain / death illusion
     */
    bool enableBloodstain : 1 { false };

    /**
     * @brief Blood character valid
     */
    bool enableBloodMessage : 1 { false };

    /**
     * @brief Phantom effective
     */
    bool enableGhost : 1 { false };

    /**
     * @brief Multiplayer enabled
     */
    bool enableMultiPlay : 1 { false };

    /**
     * @brief Ring search enabled
     *
     * Is it a search target for ring search? (Area called Kanemori Ash Spirit /
     * Relief Blue Spirit)
     */
    bool enableRingSearch : 1 { false };

    /**
     * @brief Intrusion search enabled
     *
     * Is it the target of intrusion search?
     */
    bool enableBreakInSearch : 1 { false };

    /**
     * @brief dummy
     */
    unsigned char dummy[3];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::NETWORK_AREA_PARAM_ST) == 28,
    "NETWORK_AREA_PARAM_ST paramdef size does not match detected size");
