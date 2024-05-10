/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct WWISE_VALUE_TO_STR_CONVERT_PARAM_ST {
    bool disableParam_NT : 1 { false };
    unsigned char disableParamReserve1 : 7;
    unsigned char disableParamReserve2[3];
    char ParamStr[32];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::WWISE_VALUE_TO_STR_CONVERT_PARAM_ST)
                  == 36,
    "WWISE_VALUE_TO_STR_CONVERT_PARAM_ST paramdef size does not match detected "
    "size");
