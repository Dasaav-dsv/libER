/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct WORLD_MAP_PIECE_PARAM_ST {
    bool disableParam_NT : 1 { false };
    unsigned char disableParamReserve1 : 7;
    unsigned char disableParamReserve2[3];
    unsigned int openEventFlagId{ 0 };
    float openTravelAreaLeft{ 0 };
    float openTravelAreaRight{ 0 };
    float openTravelAreaTop{ 0 };
    float openTravelAreaBottom{ 0 };
    unsigned int acquisitionEventFlagId{ 0 };
    float acquisitionEventScale{ 1 };
    float acquisitionEventCenterX{ 0 };
    float acquisitionEventCenterY{ 0 };
    float acquisitionEventResScale{ 1 };
    float acquisitionEventResOffsetX{ 0 };
    float acquisitionEventResOffsetY{ 0 };
    unsigned char pad[12];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::WORLD_MAP_PIECE_PARAM_ST) == 64,
    "WORLD_MAP_PIECE_PARAM_ST paramdef size does not match detected size");
