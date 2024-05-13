/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct SOUND_COMMON_INGAME_PARAM_ST {
    /**
     * @brief Parameter Key string
     *
     * Key string of the parameter
     */
    char ParamKeyStr[32];

    /**
     * @brief Parameter Value string
     *
     * Value string of the parameter
     */
    char ParamValueStr[32];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::SOUND_COMMON_INGAME_PARAM_ST) == 64,
    "SOUND_COMMON_INGAME_PARAM_ST paramdef size does not match detected size");
