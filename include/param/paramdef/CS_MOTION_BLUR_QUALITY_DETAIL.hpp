/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct CS_MOTION_BLUR_QUALITY_DETAIL {
    /**
     * @brief Motion blur enabled
     */
    bool enabled{ true };

    /**
     * @brief OMB (object motion blur) enabled
     */
    bool ombEnabled{ true };

    /**
     * @brief Decrease the resolution of the velocity buffer used internally
     *
     * Decrease the resolution of the velocity buffer used internally. Not
     * effective if you are not using precision velocity buffers
     */
    bool forceScaleVelocityBuffer{ true };

    /**
     * @brief Normally processed by the Reconstruction filter, but downgraded to
     * a lighter process
     */
    bool cheapFilterMode{ false };

    /**
     * @brief Give an offset to the sample count
     *
     * Give an offset to the sample count * Set to a multiple of 2
     */
    int sampleCountBias{ -2 };

    /**
     * @brief Offset the number of recursive blurs
     *
     * Give an offset to the number of recursive blurs
     */
    int recurrenceCountBias{ 0 };

    /**
     * @brief Scale value for blur maximum length parameter
     */
    float blurMaxLengthScale{ 0.75f };
};

}; // namespace paramdef
}; // namespace from
