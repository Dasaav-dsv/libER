/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct SIGN_PUDDLE_PARAM_ST {
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
     * @brief Simple match area ID
     *
     * ID of the simple match area to which it belongs
     */
    int matchAreaId{ 0 };

    unsigned char pad1[24];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::SIGN_PUDDLE_PARAM_ST) == 32,
    "SIGN_PUDDLE_PARAM_ST paramdef size does not match detected size");
