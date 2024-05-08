/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct WEATHER_ASSET_REPLACE_PARAM_ST {
    unsigned int mapId{ 0 };
    short TransitionSrcWeather{ 0 };
    unsigned char padding0[2];
    bool isFireAsh{ false };
    unsigned char padding1[3];
    unsigned int reserved2{ 0 };
    int AssetId0{ -1 };
    int AssetId1{ -1 };
    int AssetId2{ -1 };
    int AssetId3{ -1 };
    int AssetId4{ -1 };
    int AssetId5{ -1 };
    int AssetId6{ -1 };
    int AssetId7{ -1 };
    unsigned char reserved0[8];
    signed char CreateAssetLimitId0{ -1 };
    signed char CreateAssetLimitId1{ -1 };
    signed char CreateAssetLimitId2{ -1 };
    signed char CreateAssetLimitId3{ -1 };
    unsigned char reserved1[4];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::WEATHER_ASSET_REPLACE_PARAM_ST) == 64,
    "WEATHER_ASSET_REPLACE_PARAM_ST paramdef size does not match detected "
    "size");
