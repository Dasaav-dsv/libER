/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct LOAD_BALANCER_PARAM_ST {
    /**
     * @brief lowerFpsThreshold
     *
     * If it falls below this FPS, increase the load balance level by 1.
     */
    float lowerFpsThreshold{ 23.f };

    /**
     * @brief upperFpsThreshold
     *
     * If you exceed this FPS, lower the load balance level by 1.
     */
    float upperFpsThreshold{ 27.f };

    /**
     * @brief lowerFpsContinousCount
     *
     * If this frame continues below the threshold, level up
     */
    unsigned int lowerFpsContinousCount{ 5 };

    /**
     * @brief upperFpsContinousCount
     *
     * If the threshold is exceeded continuously for this frame, level down
     */
    unsigned int upperFpsContinousCount{ 20 };

    /**
     * @brief downAfterChangeSleep
     *
     * Sleep frame count after level down
     */
    unsigned int downAfterChangeSleep{ 30 };

    /**
     * @brief upAfterChangeSleep
     *
     * Sleep frame count after leveling up
     */
    unsigned int upAfterChangeSleep{ 10 };

    /**
     * @brief Light shaft
     *
     * Light shaft of filter
     */
    unsigned char postProcessLightShaft{ 20 };

    /**
     * @brief Bloom
     */
    unsigned char postProcessBloom{ 20 };

    /**
     * @brief Glow
     */
    unsigned char postProcessGlow{ 20 };

    /**
     * @brief AA
     *
     * Antialiasing
     */
    unsigned char postProcessAA{ 20 };

    /**
     * @brief SSAO
     */
    unsigned char postProcessSSAO{ 20 };

    /**
     * @brief DOF
     */
    unsigned char postProcessDOF{ 20 };

    /**
     * @brief Motion Blur
     */
    unsigned char postProcessMotionBlur{ 20 };

    /**
     * @brief MotionBlurIteration
     *
     * Reduce the number of Motion Blur iterations
     */
    unsigned char postProcessMotionBlurIteration{ 20 };

    unsigned char reserve0[1];

    /**
     * @brief Shadow Blur
     *
     * Cut the shadow blur
     */
    unsigned char shadowBlur{ 20 };

    /**
     * @brief Around the SFX Emit
     *
     * Emit interval, number of emits, LOD distance halved in graphics config
     */
    unsigned char sfxParticleHalf{ 20 };

    /**
     * @brief SFX reflection
     *
     * Omit the reflection scene SFX
     */
    unsigned char sfxReflection{ 20 };

    /**
     * @brief Water interaction
     *
     * Omit water surface interact SFX
     */
    unsigned char sfxWaterInteraction{ 20 };

    /**
     * @brief SFX glow
     *
     * Omit Glow playing with SFX
     */
    unsigned char sfxGlow{ 20 };

    /**
     * @brief SFX distortion
     *
     * Omit of distortion applied by SFX
     */
    unsigned char sfxDistortion{ 20 };

    /**
     * @brief Soft sprite
     *
     * Soft sprite omit with SFX
     */
    unsigned char sftSoftSprite{ 20 };

    /**
     * @brief Light shaft
     *
     * SFX Light Shaft Omit
     */
    unsigned char sfxLightShaft{ 20 };

    /**
     * @brief Scale to the distance judgment of the effect dynamically
     * registered in the reduction buffer
     *
     * Scale to the distance judgment of the effect dynamically registered in
     * the reduction buffer by the distance of SFX
     */
    unsigned char sfxScaleRenderDistanceScale{ 20 };

    /**
     * @brief Dynamic resolution
     */
    unsigned char dynamicResolution{ 1 };

    /**
     * @brief Shadow Cascade0 Resolution Half
     *
     * Cut the shadow (cascade 0) resolution in half
     */
    unsigned char shadowCascade0ResolutionHalf{ 0 };

    /**
     * @brief Shadow Cascade1 Resolution Half
     *
     * Cut the shadow (cascade 1) resolution in half
     */
    unsigned char shadowCascade1ResolutionHalf{ 13 };

    /**
     * @brief Local player
     *
     * Turn off the water wetting process for local players
     */
    unsigned char chrWetDisablePlayer{ 21 };

    /**
     * @brief Remote player
     *
     * Turn off the water wetting process of the remote player
     */
    unsigned char chrWetDisableRemotePlayer{ 21 };

    /**
     * @brief Enemy character
     *
     * Turn off the water wetting process of enemy characters
     */
    unsigned char chrWetDisableEnemy{ 21 };

    /**
     * @brief Resolution reduction lower limit (%)
     */
    unsigned char dynamicResolutionPercentageMin{ 100 };

    /**
     * @brief Resolution reduction upper limit (%)
     */
    unsigned char dynamicResolutionPercentageMax{ 100 };

    unsigned char reserve1[30];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::LOAD_BALANCER_PARAM_ST) == 80,
    "LOAD_BALANCER_PARAM_ST paramdef size does not match detected size");
