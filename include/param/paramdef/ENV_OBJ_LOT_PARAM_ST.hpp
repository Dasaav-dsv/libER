/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct ENV_OBJ_LOT_PARAM_ST {
    int AssetId_0{ -1 };
    int AssetId_1{ -1 };
    int AssetId_2{ -1 };
    int AssetId_3{ -1 };
    int AssetId_4{ -1 };
    int AssetId_5{ -1 };
    int AssetId_6{ -1 };
    int AssetId_7{ -1 };
    unsigned char CreateWeight_0{ 0 };
    unsigned char CreateWeight_1{ 0 };
    unsigned char CreateWeight_2{ 0 };
    unsigned char CreateWeight_3{ 0 };
    unsigned char CreateWeight_4{ 0 };
    unsigned char CreateWeight_5{ 0 };
    unsigned char CreateWeight_6{ 0 };
    unsigned char CreateWeight_7{ 0 };
    unsigned char Reserve_0[24];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::ENV_OBJ_LOT_PARAM_ST) == 64,
    "ENV_OBJ_LOT_PARAM_ST paramdef size does not match detected size");
