/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct WWISE_VALUE_TO_STR_CONVERT_PARAM_ST {
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
     * @brief Wwise parameter string
     */
    char ParamStr[32];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::WWISE_VALUE_TO_STR_CONVERT_PARAM_ST) == 36,
    "WWISE_VALUE_TO_STR_CONVERT_PARAM_ST paramdef size does not match detected "
    "size");
