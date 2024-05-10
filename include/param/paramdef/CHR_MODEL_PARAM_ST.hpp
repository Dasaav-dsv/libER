/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct CHR_MODEL_PARAM_ST {
    bool disableParam_NT : 1 { false };
    unsigned char disableParamReserve1 : 7;
    unsigned char disableParamReserve2[3];
    unsigned char modelMemoryType{ 0 };
    unsigned char texMemoryType{ 0 };
    short cameraDitherFadeId{ 0 };
    float reportAnimMemSizeMb{ 12 };
    unsigned int unk{ 0 };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::CHR_MODEL_PARAM_ST) == 16,
    "CHR_MODEL_PARAM_ST paramdef size does not match detected size");
