/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct CS_SHADOW_QUALITY_DETAIL {
    /**
     * @brief Shadow is enabled
     */
    bool enabled{ true };

    /**
     * @brief Maximum filter quality allowed
     */
    unsigned char maxFilterLevel{ 1 };

    /**
     * @brief dmy
     */
    unsigned char dmy[2];

    /**
     * @brief Scaler with set shadow map resolution
     */
    unsigned int textureSizeScaler{ 1 };

    /**
     * @brief Divide the set shadow map resolution
     */
    unsigned int textureSizeDivider{ 2 };

    /**
     * @brief Minimum resolution
     *
     * Clamp resolution
     */
    unsigned int textureMinSize{ 128 };

    /**
     * @brief Maximum resolution
     *
     * Clamp the resolution. It will be the resolution judgment for each cascade
     */
    unsigned int textureMaxSize{ 1024 };

    /**
     * @brief Blur count bias
     *
     * Blur count bias (set count bias, unchanged at 0)
     */
    int blurCountBias{ -1 };
};

}; // namespace paramdef
}; // namespace from
