/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct BONFIRE_WARP_SUB_CATEGORY_PARAM_ST {
    bool disableParam_NT : 1 { false };
    unsigned char disableParamReserve1 : 7;
    unsigned char disableParamReserve2[3];
    int textId{ 0 };
    unsigned short tabId{ 0 };
    unsigned short sortId{ 0 };
    unsigned char pad[4];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::BONFIRE_WARP_SUB_CATEGORY_PARAM_ST) == 16,
    "BONFIRE_WARP_SUB_CATEGORY_PARAM_ST paramdef size does not match detected "
    "size");
