/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct CS_EFFECT_QUALITY_DETAIL {
    bool softParticleEnabled{ true };
    bool glowEnabled{ true };
    bool distortionEnable{ true };
    unsigned char cs_upScaleEnabledType{ 0 };
    float fNumOnceEmitsScale{ 0.9 };
    float fEmitSpanScale{ 1.1 };
    float fLodDistance1Scale{ 0.9 };
    float fLodDistance2Scale{ 0.9 };
    float fLodDistance3Scale{ 0.9 };
    float fLodDistance4Scale{ 0.9 };
    float fScaleRenderDistanceScale{ 1.2 };
    unsigned char dmy[4];
};

}; // namespace paramdefs
}; // namespace from
