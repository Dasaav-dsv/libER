/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct CHARMAKEMENU_LISTITEM_PARAM_ST {
    /**
     * @brief value
     *
     * The value handled by the program. Make serial numbers within one group
     */
    int value{ 0 };

    /**
     * @brief Item text ID
     *
     * ID of the text to be displayed
     */
    int captionId{ 0 };

    /**
     * @brief Icon ID
     *
     * ID of the icon to be displayed
     */
    unsigned char iconId{ 0 };

    unsigned char reserved[7];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::CHARMAKEMENU_LISTITEM_PARAM_ST) == 16,
    "CHARMAKEMENU_LISTITEM_PARAM_ST paramdef size does not match detected "
    "size");
