/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct RUNTIME_BONE_CONTROL_PARAM_ST {
    /**
     * @brief Character ID
     */
    unsigned int chrId{ 0 };

    /**
     * @brief Control type
     */
    unsigned char ctrlType{ 0 };

    unsigned char pad[11];

    /**
     * @brief Applicable joint
     */
    char applyBone[32];

    /**
     * @brief Target joint 1
     */
    char targetBone1[32];

    /**
     * @brief Target joint 2
     */
    char targetBone2[32];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::RUNTIME_BONE_CONTROL_PARAM_ST) == 112,
    "RUNTIME_BONE_CONTROL_PARAM_ST paramdef size does not match detected size");
