/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct CS_MOTION_BLUR_QUALITY_DETAIL {
    bool enabled{ true };
    bool ombEnabled{ true };
    bool forceScaleVelocityBuffer{ true };
    bool cheapFilterMode{ false };
    int sampleCountBias{ -2 };
    int recurrenceCountBias{ 0 };
    float blurMaxLengthScale{ 0.75 };
};

}; // namespace paramdef
}; // namespace from
