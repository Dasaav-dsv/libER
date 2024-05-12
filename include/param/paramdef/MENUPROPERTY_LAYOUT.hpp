/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct MENUPROPERTY_LAYOUT {
    /**
     * @brief Layout path
     */
    char LayoutPath[16];

    /**
     * @brief Property ID
     */
    int PropertyID{ 0 };

    /**
     * @brief Item name Text ID
     *
     * If a valid text ID is set, this will be displayed in preference to the
     * property name.
     */
    int CaptionTextID{ 0 };

    /**
     * @brief Help text ID
     *
     * Only if this is a valid text ID will it be selectable in the field help.
     */
    int HelpTextID{ 0 };

    unsigned char reserved[4];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::MENUPROPERTY_LAYOUT) == 32,
    "MENUPROPERTY_LAYOUT paramdef size does not match detected size");
