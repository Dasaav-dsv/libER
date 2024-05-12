/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct POSTURE_CONTROL_PARAM_GENDER_ST {
    /**
     * @brief Right elbow _ inside and outside
     */
    short a000_rightElbowIO{ 0 };

    /**
     * @brief Left elbow_inside and outside
     */
    short a000_leftElbowIO{ 0 };

    /**
     * @brief Both feet _ inside and outside
     */
    short a000_bothLegsIO{ 0 };

    /**
     * @brief Right elbow _ inside and outside
     */
    short a002_rightElbowIO{ 0 };

    /**
     * @brief Left elbow_inside and outside
     */
    short a002_leftElbowIO{ 0 };

    /**
     * @brief Both feet _ inside and outside
     */
    short a002_bothLegsIO{ 0 };

    /**
     * @brief Right elbow _ inside and outside
     */
    short a003_rightElbowIO{ 0 };

    /**
     * @brief Left elbow_inside and outside
     */
    short a003_leftElbowIO{ 0 };

    /**
     * @brief Both feet _ inside and outside
     */
    short a003_bothLegsIO{ 0 };

    /**
     * @brief Right elbow _ inside and outside
     */
    short a010_rightElbowIO{ 0 };

    /**
     * @brief Left elbow_inside and outside
     */
    short a010_leftElbowIO{ 0 };

    /**
     * @brief Both feet _ inside and outside
     */
    short a010_bothLegsIO{ 0 };

    /**
     * @brief Right elbow _ inside and outside
     */
    short a012_rightElbowIO{ 0 };

    /**
     * @brief Left elbow_inside and outside
     */
    short a012_leftElbowIO{ 0 };

    /**
     * @brief Both feet _ inside and outside
     */
    short a012_bothLegsIO{ 0 };

    /**
     * @brief Right elbow _ inside and outside
     */
    short a013_rightElbowIO{ 0 };

    /**
     * @brief Left elbow_inside and outside
     */
    short a013_leftElbowIO{ 0 };

    /**
     * @brief Both feet _ inside and outside
     */
    short a013_bothLegsIO{ 0 };

    /**
     * @brief Right elbow _ inside and outside
     */
    short a014_rightElbowIO{ 0 };

    /**
     * @brief Left elbow_inside and outside
     */
    short a014_leftElbowIO{ 0 };

    /**
     * @brief Both feet _ inside and outside
     */
    short a014_bothLegsIO{ 0 };

    /**
     * @brief Right elbow _ inside and outside
     */
    short a015_rightElbowIO{ 0 };

    /**
     * @brief Left elbow_inside and outside
     */
    short a015_leftElbowIO{ 0 };

    /**
     * @brief Both feet _ inside and outside
     */
    short a015_bothLegsIO{ 0 };

    /**
     * @brief Right elbow _ inside and outside
     */
    short a016_rightElbowIO{ 0 };

    /**
     * @brief Left elbow_inside and outside
     */
    short a016_leftElbowIO{ 0 };

    /**
     * @brief Both feet _ inside and outside
     */
    short a016_bothLegsIO{ 0 };

    unsigned char pad[10];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::POSTURE_CONTROL_PARAM_GENDER_ST) == 64,
    "POSTURE_CONTROL_PARAM_GENDER_ST paramdef size does not match detected "
    "size");
