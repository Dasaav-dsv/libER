/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct CUTSCENE_WEATHER_OVERRIDE_GPARAM_ID_CONVERT_PARAM_ST {
    /**
     * @brief Cutscene Weather Overwrite Gparam Suffix ID
     *
     * The ID of the ?? part of s00_00_0000_WeatherOverride_ ??. Gparam
     */
    unsigned int weatherOverrideGparamId{ 0 };
};

}; // namespace paramdef
}; // namespace from

static_assert(
    sizeof(from::paramdef::CUTSCENE_WEATHER_OVERRIDE_GPARAM_ID_CONVERT_PARAM_ST)
        == 4,
    "CUTSCENE_WEATHER_OVERRIDE_GPARAM_ID_CONVERT_PARAM_ST paramdef size does "
    "not match detected size");
