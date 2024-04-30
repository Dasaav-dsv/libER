/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct MAP_GRID_CREATE_HEIGHT_LIMIT_INFO_PARAM_ST {
    float GridEnableCreateHeightMin{ -99999 };
    float GridEnableCreateHeightMax{ 99999 };
    unsigned char Reserve[24];
};

}; // namespace paramdefs
}; // namespace from

static_assert(
    sizeof(from::paramdefs::MAP_GRID_CREATE_HEIGHT_LIMIT_INFO_PARAM_ST) == 32,
    "MAP_GRID_CREATE_HEIGHT_LIMIT_INFO_PARAM_ST paramdef size does not match "
    "detected size");
