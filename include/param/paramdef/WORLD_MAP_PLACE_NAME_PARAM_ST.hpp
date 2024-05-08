/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct WORLD_MAP_PLACE_NAME_PARAM_ST {
    bool disableParam_NT : 1 { false };
    unsigned char disableParamReserve1 : 7;
    unsigned char disableParamReserve2[3];
    int worldMapPieceId{ -1 };
    int textId{ -1 };
    unsigned char pad1[4];
    unsigned char areaNo{ 0 };
    unsigned char gridXNo{ 0 };
    unsigned char gridZNo{ 0 };
    unsigned char pad2[1];
    float posX{ 0 };
    float posY{ 0 };
    float posZ{ 0 };
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::WORLD_MAP_PLACE_NAME_PARAM_ST) == 32,
    "WORLD_MAP_PLACE_NAME_PARAM_ST paramdef size does not match detected size");
