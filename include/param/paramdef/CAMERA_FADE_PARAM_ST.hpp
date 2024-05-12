/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct CAMERA_FADE_PARAM_ST {
    /**
     * @brief Distance to be transparent (m)
     *
     * Near Fade minimum distance (m): Distance where α = 0
     */
    float NearMinDist{ 0.f };

    /**
     * @brief Distance that begins to become transparent (m)
     *
     * Near fade maximum distance (m): Starting distance between α = Middel
     * Alpha
     */
    float NearMaxDist{ 0.f };

    /**
     * @brief Distance to become translucent (m)
     *
     * Minimum distance of Far fade (m): End distance between α = Middle Alpha
     */
    float FarMinDist{ 0.f };

    /**
     * @brief Distance (m) at which it begins to become translucent
     *
     * Maximum Far Fade Distance (m): Distance where α = 1
     */
    float FarMaxDist{ 0.f };

    /**
     * @brief Translucent darkness (α value)
     *
     * Intermediate α value
     */
    float MiddleAlpha{ 0.f };

    /**
     * @brief dummy
     */
    unsigned char dummy[12];
};

}; // namespace paramdef
}; // namespace from
