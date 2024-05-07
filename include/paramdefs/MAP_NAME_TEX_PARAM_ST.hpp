/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct MAP_NAME_TEX_PARAM_ST {
    bool disableParam_NT : 1 { false };
    unsigned char disableParamReserve1 : 7;
    unsigned char disableParamReserve2[3];
    unsigned char srcR{ 0 };
    unsigned char srcG{ 0 };
    unsigned char srcB{ 0 };
    unsigned char pad1[1];
    int mapNameId{ 0 };
    unsigned char pad2[4];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::MAP_NAME_TEX_PARAM_ST) == 16,
    "MAP_NAME_TEX_PARAM_ST paramdef size does not match detected size");
