/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 *
 */
struct CS_GRAPHICS_CONFIG_PARAM_ST {
    /**
     * @brief Texture filter quality
     *
     * Texture filter quality (default Midele)
     */
    unsigned char m_textureFilterQuality{ 2 };

    /**
     * @brief AA quality
     *
     * AA quality (default High)
     */
    unsigned char m_aaQuality{ 3 };

    /**
     * @brief SSAO quality
     *
     * SSAO quality (default High)
     */
    unsigned char m_ssaoQuality{ 3 };

    /**
     * @brief Depth of field quality
     *
     * Depth of field quality (default High)
     */
    unsigned char m_dofQuality{ 3 };

    /**
     * @brief Motion blur quality
     *
     * Motion blur quality (default High)
     */
    unsigned char m_motionBlurQuality{ 3 };

    /**
     * @brief Shadow quality
     *
     * Shadow quality (default High)
     */
    unsigned char m_shadowQuality{ 3 };

    /**
     * @brief Lighting quality
     *
     * Lighting quality (default High)
     */
    unsigned char m_lightingQuality{ 3 };

    /**
     * @brief Effect quality
     *
     * Effect quality (default High)
     */
    unsigned char m_effectQuality{ 3 };

    /**
     * @brief Decal quality
     *
     * Decal quality (default High)
     */
    unsigned char m_decalQuality{ 3 };

    /**
     * @brief Reflection quality
     *
     * Reflection quality (default High)
     */
    unsigned char m_reflectionQuality{ 3 };

    /**
     * @brief Water quality
     *
     * Water quality (default High)
     */
    unsigned char m_waterQuality{ 3 };

    /**
     * @brief Shader quality
     *
     * Shader quality (default High)
     */
    unsigned char m_shaderQuality{ 3 };

    /**
     * @brief Volumetric effect quality
     *
     * Volumetric effect quality (default High)
     */
    unsigned char m_volumetricEffectQuality{ 3 };

    /**
     * @brief m_RayTracingQuality
     */
    unsigned char m_RayTracingQuality{ 0 };

    /**
     * @brief dmy
     */
    unsigned char m_dummy_1[2];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::CS_GRAPHICS_CONFIG_PARAM_ST) == 16,
    "CS_GRAPHICS_CONFIG_PARAM_ST paramdef size does not match detected size");
