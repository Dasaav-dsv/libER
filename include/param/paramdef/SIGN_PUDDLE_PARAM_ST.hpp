/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct SIGN_PUDDLE_PARAM_ST {
    bool disableParam_NT : 1 { false };
    unsigned char disableParamReserve1 : 7;
    unsigned char disableParamReserve2[3];
    int matchAreaId{ 0 };
    unsigned char pad1[24];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::SIGN_PUDDLE_PARAM_ST) == 32,
    "SIGN_PUDDLE_PARAM_ST paramdef size does not match detected size");
