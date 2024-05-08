/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct CS_GRAPHICS_CONFIG_PARAM_ST {
    unsigned char m_textureFilterQuality{ 2 };
    unsigned char m_aaQuality{ 3 };
    unsigned char m_ssaoQuality{ 3 };
    unsigned char m_dofQuality{ 3 };
    unsigned char m_motionBlurQuality{ 3 };
    unsigned char m_shadowQuality{ 3 };
    unsigned char m_lightingQuality{ 3 };
    unsigned char m_effectQuality{ 3 };
    unsigned char m_decalQuality{ 3 };
    unsigned char m_reflectionQuality{ 3 };
    unsigned char m_waterQuality{ 3 };
    unsigned char m_shaderQuality{ 3 };
    unsigned char m_volumetricEffectQuality{ 3 };
    unsigned char m_dummy[3];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::CS_GRAPHICS_CONFIG_PARAM_ST) == 16,
    "CS_GRAPHICS_CONFIG_PARAM_ST paramdef size does not match detected size");
