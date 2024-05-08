/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct MENU_PARAM_COLOR_TABLE_ST {
    unsigned char lerpMode{ 0 };
    unsigned char pad1[3];
    unsigned short h{ 0 };
    unsigned char pad2[2];
    float s1{ 1 };
    float v1{ 1 };
    float s2{ 1 };
    float v2{ 1 };
    float s3{ 1 };
    float v3{ 1 };
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::MENU_PARAM_COLOR_TABLE_ST) == 32,
    "MENU_PARAM_COLOR_TABLE_ST paramdef size does not match detected size");
