/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 *
 */
struct SWORD_ARTS_PARAM_ST {
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
     * @brief Swashbuckler ID
     *
     * To pass to the behavior script to determine which swashbuckler
     */
    unsigned char swordArtsType{ 0 };

    /**
     * @brief Arts speed
     *
     * Which cancellation timing do you see? 0: Normal (left hand attack) / 1:
     * Early / 2: Slow
     */
    unsigned char artsSpeedType{ 0 };

    /**
     * @brief Related status
     *
     * Which system of arts points to refer to
     */
    signed char refStatus{ 0 };

    /**
     * @brief Whether to display the arts of the right hand when the left hand
     * (holding one hand)
     *
     * When set to the arts of the left-handed weapon, the arts of the
     * right-handed weapon are displayed in FE. Assumed to be used for "weapon
     * maneuvers" etc.
     */
    bool isRefRightArts : 1 { false };

    /**
     * @brief Whether to gray out with the left hand (holding one hand)
     *
     * Whether to gray out when displaying the arts name of the left hand
     * (one-handed)
     */
    bool isGrayoutLeftHand : 1 { false };

    /**
     * @brief Whether to gray out with the right hand (holding one hand)
     *
     * Whether to gray out when displaying the arts name of the right hand
     * (one-handed)
     */
    bool isGrayoutRightHand : 1 { false };

    /**
     * @brief Will it be grayed out when holding both hands?
     *
     * Whether to gray out when displaying the arts name of both hands
     */
    bool isGrayoutBothHand : 1 { false };

    unsigned char reserve2 : 4;

    /**
     * @brief Consumption point L1
     *
     * Points to spend when putting out arts by L1
     */
    signed char usePoint_L1{ 0 };

    /**
     * @brief Consumption point L2
     *
     * Points to spend when putting out arts by L2
     */
    signed char usePoint_L2{ 0 };

    /**
     * @brief Consumption point R1
     *
     * Points to spend when putting out arts by R1
     */
    signed char usePoint_R1{ 0 };

    /**
     * @brief Consumption point R2
     *
     * Points to spend when putting out arts by R2
     */
    signed char usePoint_R2{ 0 };

    /**
     * @brief Text ID
     *
     * Text ID for arts description
     */
    int textId{ 0 };

    /**
     * @brief MP L1 consumed
     *
     * MP consumed when issuing arts by L1
     */
    short useMagicPoint_L1{ 0 };

    /**
     * @brief MP L2 consumed
     *
     * MP consumed when issuing arts by L2
     */
    short useMagicPoint_L2{ 0 };

    /**
     * @brief MP R1 consumed
     *
     * MP consumed when issuing arts by R1
     */
    short useMagicPoint_R1{ 0 };

    /**
     * @brief MP R2 consumed
     *
     * MP consumed when issuing arts by R2
     */
    short useMagicPoint_R2{ 0 };

    /**
     * @brief swordArtsTypeNew
     */
    unsigned short swordArtsTypeNew{ 0 };

    /**
     * @brief Icon ID
     *
     * ID of the icon displayed in FE etc.
     */
    unsigned short iconId{ 0 };

    /**
     * @brief AI usage judgment ID
     */
    int aiUsageId{ -1 };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::SWORD_ARTS_PARAM_ST) == 32,
    "SWORD_ARTS_PARAM_ST paramdef size does not match detected size");
