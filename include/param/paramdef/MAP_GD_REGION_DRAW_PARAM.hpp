/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct MAP_GD_REGION_DRAW_PARAM {
    bool disableParam_NT : 1 { false };
    unsigned char disableParamReserve1 : 7;
    unsigned char disableParamReserve2[3];
    float overrideIVLocalLightScale{ -1 };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::MAP_GD_REGION_DRAW_PARAM) == 8,
    "MAP_GD_REGION_DRAW_PARAM paramdef size does not match detected size");
