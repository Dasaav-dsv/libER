/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct GESTURE_PARAM_ST {
    bool disableParam_NT : 1 { false };
    unsigned char disableParamReserve1 : 7;
    unsigned char disableParamReserve2[3];
    int itemId{ 0 };
    int msgAnimId{ 0 };
    bool cannotUseRiding : 1 { false };
    unsigned char pad2 : 7;
    unsigned char pad1[3];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::GESTURE_PARAM_ST) == 16,
    "GESTURE_PARAM_ST paramdef size does not match detected size");
