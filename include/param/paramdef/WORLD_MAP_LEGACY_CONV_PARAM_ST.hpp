/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct WORLD_MAP_LEGACY_CONV_PARAM_ST {
    bool disableParam_NT : 1 { false };
    unsigned char disableParamReserve1 : 7;
    unsigned char disableParamReserve2[3];
    unsigned char srcAreaNo{ 0 };
    unsigned char srcGridXNo{ 0 };
    unsigned char srcGridZNo{ 0 };
    unsigned char pad1[1];
    float srcPosX{ 0 };
    float srcPosY{ 0 };
    float srcPosZ{ 0 };
    unsigned char dstAreaNo{ 0 };
    unsigned char dstGridXNo{ 0 };
    unsigned char dstGridZNo{ 0 };
    unsigned char pad2[1];
    float dstPosX{ 0 };
    float dstPosY{ 0 };
    float dstPosZ{ 0 };
    bool isBasePoint : 1 { false };
    unsigned char pad3 : 7;
    unsigned char pad4[11];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::WORLD_MAP_LEGACY_CONV_PARAM_ST) == 48,
    "WORLD_MAP_LEGACY_CONV_PARAM_ST paramdef size does not match detected "
    "size");
