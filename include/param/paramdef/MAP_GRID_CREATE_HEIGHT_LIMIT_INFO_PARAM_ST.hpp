/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct MAP_GRID_CREATE_HEIGHT_LIMIT_INFO_PARAM_ST {
    /**
     * @brief Grid can be constructed Height Min [m]
     *
     * Minimum height that can be built in the grid [m]. (LOD 2 units)
     */
    float GridEnableCreateHeightMin{ -99999.f };

    /**
     * @brief Grid can be constructed Height Max [m]
     *
     * Maximum height that can be constructed in the grid [m]. (LOD 2 units)
     */
    float GridEnableCreateHeightMax{ 99999.f };

    unsigned char Reserve[24];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::MAP_GRID_CREATE_HEIGHT_LIMIT_INFO_PARAM_ST)
                  == 32,
    "MAP_GRID_CREATE_HEIGHT_LIMIT_INFO_PARAM_ST paramdef size does not match "
    "detected size");
