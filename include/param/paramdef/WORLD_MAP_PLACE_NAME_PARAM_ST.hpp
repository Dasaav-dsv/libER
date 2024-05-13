/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct WORLD_MAP_PLACE_NAME_PARAM_ST {
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
     * @brief Map fragment parameter ID
     *
     * Map fragment parameter ID. Display text if you have this map fragment
     */
    int worldMapPieceId{ -1 };

    /**
     * @brief Text ID
     *
     * The text ID to display. PlaceName.xlsm
     */
    int textId{ -1 };

    unsigned char pad1[4];

    /**
     * @brief Area number
     *
     * AA part of mAA_BB_CC_DD
     */
    unsigned char areaNo{ 0 };

    /**
     * @brief Grid X number
     *
     * BB part of mAA_BB_CC_DD
     */
    unsigned char gridXNo{ 0 };

    /**
     * @brief Grid Z number
     *
     * CC part of mAA_BB_CC_DD
     */
    unsigned char gridZNo{ 0 };

    unsigned char pad2[1];

    /**
     * @brief X coordinate
     */
    float posX{ 0.f };

    /**
     * @brief Y coordinate
     *
     * Y coordinate (not used)
     */
    float posY{ 0.f };

    /**
     * @brief Z coordinate
     */
    float posZ{ 0.f };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::WORLD_MAP_PLACE_NAME_PARAM_ST) == 32,
    "WORLD_MAP_PLACE_NAME_PARAM_ST paramdef size does not match detected size");
