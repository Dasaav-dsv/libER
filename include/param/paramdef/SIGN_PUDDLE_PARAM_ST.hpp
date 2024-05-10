/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct SIGN_PUDDLE_PARAM_ST {
    bool disableParam_NT : 1 { false };
    unsigned char disableParamReserve1 : 7;
    unsigned char disableParamReserve2[3];
    int matchAreaId{ 0 };
    unsigned char pad1[24];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::SIGN_PUDDLE_PARAM_ST) == 32,
    "SIGN_PUDDLE_PARAM_ST paramdef size does not match detected size");
