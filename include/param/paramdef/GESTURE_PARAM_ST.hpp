/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct GESTURE_PARAM_ST {
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
     * @brief Reference item ID
     *
     * Reference item ID. Used to bring in the gesture text ID, icon ID, and
     * sort ID for each menu. Register the tool ID of the equipment parameter
     */
    int itemId{ 0 };

    /**
     * @brief Anime ID for message attachment
     *
     * Anime ID for attaching messages. Specify the animation ID when attaching
     * a message
     */
    int msgAnimId{ 0 };

    /**
     * @brief Is it prohibited to use while riding?
     *
     * Is it prohibited to use while riding (default: ×)? If ○, it cannot be
     * used while riding
     */
    bool cannotUseRiding : 1 { false };

    unsigned char pad2 : 7;

    unsigned char pad1[3];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::GESTURE_PARAM_ST) == 16,
    "GESTURE_PARAM_ST paramdef size does not match detected size");
