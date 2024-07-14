/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 *
 */
struct CUTSCENE_MAP_ID_PARAM_ST {
    /**
     * @brief Do you remove it from the NT version output?
     *
     * Parameters marked with ○ are excluded in the NT version package.
     */
    bool disableParam_NT : 1 { false };

    /**
     * @brief Is it a debug parameter?
     *
     * Parameters marked with a circle are excluded from all packages (because
     * they are for debugging).
     */
    bool disableParam_Debug : 1 { false };

    /**
     * @brief Reserve for package output 1
     */
    unsigned char disableParamReserve1 : 6;

    /**
     * @brief Reserve for package output 2
     */
    unsigned char disableParamReserve2[3];

    /**
     * @brief Map number to play
     *
     * Please enter the map number to be played back as an 8-digit number. This
     * is the map number used as the reference in the cutscene. If you do not
     * specify the correct map number, the playback position will shift.
     */
    unsigned int PlayMapId{ 0 };

    /**
     * @brief Map number 1 required for display
     *
     * Please enter the map number required for display as an 8-digit number.
     * This parameter is used by the guest as a list to determine if the
     * cutscene can be played. If you don't need it, you can leave it as 0 or
     * blank.
     */
    unsigned int RequireMapId0{ 0 };

    /**
     * @brief Map number 2 required for display
     *
     * Please enter the map number required for display as an 8-digit number.
     * This parameter is used by the guest as a list to determine if the
     * cutscene can be played. If you don't need it, you can leave it as 0 or
     * blank.
     */
    unsigned int RequireMapId1{ 0 };

    /**
     * @brief Map number 3 required for display
     *
     * Please enter the map number required for display as an 8-digit number.
     * This parameter is used by the guest as a list to determine if the
     * cutscene can be played. If you don't need it, you can leave it as 0 or
     * blank.
     */
    unsigned int RequireMapId2{ 0 };

    /**
     * @brief Hit part ID for calculating camera position during loading
     */
    int RefCamPosHitPartsID{ -1 };

    int unknown_0x18{ 0 };

    unsigned char reserved_2[8];

    /**
     * @brief Waiting time when cannot be displayed [seconds]
     *
     * The number of seconds used to display the progress of the loading screen
     * progress bar that is displayed when the guest side cannot play in the
     * multi. [GR] SEQ22843 [Cutscene] Players who have not read the map number
     * required for display during cutscene playback will see the screen go
     * dark.
     */
    unsigned short ClientDisableViewTimeForProgress{ 0 };

    unsigned char reserved[2];

    /**
     * @brief Hit parts waiting to be read 0
     */
    int HitParts_0{ -1 };

    /**
     * @brief Hit parts waiting to be read 1
     */
    int HitParts_1{ -1 };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::CUTSCENE_MAP_ID_PARAM_ST) == 48,
    "CUTSCENE_MAP_ID_PARAM_ST paramdef size does not match detected size");
