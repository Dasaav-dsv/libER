/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct FINAL_DAMAGE_RATE_PARAM_ST {
    float physRate{ 0 };
    float magRate{ 0 };
    float fireRate{ 0 };
    float thunRate{ 0 };
    float darkRate{ 0 };
    float staminaRate{ 0 };
    float saRate{ 0 };
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::FINAL_DAMAGE_RATE_PARAM_ST) == 28,
    "FINAL_DAMAGE_RATE_PARAM_ST paramdef size does not match detected size");
