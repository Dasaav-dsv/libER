/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct MAP_GD_REGION_ID_PARAM_ST {
    bool disableParam_NT : 1 { false };
    unsigned char disableParamReserve1 : 7;
    unsigned char disableParamReserve2[3];
    unsigned int mapRegionId{ 0 };
    unsigned char Reserve[24];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::MAP_GD_REGION_ID_PARAM_ST) == 32,
    "MAP_GD_REGION_ID_PARAM_ST paramdef size does not match detected size");
