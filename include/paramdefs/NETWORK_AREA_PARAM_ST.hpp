/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct NETWORK_AREA_PARAM_ST {
    float cellSizeX{ 30 };
    float cellSizeY{ 8 };
    float cellSizeZ{ 30 };
    float cellOffsetX{ 0 };
    float cellOffsetY{ 0 };
    float cellOffsetZ{ 0 };
    bool enableBloodstain : 1 { false };
    bool enableBloodMessage : 1 { false };
    bool enableGhost : 1 { false };
    bool enableMultiPlay : 1 { false };
    bool enableRingSearch : 1 { false };
    bool enableBreakInSearch : 1 { false };
    unsigned char dummy[3];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::NETWORK_AREA_PARAM_ST) == 28,
    "NETWORK_AREA_PARAM_ST paramdef size does not match detected size");
