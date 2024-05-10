/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct FE_TEXT_EFFECT_PARAM_ST {
    short resId{ 0 };
    unsigned char pad1[2];
    int textId{ -1 };
    int seId{ -1 };
    bool canMixMapName : 1 { false };
    unsigned char pad3 : 7;
    unsigned char pad2[19];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::FE_TEXT_EFFECT_PARAM_ST) == 32,
    "FE_TEXT_EFFECT_PARAM_ST paramdef size does not match detected size");
