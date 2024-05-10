/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct SP_EFFECT_SET_PARAM_ST {
    int spEffectId1{ -1 };
    int spEffectId2{ -1 };
    int spEffectId3{ -1 };
    int spEffectId4{ -1 };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::SP_EFFECT_SET_PARAM_ST) == 16,
    "SP_EFFECT_SET_PARAM_ST paramdef size does not match detected size");
