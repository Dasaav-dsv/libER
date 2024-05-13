/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct MAP_PIECE_TEX_PARAM_ST {
    /**
     * @brief Do you remove it from the NT version output?
     *
     * Parameters marked with ○ are excluded in the NT version package.
     */
    bool disableParam_NT : 1 { false };

    /**
     * @brief Reserve for package output 1
     */
    unsigned char disableParamReserve1 : 7;

    /**
     * @brief Reserve for package output 2
     */
    unsigned char disableParamReserve2[3];

    /**
     * @brief R
     *
     * Color information (R) of the map image before conversion. Pixels with
     * matching RGB values are associated with this parameter
     */
    unsigned char srcR{ 0 };

    /**
     * @brief G
     *
     * Color information (G) of the map image before conversion. Pixels with
     * matching RGB values are associated with this parameter
     */
    unsigned char srcG{ 0 };

    /**
     * @brief B
     *
     * Color information (B) of the map image before conversion. Pixels with
     * matching RGB values are associated with this parameter
     */
    unsigned char srcB{ 0 };

    unsigned char pad1[1];

    /**
     * @brief Map name ID_for saving data display
     *
     * Map name ID for displaying save data [PlaceName] (0: invalid value)
     */
    int saveMapNameId{ -1 };

    /**
     * @brief Multiplayer area ID
     *
     * Multiplayer area ID (-1: invalid value)
     */
    int multiPlayAreaId{ -1 };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::MAP_PIECE_TEX_PARAM_ST) == 16,
    "MAP_PIECE_TEX_PARAM_ST paramdef size does not match detected size");
