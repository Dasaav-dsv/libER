/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct FINAL_DAMAGE_RATE_PARAM_ST {
    float physRate{ 0.f };
    float magRate{ 0.f };
    float fireRate{ 0.f };
    float thunRate{ 0.f };
    float darkRate{ 0.f };
    float staminaRate{ 0.f };
    float saRate{ 0.f };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::FINAL_DAMAGE_RATE_PARAM_ST) == 28,
    "FINAL_DAMAGE_RATE_PARAM_ST paramdef size does not match detected size");
