/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct CUTSCENE_GPARAM_TIME_PARAM_ST {
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
     * @brief Morning
     *
     * Morning (Refer to the cutscene time conversion setting sheet for the
     * conversion time)
     */
    unsigned char DstTimezone_Morning{ 0 };

    /**
     * @brief Noon A
     *
     * Day A (Refer to the cutscene time conversion setting sheet for the
     * conversion time)
     */
    unsigned char DstTimezone_Noon{ 0 };

    /**
     * @brief Noon B
     *
     * Noon-B (Refer to the cutscene time conversion setting sheet for the
     * conversion time)
     */
    unsigned char DstTimezone_AfterNoon{ 0 };

    /**
     * @brief evening
     *
     * Evening (Refer to the cutscene time conversion setting sheet for the
     * conversion time)
     */
    unsigned char DstTimezone_Evening{ 0 };

    /**
     * @brief Night
     *
     * Night (Refer to the cutscene time conversion setting sheet for the
     * conversion time)
     */
    unsigned char DstTimezone_Night{ 0 };

    /**
     * @brief Midnight A
     *
     * Midnight A (Refer to the cutscene time conversion setting sheet for the
     * conversion time)
     */
    unsigned char DstTimezone_DeepNightA{ 0 };

    /**
     * @brief Midnight B
     *
     * Midnight B (Refer to the cutscene time conversion setting sheet for the
     * conversion time)
     */
    unsigned char DstTimezone_DeepNightB{ 0 };

    unsigned char reserved[1];

    /**
     * @brief Specify in-game time at the end of playback [hour]
     *
     * Specify in-game time at the end of playback [hour] [-1.0 to 24.0] (-1
     * (less than 0): do nothing)
     */
    float PostPlayIngameTime{ -1.f };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::CUTSCENE_GPARAM_TIME_PARAM_ST) == 16,
    "CUTSCENE_GPARAM_TIME_PARAM_ST paramdef size does not match detected size");
