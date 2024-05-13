/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct MAP_GD_REGION_ID_PARAM_ST {
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
     * @brief Map region ID
     *
     * Map for GD use Local identification ID [00-99: Open, 1000-9999: Legacy]
     */
    unsigned int mapRegionId{ 0 };

    unsigned char Reserve[24];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::MAP_GD_REGION_ID_PARAM_ST) == 32,
    "MAP_GD_REGION_ID_PARAM_ST paramdef size does not match detected size");
