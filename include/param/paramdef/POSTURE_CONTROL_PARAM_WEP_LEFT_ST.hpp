/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

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

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::POSTURE_CONTROL_PARAM_WEP_LEFT_ST) == 32,
    "POSTURE_CONTROL_PARAM_WEP_LEFT_ST paramdef size does not match detected "
    "size");
