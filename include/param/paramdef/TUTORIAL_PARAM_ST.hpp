/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct TUTORIAL_PARAM_ST {
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
     * @brief Display type
     *
     * Specifies the type of tutorial menu to display
     */
    unsigned char menuType{ 0 };

    /**
     * @brief Display timing
     *
     * Display timing (default: 0: "-"). You will see this tutorial when you
     * open this menu. Specify 0: "-" if you do not want to display it when you
     * open the menu.
     */
    unsigned char triggerType{ 0 };

    /**
     * @brief Impressions
     *
     * Number of times to display (default: 0: once in the game)
     */
    unsigned char repeatType{ 0 };

    unsigned char pad1[1];

    /**
     * @brief Image ID
     *
     * Specifies the tutorial image ID to display (default: 0). Specify 0 if you
     * do not want to display the image
     */
    unsigned short imageId{ 0 };

    unsigned char pad2[2];

    /**
     * @brief Display permission flag
     *
     * Event flag ID for display permission (default: 0). It will not be
     * displayed until this flag is set. Specify 0 if you always want to allow
     */
    unsigned int unlockEventFlagId{ 0 };

    /**
     * @brief Text ID
     *
     * ID of the text to be displayed in the tutorial [TutorialText.xlsm]. This
     * text ID is used for both "Title" and "Body"
     */
    int textId{ -1 };

    /**
     * @brief at the earliest
     *
     * Shortest display guaranteed time [seconds]. Even if it is closed due to
     * an event etc., it will be closed after displaying at least this time.
     * It's only for toast, so it's ignored in modals
     */
    float displayMinTime{ 1.f };

    /**
     * @brief Longest
     *
     * Display time [seconds]. It will close automatically after this time has
     * passed since the toast was displayed. It's only for toast, so it's
     * ignored in modals
     */
    float displayTime{ 3.f };

    unsigned char pad3[4];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::TUTORIAL_PARAM_ST) == 32,
    "TUTORIAL_PARAM_ST paramdef size does not match detected size");
