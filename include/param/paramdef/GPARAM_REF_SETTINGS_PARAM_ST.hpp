/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct GPARAM_REF_SETTINGS_PARAM_ST {
    bool disableParam_NT : 1 { false };
    unsigned char disableParamReserve1 : 7;
    unsigned char disableParamReserve2[3];
    int RefTargetMapId{ -1 };
    unsigned char Reserve[24];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::GPARAM_REF_SETTINGS_PARAM_ST) == 32,
    "GPARAM_REF_SETTINGS_PARAM_ST paramdef size does not match detected size");
