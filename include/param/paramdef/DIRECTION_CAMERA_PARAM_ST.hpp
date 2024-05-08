/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct DIRECTION_CAMERA_PARAM_ST {
    bool isUseOption : 1 { false };
    unsigned char pad2 : 3;
    unsigned char pad1[15];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::DIRECTION_CAMERA_PARAM_ST) == 16,
    "DIRECTION_CAMERA_PARAM_ST paramdef size does not match detected size");
