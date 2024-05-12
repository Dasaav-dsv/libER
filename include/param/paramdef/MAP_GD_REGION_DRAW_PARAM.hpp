/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct MAP_GD_REGION_DRAW_PARAM {
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
     * @brief Local light scale overwrite value at the time of IV shooting
     *
     * Local light scale value at the time of IV shooting (0 or less: no
     * overwrite) [GR] SEQ13338 [Irradiance volume] I want to change the
     * indirect scale of the SFX light source uniformly.
     */
    float overrideIVLocalLightScale{ -1.f };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::MAP_GD_REGION_DRAW_PARAM) == 8,
    "MAP_GD_REGION_DRAW_PARAM paramdef size does not match detected size");
