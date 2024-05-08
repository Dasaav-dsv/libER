/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct GRAPHICS_COMMON_PARAM_ST {
    float hitBulletDecalOffset_HitIns{ 0.05 };
    unsigned char reserved02[8];
    float charaWetDecalFadeRange{ 0.6 };
    unsigned char reserved04[240];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::GRAPHICS_COMMON_PARAM_ST) == 256,
    "GRAPHICS_COMMON_PARAM_ST paramdef size does not match detected size");
