/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct CHR_MODEL_PARAM_ST {
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
     * @brief Model used memory type
     */
    unsigned char modelMemoryType{ 0 };

    /**
     * @brief Texture usage memory type
     */
    unsigned char texMemoryType{ 0 };

    /**
     * @brief Camera fade parameter ID
     *
     * Camera fade parameter ID (-1: refer to material, 0: do not disappear, 1
     * ~: parameter ID)
     */
    short cameraDitherFadeId{ 0 };

    /**
     * @brief Report animation capacity (MB)
     *
     * If this value is exceeded, a report will be sent by the reporting system.
     */
    float reportAnimMemSizeMb{ 12.f };

    unsigned int unk{ 0 };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::CHR_MODEL_PARAM_ST) == 16,
    "CHR_MODEL_PARAM_ST paramdef size does not match detected size");
