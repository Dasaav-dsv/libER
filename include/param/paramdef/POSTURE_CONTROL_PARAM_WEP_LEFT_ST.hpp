/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct POSTURE_CONTROL_PARAM_WEP_LEFT_ST {
    short a000_leftArmFB{ 0 };
    short a000_leftWristFB{ 0 };
    short a000_leftWristIO{ 0 };
    short a002_leftArmFB{ 0 };
    short a002_leftWristFB{ 0 };
    short a002_leftWristIO{ 0 };
    short a003_leftArmFB{ 0 };
    short a003_leftWristFB{ 0 };
    short a003_leftWristIO{ 0 };
    unsigned char pad[14];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::POSTURE_CONTROL_PARAM_WEP_LEFT_ST) == 32,
    "POSTURE_CONTROL_PARAM_WEP_LEFT_ST paramdef size does not match detected "
    "size");
