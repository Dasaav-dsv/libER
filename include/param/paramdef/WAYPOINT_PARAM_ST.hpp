/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct WAYPOINT_PARAM_ST {
    /**
     * @brief Attribute 1
     */
    short attribute1{ -1 };

    /**
     * @brief Attribute 2
     */
    short attribute2{ -1 };

    /**
     * @brief Attribute 3
     */
    short attribute3{ -1 };

    /**
     * @brief Attribute 4
     */
    short attribute4{ -1 };

    unsigned char padding4[8];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::WAYPOINT_PARAM_ST) == 16,
    "WAYPOINT_PARAM_ST paramdef size does not match detected size");
