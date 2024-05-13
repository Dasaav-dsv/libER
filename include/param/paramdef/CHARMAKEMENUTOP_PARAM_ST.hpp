/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct CHARMAKEMENUTOP_PARAM_ST {
    /**
     * @brief Command type
     */
    int commandType{ 0 };

    /**
     * @brief Item text ID
     *
     * ID of the text to be displayed
     */
    int captionId{ 0 };

    /**
     * @brief Face Param ID
     */
    int faceParamId{ 0 };

    /**
     * @brief Table ID (male)
     *
     * First ID (male) in the list of items to select. The command type is
     * [Slider: Text ID of minimum label (n) and maximum label (n + 1), Color:
     * ID of color table, Grid or text: First ID of character make list item,
     * Other: Ignore]
     */
    int tableId{ 0 };

    /**
     * @brief Display conditions
     *
     * Conditions for displaying this command
     */
    int viewCondition{ 0 };

    /**
     * @brief Preview mode
     *
     * Display mode of the character model displayed in preview
     */
    signed char previewMode{ 0 };

    unsigned char reserved2[3];

    /**
     * @brief Table ID (female)
     *
     * For women with table ID. If -1, refer to for men
     */
    int tableId2{ -1 };

    /**
     * @brief Referenced face Param ID
     *
     * Face param ID of the matching destination for "matching to XX"
     */
    int refFaceParamId{ -1 };

    /**
     * @brief Referenced text ID
     *
     * Display text ID for "fit to XX"
     */
    int refTextId{ -1 };

    /**
     * @brief 1 line help text ID (overwrite)
     *
     * 1-line help text ID (-1: Get 1-line help with item text ID). Basically,
     * item text ID = 1 line help text ID, but if you want to overwrite part of
     * it, specify it with this parameter.
     */
    int helpTextId{ -1 };

    /**
     * @brief Event flag ID
     *
     * Event flag to unlock this item (0: invalid value). Invalid value will
     * always be unlocked
     */
    unsigned int unlockEventFlagId{ 0 };

    unsigned char reserved[4];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::CHARMAKEMENUTOP_PARAM_ST) == 48,
    "CHARMAKEMENUTOP_PARAM_ST paramdef size does not match detected size");
