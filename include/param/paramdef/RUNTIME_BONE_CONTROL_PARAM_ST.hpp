/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct RUNTIME_BONE_CONTROL_PARAM_ST {
    unsigned int chrId{ 0 };
    unsigned char ctrlType{ 0 };
    unsigned char pad[11];
    char applyBone[32];
    char targetBone1[32];
    char targetBone2[32];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::RUNTIME_BONE_CONTROL_PARAM_ST) == 112,
    "RUNTIME_BONE_CONTROL_PARAM_ST paramdef size does not match detected size");
