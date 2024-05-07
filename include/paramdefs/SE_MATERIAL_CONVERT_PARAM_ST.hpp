/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct SE_MATERIAL_CONVERT_PARAM_ST {
    unsigned char seMaterialId{ 0 };
    unsigned char pad[3];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::SE_MATERIAL_CONVERT_PARAM_ST) == 4,
    "SE_MATERIAL_CONVERT_PARAM_ST paramdef size does not match detected size");
