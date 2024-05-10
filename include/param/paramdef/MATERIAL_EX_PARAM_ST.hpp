/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct MATERIAL_EX_PARAM_ST {
    wchar_t paramName[32];
    int materialId{ -1 };
    float materialParamValue0{ 0 };
    float materialParamValue1{ 0 };
    float materialParamValue2{ 0 };
    float materialParamValue3{ 0 };
    float materialParamValue4{ 1 };
    unsigned char pad[8];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::MATERIAL_EX_PARAM_ST) == 96,
    "MATERIAL_EX_PARAM_ST paramdef size does not match detected size");
