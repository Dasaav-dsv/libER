/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct MENU_PARAM_COLOR_TABLE_ST {
    /**
     * @brief Interpolation method
     */
    unsigned char lerpMode{ 0 };

    unsigned char pad1[3];

    /**
     * @brief Hue
     *
     * Hue. Treat as a fixed value in interpolation
     */
    unsigned short h{ 0 };

    unsigned char pad2[2];

    /**
     * @brief saturation
     *
     * Saturation 1. Treated as the first point of interpolation
     */
    float s1{ 1.f };

    /**
     * @brief brightness
     *
     * Brightness 1. Treated as the first point of interpolation
     */
    float v1{ 1.f };

    /**
     * @brief saturation
     *
     * Saturation 2. Treated as the second point of interpolation
     */
    float s2{ 1.f };

    /**
     * @brief brightness
     *
     * Brightness 2. Treated as the second point of interpolation
     */
    float v2{ 1.f };

    /**
     * @brief saturation
     *
     * Saturation 3. Treated as the third point of interpolation
     */
    float s3{ 1.f };

    /**
     * @brief brightness
     *
     * Brightness 3. Treated as the third point of interpolation
     */
    float v3{ 1.f };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::MENU_PARAM_COLOR_TABLE_ST) == 32,
    "MENU_PARAM_COLOR_TABLE_ST paramdef size does not match detected size");
