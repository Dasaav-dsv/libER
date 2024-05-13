/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct BONFIRE_WARP_SUB_CATEGORY_PARAM_ST {
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
     * @brief Text ID
     *
     * Subcategory display name Text ID [MenuText]
     */
    int textId{ 0 };

    /**
     * @brief Kagaribi Warp Tab ID
     *
     * Kagaribi Warp Tab ID. ID of the tab to which this subcategory belongs
     */
    unsigned short tabId{ 0 };

    /**
     * @brief Bonfire Warp Tab Sort ID
     *
     * Bonfire Warp Tab Sort ID. Display order of subcategories in tabs
     */
    unsigned short sortId{ 0 };

    unsigned char pad[4];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::BONFIRE_WARP_SUB_CATEGORY_PARAM_ST) == 16,
    "BONFIRE_WARP_SUB_CATEGORY_PARAM_ST paramdef size does not match detected "
    "size");
