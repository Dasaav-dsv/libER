/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct CUTSCENE_TEXTURE_LOAD_PARAM_ST {
    /**
     * @brief Do you remove it from the NT version output?
     *
     * Parameters marked with ○ are excluded in the NT version package.
     */
    bool disableParam_NT : 1 { false };

    /**
     * @brief Is it a debug parameter?
     *
     * Parameters marked with a circle are excluded from all packages (because
     * they are for debugging).
     */
    bool disableParam_Debug : 1 { false };

    /**
     * @brief Reserve for package output 1
     */
    unsigned char disableParamReserve1 : 6;

    /**
     * @brief Reserve for package output 2
     */
    unsigned char disableParamReserve2[3];

    /**
     * @brief Texture name 00
     */
    char texName_00[16];

    /**
     * @brief Texture name 01
     */
    char texName_01[16];

    /**
     * @brief Texture name 02
     */
    char texName_02[16];

    /**
     * @brief Texture name 03
     */
    char texName_03[16];

    /**
     * @brief Texture name 04
     */
    char texName_04[16];

    /**
     * @brief Texture name 05
     */
    char texName_05[16];

    /**
     * @brief Texture name 06
     */
    char texName_06[16];

    /**
     * @brief Texture name 07
     */
    char texName_07[16];

    /**
     * @brief Texture name 08
     */
    char texName_08[16];

    /**
     * @brief Texture name 09
     */
    char texName_09[16];

    /**
     * @brief Texture name 10
     */
    char texName_10[16];

    /**
     * @brief Texture name 11
     */
    char texName_11[16];

    /**
     * @brief Texture name 12
     */
    char texName_12[16];

    /**
     * @brief Texture name 13
     */
    char texName_13[16];

    /**
     * @brief Texture name 14
     */
    char texName_14[16];

    /**
     * @brief Texture name 15
     */
    char texName_15[16];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::CUTSCENE_TEXTURE_LOAD_PARAM_ST) == 260,
    "CUTSCENE_TEXTURE_LOAD_PARAM_ST paramdef size does not match detected "
    "size");
