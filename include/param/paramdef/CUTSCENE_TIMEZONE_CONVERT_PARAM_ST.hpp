/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct CUTSCENE_TIMEZONE_CONVERT_PARAM_ST {
    /**
     * @brief Pre-conversion time zone start time [hour]
     *
     * Start time of the time zone to be converted to cutscene time [hour]
     */
    float SrcTimezoneStart{ 0.f };

    /**
     * @brief Cutscene time after conversion [hour]
     *
     * Enter the time used during cutscene playback in hours [hour]
     */
    float DstCutscenTime{ 0.f };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::CUTSCENE_TIMEZONE_CONVERT_PARAM_ST) == 8,
    "CUTSCENE_TIMEZONE_CONVERT_PARAM_ST paramdef size does not match detected "
    "size");
