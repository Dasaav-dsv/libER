/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct CS_REFLECTION_QUALITY_DETAIL {
    /**
     * @brief Reflective effective
     */
    bool enabled{ true };

    /**
     * @brief Local light enabled
     */
    bool localLightEnabled{ true };

    /**
     * @brief Local light forced enable
     */
    bool localLightForceEnabled{ false };

    /**
     * @brief dmy
     */
    unsigned char dmy[1];

    /**
     * @brief Resolution scale
     */
    unsigned int resolutionDivider{ 2 };

    /**
     * @brief SSR enabled
     */
    bool ssrEnabled{ true };

    /**
     * @brief Gaussian blur permission
     */
    bool ssrGaussianBlurEnabled{ true };

    /**
     * @brief dmy
     */
    unsigned char dmy2[2];

    /**
     * @brief Calculated distance scale
     */
    float ssrDepthRejectThresholdScale{ 1 };

    /**
     * @brief Raytrace step factor (multiply by SSR parameter)
     */
    float ssrRayTraceStepScale{ 1 };

    /**
     * @brief Fade angle bias. High quality when made smaller
     */
    float ssrFadeToViewerBias{ 0 };

    /**
     * @brief Fresnel reject bias. High quality when made smaller
     */
    float ssrFresnelRejectBias{ 0 };
};

}; // namespace paramdef
}; // namespace from
