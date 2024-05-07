/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct CS_REFLECTION_QUALITY_DETAIL {
    bool enabled{ true };
    bool localLightEnabled{ true };
    bool localLightForceEnabled{ false };
    unsigned char dmy[1];
    unsigned int resolutionDivider{ 2 };
    bool ssrEnabled{ true };
    bool ssrGaussianBlurEnabled{ true };
    unsigned char dmy2[2];
    float ssrDepthRejectThresholdScale{ 1 };
    float ssrRayTraceStepScale{ 1 };
    float ssrFadeToViewerBias{ 0 };
    float ssrFresnelRejectBias{ 0 };
};

}; // namespace paramdefs
}; // namespace from
