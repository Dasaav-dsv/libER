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

    int unknown_0x20{ 0 };

    int unknown_0x24{ 0 };

    /**
     * @brief areaNo
     */
    unsigned char areaNo{ 0 };

    /**
     * @brief gridXNo
     */
    unsigned char gridXNo{ 0 };

    /**
     * @brief gridZNo
     */
    unsigned char gridZNo{ 0 };

    unsigned char pad3[1];

    /**
     * @brief posX
     */
    float posX{ 0.0f };

    /**
     * @brief posY
     */
    float posY{ 0.0f };

    /**
     * @brief posZ
     */
    float posZ{ 0.0f };

    /**
     * @brief signSubCategoryId
     */
    int signSubCategoryId{ 0 };

    /**
     * @brief locationTextId
     */
    int locationTextId{ 0 };

    /**
     * @brief sortId
     */
    int sortId{ 0 };

    /**
     * @brief endPad
     */
    unsigned char endPad[4];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::SIGN_PUDDLE_PARAM_ST) == 48,
    "SIGN_PUDDLE_PARAM_ST paramdef size does not match detected size");
