/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct GRASS_LOD_RANGE_PARAM_ST {
    /**
     * @brief LOD0-distance
     */
    float LOD0_range{ 0 };

    /**
     * @brief LOD0-play
     */
    float LOD0_play{ 0 };

    /**
     * @brief LOD1-distance
     */
    float LOD1_range{ 0 };

    /**
     * @brief LOD1-Play
     */
    float LOD1_play{ 0 };

    /**
     * @brief LOD2-distance
     */
    float LOD2_range{ 0 };

    /**
     * @brief LOD2-Play
     */
    float LOD2_play{ 0 };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::GRASS_LOD_RANGE_PARAM_ST) == 24,
    "GRASS_LOD_RANGE_PARAM_ST paramdef size does not match detected size");
