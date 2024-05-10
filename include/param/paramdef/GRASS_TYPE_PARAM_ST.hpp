/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct GRASS_TYPE_PARAM_ST {
    unsigned short lodRange{ 0 };
    unsigned char lod0ClusterType{ 0 };
    unsigned char lod1ClusterType{ 0 };
    unsigned char lod2ClusterType{ 0 };
    unsigned char pad0[2];
    unsigned char distributionType{ 0 };
    float baseDensity{ 1 };
    wchar_t model0Name[16];
    wchar_t flatTextureName[32];
    wchar_t billboardTextureName[32];
    unsigned char normalInfluence{ 0 };
    unsigned char inclinationMax{ 90 };
    unsigned char inclinationJitter{ 0 };
    unsigned char scaleBaseMin{ 100 };
    unsigned char scaleBaseMax{ 100 };
    unsigned char scaleHeightMin{ 100 };
    unsigned char scaleHeightMax{ 100 };
    unsigned char colorShade1_r{ 255 };
    unsigned char colorShade1_g{ 255 };
    unsigned char colorShade1_b{ 255 };
    unsigned char colorShade2_r{ 255 };
    unsigned char colorShade2_g{ 255 };
    unsigned char colorShade2_b{ 255 };
    unsigned char flatSplitType{ 0 };
    unsigned char flatBladeCount{ 2 };
    signed char flatSlant{ 0 };
    float flatRadius{ 0 };
    unsigned char castShadow{ 1 };
    unsigned char windAmplitude{ 80 };
    unsigned char pad1[1];
    unsigned char windCycle{ 40 };
    float orientationAngle{ -1 };
    float orientationRange{ -1 };
    float spacing{ 0 };
    unsigned char dithering{ 0 };
    unsigned char pad[3];
    wchar_t simpleModelName[16];
    wchar_t model1Name[16];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::GRASS_TYPE_PARAM_ST) == 276,
    "GRASS_TYPE_PARAM_ST paramdef size does not match detected size");
