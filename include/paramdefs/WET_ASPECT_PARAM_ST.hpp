/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct WET_ASPECT_PARAM_ST {
    unsigned char baseColorR{ 0 };
    unsigned char baseColorG{ 0 };
    unsigned char baseColorB{ 0 };
    unsigned char reserve_0[1];
    float baseColorA{ 0 };
    unsigned char metallic{ 0 };
    unsigned char reserve_1[1];
    unsigned char reserve_2[1];
    unsigned char reserve_3[1];
    float metallicRate{ 0 };
    float shininessRate{ 0 };
    unsigned char shininess{ 0 };
    unsigned char reserve_4[11];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::WET_ASPECT_PARAM_ST) == 32,
    "WET_ASPECT_PARAM_ST paramdef size does not match detected size");
