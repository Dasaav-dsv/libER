/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct POSTURE_CONTROL_PARAM_WEP_LEFT_ST {
    /**
     * @brief Left arm_front and back
     */
    short a000_leftArmFB{ 0 };

    /**
     * @brief Left wrist_front and back
     */
    short a000_leftWristFB{ 0 };

    /**
     * @brief Left wrist_inside and outside
     */
    short a000_leftWristIO{ 0 };

    /**
     * @brief Left arm_front and back
     */
    short a002_leftArmFB{ 0 };

    /**
     * @brief Left wrist_front and back
     */
    short a002_leftWristFB{ 0 };

    /**
     * @brief Left wrist_inside and outside
     */
    short a002_leftWristIO{ 0 };

    /**
     * @brief Left arm_front and back
     */
    short a003_leftArmFB{ 0 };

    /**
     * @brief Left wrist_front and back
     */
    short a003_leftWristFB{ 0 };

    /**
     * @brief Left wrist_inside and outside
     */
    short a003_leftWristIO{ 0 };

    unsigned char pad[14];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::POSTURE_CONTROL_PARAM_WEP_LEFT_ST) == 32,
    "POSTURE_CONTROL_PARAM_WEP_LEFT_ST paramdef size does not match detected "
    "size");
