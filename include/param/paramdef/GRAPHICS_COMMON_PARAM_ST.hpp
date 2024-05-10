/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct GRAPHICS_COMMON_PARAM_ST {
    float hitBulletDecalOffset_HitIns{ 0.05 };
    unsigned char reserved02[8];
    float charaWetDecalFadeRange{ 0.6 };
    unsigned char reserved04[240];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::GRAPHICS_COMMON_PARAM_ST) == 256,
    "GRAPHICS_COMMON_PARAM_ST paramdef size does not match detected size");
