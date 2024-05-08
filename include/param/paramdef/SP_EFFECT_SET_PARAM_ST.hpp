/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct SP_EFFECT_SET_PARAM_ST {
    int spEffectId1{ -1 };
    int spEffectId2{ -1 };
    int spEffectId3{ -1 };
    int spEffectId4{ -1 };
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::SP_EFFECT_SET_PARAM_ST) == 16,
    "SP_EFFECT_SET_PARAM_ST paramdef size does not match detected size");
