/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct PHANTOM_PARAM_ST {
    /**
     * @brief A
     *
     * Edge color A.
     */
    float edgeColorA{ 1.f };

    /**
     * @brief A
     *
     * The front color is A.
     */
    float frontColorA{ 0.f };

    /**
     * @brief A
     *
     * Diffuse multiplication color A.
     */
    float diffMulColorA{ 1.f };

    /**
     * @brief A
     *
     * Specular multiplication color A.
     */
    float specMulColorA{ 1.f };

    /**
     * @brief A
     *
     * Light color A.
     */
    float lightColorA{ 0.f };

    /**
     * @brief R
     *
     * Edge color R.
     */
    unsigned char edgeColorR{ 255 };

    /**
     * @brief G
     *
     * Edge color G.
     */
    unsigned char edgeColorG{ 255 };

    /**
     * @brief B
     *
     * Edge color B.
     */
    unsigned char edgeColorB{ 255 };

    /**
     * @brief R
     *
     * The front color is R.
     */
    unsigned char frontColorR{ 0 };

    /**
     * @brief G
     *
     * The front color is G.
     */
    unsigned char frontColorG{ 0 };

    /**
     * @brief B
     *
     * Front color B.
     */
    unsigned char frontColorB{ 0 };

    /**
     * @brief R
     *
     * Diffuse multiplication color R.
     */
    unsigned char diffMulColorR{ 255 };

    /**
     * @brief G
     *
     * Diffuse multiplication color G.
     */
    unsigned char diffMulColorG{ 255 };

    /**
     * @brief B
     *
     * Diffuse multiplication color B.
     */
    unsigned char diffMulColorB{ 255 };

    /**
     * @brief R
     *
     * Specular multiplication color R.
     */
    unsigned char specMulColorR{ 255 };

    /**
     * @brief G
     *
     * Specular multiplication color G.
     */
    unsigned char specMulColorG{ 255 };

    /**
     * @brief B
     *
     * Specular multiplication color B.
     */
    unsigned char specMulColorB{ 255 };

    /**
     * @brief R
     *
     * Light color R.
     */
    unsigned char lightColorR{ 0 };

    /**
     * @brief G
     *
     * Light color G.
     */
    unsigned char lightColorG{ 0 };

    /**
     * @brief B
     *
     * Light color B.
     */
    unsigned char lightColorB{ 0 };

    unsigned char reserve[1];

    /**
     * @brief α
     *
     * The overall transparency.
     */
    float alpha{ 1.f };

    /**
     * @brief Blend rate
     *
     * The blend ratio.
     */
    float blendRate{ 1.f };

    /**
     * @brief α type
     *
     * The type of alpha blend.
     */
    unsigned char blendType{ 0 };

    /**
     * @brief Whether to perform edge color subtraction
     *
     * Whether to perform edge color subtraction.
     */
    bool isEdgeSubtract{ false };

    /**
     * @brief Whether to perform front color subtraction
     *
     * Is it front color subtraction?
     */
    bool isFrontSubtract{ false };

    /**
     * @brief Do not do 2pass
     *
     * Do you not do 2pass?
     */
    bool isNo2Pass{ false };

    /**
     * @brief Edge width
     */
    float edgePower{ 1.f };

    /**
     * @brief Glow strength
     */
    float glowScale{ 0.f };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::PHANTOM_PARAM_ST) == 56,
    "PHANTOM_PARAM_ST paramdef size does not match detected size");
