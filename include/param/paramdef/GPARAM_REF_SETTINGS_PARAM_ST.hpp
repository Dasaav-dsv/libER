/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct GPARAM_REF_SETTINGS_PARAM_ST {
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
     * @brief Referenced map ID
     *
     * Specify the referenced map number. Legacy: m10_10_00_00-> 10010000, Open:
     * m60_ ?? _ ?? _ ??-> m60000000
     */
    int RefTargetMapId{ -1 };

    unsigned char Reserve[24];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::GPARAM_REF_SETTINGS_PARAM_ST) == 32,
    "GPARAM_REF_SETTINGS_PARAM_ST paramdef size does not match detected size");
