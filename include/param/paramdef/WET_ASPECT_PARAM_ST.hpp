/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct WET_ASPECT_PARAM_ST {
    /**
     * @brief Base color value R
     *
     * Base color color R.
     */
    unsigned char baseColorR{ 0 };

    /**
     * @brief Base color value G
     *
     * Base color color G.
     */
    unsigned char baseColorG{ 0 };

    /**
     * @brief Base color value B
     *
     * Base color color B.
     */
    unsigned char baseColorB{ 0 };

    unsigned char reserve_0[1];

    /**
     * @brief Base color%
     *
     * Base color override rate.
     */
    float baseColorA{ 0.f };

    /**
     * @brief Metallic value
     *
     * It's metallic.
     */
    unsigned char metallic{ 0 };

    unsigned char reserve_1[1];

    unsigned char reserve_2[1];

    unsigned char reserve_3[1];

    /**
     * @brief Metallic%
     *
     * Metallic override rate.
     */
    float metallicRate{ 0.f };

    /**
     * @brief Shininess%
     *
     * Shininess override rate.
     */
    float shininessRate{ 0.f };

    /**
     * @brief Shininess value
     *
     * Shininess.
     */
    unsigned char shininess{ 0 };

    unsigned char reserve_4[11];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::WET_ASPECT_PARAM_ST) == 32,
    "WET_ASPECT_PARAM_ST paramdef size does not match detected size");
