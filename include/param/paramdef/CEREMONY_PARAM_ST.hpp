/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct CEREMONY_PARAM_ST {
    /**
     * @brief Event layer ID
     *
     * Event maker layer ID
     */
    int eventLayerId{ 0 };

    /**
     * @brief MapStudio Layer ID
     *
     * Map Studio Layer ID
     */
    int mapStudioLayerId{ 0 };

    /**
     * @brief Multiplayer area offset
     *
     * Multiplayer area ID offset. For example, if you enter "100", the
     * multiplayer area ID will be offset by "100".
     */
    int multiPlayAreaOffset{ 0 };

    /**
     * @brief Map name ID overwrite_place name display
     *
     * Override the map name ID_place name display with the specified ID. -1: No
     * overwrite, -2 or less, 0 or more: Overwrite the ID.
     */
    int overrideMapPlaceNameId{ -1 };

    /**
     * @brief Map name ID overwrite_save data display
     *
     * Map name ID_Overwrites the save data display with the specified ID. -1:
     * No overwrite, -2 or less, 0 or more: Overwrite the ID.
     */
    int overrideSaveMapNameId{ -1 };

    unsigned char pad2[16];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::CEREMONY_PARAM_ST) == 36,
    "CEREMONY_PARAM_ST paramdef size does not match detected size");
