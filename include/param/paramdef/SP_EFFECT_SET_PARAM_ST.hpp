/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct SP_EFFECT_SET_PARAM_ST {
    /**
     * @brief Special effect ID1
     */
    int spEffectId1{ -1 };

    /**
     * @brief Special effect ID2
     */
    int spEffectId2{ -1 };

    /**
     * @brief Special effect ID3
     */
    int spEffectId3{ -1 };

    /**
     * @brief Special effect ID4
     */
    int spEffectId4{ -1 };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::SP_EFFECT_SET_PARAM_ST) == 16,
    "SP_EFFECT_SET_PARAM_ST paramdef size does not match detected size");
