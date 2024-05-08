/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct PHANTOM_PARAM_ST {
    float edgeColorA{ 1 };
    float frontColorA{ 0 };
    float diffMulColorA{ 1 };
    float specMulColorA{ 1 };
    float lightColorA{ 0 };
    unsigned char edgeColorR{ 255 };
    unsigned char edgeColorG{ 255 };
    unsigned char edgeColorB{ 255 };
    unsigned char frontColorR{ 0 };
    unsigned char frontColorG{ 0 };
    unsigned char frontColorB{ 0 };
    unsigned char diffMulColorR{ 255 };
    unsigned char diffMulColorG{ 255 };
    unsigned char diffMulColorB{ 255 };
    unsigned char specMulColorR{ 255 };
    unsigned char specMulColorG{ 255 };
    unsigned char specMulColorB{ 255 };
    unsigned char lightColorR{ 0 };
    unsigned char lightColorG{ 0 };
    unsigned char lightColorB{ 0 };
    unsigned char reserve[1];
    float alpha{ 1 };
    float blendRate{ 1 };
    unsigned char blendType{ 0 };
    bool isEdgeSubtract{ false };
    bool isFrontSubtract{ false };
    bool isNo2Pass{ false };
    float edgePower{ 1 };
    float glowScale{ 0 };
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::PHANTOM_PARAM_ST) == 56,
    "PHANTOM_PARAM_ST paramdef size does not match detected size");
