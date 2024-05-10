/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct LOAD_BALANCER_PARAM_ST {
    float lowerFpsThreshold{ 23 };
    float upperFpsThreshold{ 27 };
    unsigned int lowerFpsContinousCount{ 5 };
    unsigned int upperFpsContinousCount{ 20 };
    unsigned int downAfterChangeSleep{ 30 };
    unsigned int upAfterChangeSleep{ 10 };
    unsigned char postProcessLightShaft{ 20 };
    unsigned char postProcessBloom{ 20 };
    unsigned char postProcessGlow{ 20 };
    unsigned char postProcessAA{ 20 };
    unsigned char postProcessSSAO{ 20 };
    unsigned char postProcessDOF{ 20 };
    unsigned char postProcessMotionBlur{ 20 };
    unsigned char postProcessMotionBlurIteration{ 20 };
    unsigned char reserve0[1];
    unsigned char shadowBlur{ 20 };
    unsigned char sfxParticleHalf{ 20 };
    unsigned char sfxReflection{ 20 };
    unsigned char sfxWaterInteraction{ 20 };
    unsigned char sfxGlow{ 20 };
    unsigned char sfxDistortion{ 20 };
    unsigned char sftSoftSprite{ 20 };
    unsigned char sfxLightShaft{ 20 };
    unsigned char sfxScaleRenderDistanceScale{ 20 };
    unsigned char dynamicResolution{ 1 };
    unsigned char shadowCascade0ResolutionHalf{ 0 };
    unsigned char shadowCascade1ResolutionHalf{ 13 };
    unsigned char chrWetDisablePlayer{ 21 };
    unsigned char chrWetDisableRemotePlayer{ 21 };
    unsigned char chrWetDisableEnemy{ 21 };
    unsigned char dynamicResolutionPercentageMin{ 100 };
    unsigned char dynamicResolutionPercentageMax{ 100 };
    unsigned char reserve1[30];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::LOAD_BALANCER_PARAM_ST) == 80,
    "LOAD_BALANCER_PARAM_ST paramdef size does not match detected size");
