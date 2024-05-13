/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct POSTURE_CONTROL_PARAM_PRO_ST {
    /**
     * @brief Right arm_inside and outside
     */
    short a000_rightArmIO{ 0 };

    /**
     * @brief Right arm_front and back
     */
    short a000_rightArmFB{ 0 };

    /**
     * @brief Left arm_inside and outside
     */
    short a000_leftArmIO{ 0 };

    /**
     * @brief Left arm_front and back
     */
    short a000_leftArmFB{ 0 };

    /**
     * @brief Right arm_inside and outside
     */
    short a002_rightArmIO{ 0 };

    /**
     * @brief Right arm_front and back
     */
    short a002_rightArmFB{ 0 };

    /**
     * @brief Left arm_inside and outside
     */
    short a002_leftArmIO{ 0 };

    /**
     * @brief Left arm_front and back
     */
    short a002_leftArmFB{ 0 };

    /**
     * @brief Right arm_inside and outside
     */
    short a003_rightArmIO{ 0 };

    /**
     * @brief Right arm_front and back
     */
    short a003_rightArmFB{ 0 };

    /**
     * @brief Left arm_inside and outside
     */
    short a003_leftArmIO{ 0 };

    /**
     * @brief Left arm_front and back
     */
    short a003_leftArmFB{ 0 };

    /**
     * @brief Right arm_inside and outside
     */
    short a010_rightArmIO{ 0 };

    /**
     * @brief Right arm_front and back
     */
    short a010_rightArmFB{ 0 };

    /**
     * @brief Left arm_inside and outside
     */
    short a010_leftArmIO{ 0 };

    /**
     * @brief Left arm_front and back
     */
    short a010_leftArmFB{ 0 };

    /**
     * @brief Right arm_inside and outside
     */
    short a012_rightArmIO{ 0 };

    /**
     * @brief Right arm_front and back
     */
    short a012_rightArmFB{ 0 };

    /**
     * @brief Left arm_inside and outside
     */
    short a012_leftArmIO{ 0 };

    /**
     * @brief Left arm_front and back
     */
    short a012_leftArmFB{ 0 };

    /**
     * @brief Right arm_inside and outside
     */
    short a013_rightArmIO{ 0 };

    /**
     * @brief Right arm_front and back
     */
    short a013_rightArmFB{ 0 };

    /**
     * @brief Left arm_inside and outside
     */
    short a013_leftArmIO{ 0 };

    /**
     * @brief Left arm_front and back
     */
    short a013_leftArmFB{ 0 };

    /**
     * @brief Right arm_inside and outside
     */
    short a014_rightArmIO{ 0 };

    /**
     * @brief Right arm_front and back
     */
    short a014_rightArmFB{ 0 };

    /**
     * @brief Left arm_inside and outside
     */
    short a014_leftArmIO{ 0 };

    /**
     * @brief Left arm_front and back
     */
    short a014_leftArmFB{ 0 };

    /**
     * @brief Right arm_inside and outside
     */
    short a015_rightArmIO{ 0 };

    /**
     * @brief Right arm_front and back
     */
    short a015_rightArmFB{ 0 };

    /**
     * @brief Left arm_inside and outside
     */
    short a015_leftArmIO{ 0 };

    /**
     * @brief Left arm_front and back
     */
    short a015_leftArmFB{ 0 };

    /**
     * @brief Right arm_inside and outside
     */
    short a016_rightArmIO{ 0 };

    /**
     * @brief Right arm_front and back
     */
    short a016_rightArmFB{ 0 };

    /**
     * @brief Left arm_inside and outside
     */
    short a016_leftArmIO{ 0 };

    /**
     * @brief Left arm_front and back
     */
    short a016_leftArmFB{ 0 };

    unsigned char pad[8];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::POSTURE_CONTROL_PARAM_PRO_ST) == 80,
    "POSTURE_CONTROL_PARAM_PRO_ST paramdef size does not match detected size");
