/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct DIRECTION_CAMERA_PARAM_ST {
    /**
     * @brief Affected by options
     *
     * Is it affected by the production camera ON / OFF option?
     */
    bool isUseOption : 1 { false };

    unsigned char pad2 : 3;

    unsigned char pad1[15];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::DIRECTION_CAMERA_PARAM_ST) == 16,
    "DIRECTION_CAMERA_PARAM_ST paramdef size does not match detected size");
