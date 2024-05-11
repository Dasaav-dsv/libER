/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct CUTSCENE_TIMEZONE_CONVERT_PARAM_ST {
    /**
     * @brief Pre-conversion time zone start time [hour]
     *
     * Start time of the time zone to be converted to cutscene time [hour]
     */
    float SrcTimezoneStart{ 0 };

    /**
     * @brief Cutscene time after conversion [hour]
     *
     * Enter the time used during cutscene playback in hours [hour]
     */
    float DstCutscenTime{ 0 };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::CUTSCENE_TIMEZONE_CONVERT_PARAM_ST) == 8,
    "CUTSCENE_TIMEZONE_CONVERT_PARAM_ST paramdef size does not match detected "
    "size");
