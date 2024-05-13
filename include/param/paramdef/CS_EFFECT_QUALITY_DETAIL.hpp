/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct CS_EFFECT_QUALITY_DETAIL {
    /**
     * @brief Soft particles enabled
     */
    bool softParticleEnabled{ true };

    /**
     * @brief Glow effective
     */
    bool glowEnabled{ true };

    /**
     * @brief Distortion effective
     */
    bool distortionEnable{ true };

    /**
     * @brief Enable bilateral upscale
     *
     * Bilateral upscale effective
     */
    unsigned char cs_upScaleEnabledType{ 0 };

    /**
     * @brief Number of Emits at one time
     */
    float fNumOnceEmitsScale{ 0.9f };

    /**
     * @brief Emit interval
     */
    float fEmitSpanScale{ 1.1f };

    /**
     * @brief 1st stage LOD distance scale
     */
    float fLodDistance1Scale{ 0.9f };

    /**
     * @brief Second stage LOD distance scale
     */
    float fLodDistance2Scale{ 0.9f };

    /**
     * @brief 3rd stage LOD distance scale
     */
    float fLodDistance3Scale{ 0.9f };

    /**
     * @brief 4th stage LOD distance scale
     */
    float fLodDistance4Scale{ 0.9f };

    /**
     * @brief Magnification to the distance registered in the reduction buffer
     */
    float fScaleRenderDistanceScale{ 1.2f };

    /**
     * @brief dummy
     */
    unsigned char dmy[4];
};

}; // namespace paramdef
}; // namespace from
