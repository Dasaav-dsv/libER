/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct SHOP_LINEUP_PARAM {
    /**
     * @brief Equipment ID
     *
     * ID of the equipment for sale
     */
    int equipId{ 0 };

    /**
     * @brief price
     *
     * Selling price to overwrite (-1: Do not overwrite)
     */
    int value{ -1 };

    /**
     * @brief Material ID required for purchase
     *
     * Material ID required for purchase (-1: None)
     */
    int mtrlId{ -1 };

    /**
     * @brief Quantity retention event flag
     *
     * Event flag value that holds the number
     */
    unsigned int eventFlag_forStock{ 0 };

    /**
     * @brief Sales ban event flag
     */
    unsigned int eventFlag_forRelease{ 0 };

    /**
     * @brief Number of units sold
     */
    short sellQuantity{ -1 };

    unsigned char pad3[1];

    /**
     * @brief Equipment type
     *
     * Types of equipment for sale
     */
    unsigned char equipType{ 0 };

    /**
     * @brief Price type
     *
     * Price type. Applies only when overwriting the selling price
     */
    unsigned char costType{ 0 };

    unsigned char pad1[1];

    /**
     * @brief Number of sets sold
     *
     * Number of sets sold. Number of pieces you can get with one purchase
     * (default: 1)
     */
    unsigned short setNum{ 1 };

    /**
     * @brief Addition
     *
     * Correction (addition) to the selling price of equipment. Equipment para
     * selling price x magnification + addition
     */
    int value_Add{ 0 };

    /**
     * @brief magnification
     *
     * Correction (magnification) to the selling price of equipment. Equipment
     * para selling price x magnification + addition
     */
    float value_Magnification{ 1.f };

    /**
     * @brief Icon ID
     *
     * Menu display_icon ID (-1: do not overwrite)
     */
    int iconId{ -1 };

    /**
     * @brief Text ID
     *
     * Menu display_text ID (-1: do not overwrite)
     */
    int nameMsgId{ -1 };

    /**
     * @brief Menu title text ID
     *
     * Text ID of the shop menu title (-1: Do not overwrite). This value of the
     * first para found in the para ID range passed when launching the shop is
     * referenced
     */
    int menuTitleMsgId{ -1 };

    /**
     * @brief Menu icon ID
     *
     * Shop menu icon ID (-1: Do not overwrite). This value of the first para
     * found in the para ID range passed when launching the shop is referenced
     */
    short menuIconId{ -1 };

    unsigned char pad2[2];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::SHOP_LINEUP_PARAM) == 52,
    "SHOP_LINEUP_PARAM paramdef size does not match detected size");
