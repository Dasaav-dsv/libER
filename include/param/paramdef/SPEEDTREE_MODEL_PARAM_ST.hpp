/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct SPEEDTREE_MODEL_PARAM_ST {
    /**
     * @brief Leaf minimum fade value
     */
    float MinFadeLeaf{ 0.f };

    /**
     * @brief Frond minimum fade value
     */
    float MinFadeFrond{ 0.f };

    /**
     * @brief Branch minimum fade value
     */
    float MinFadeBranch{ 0.f };

    /**
     * @brief Minimum transmitted light of Leaf
     */
    float MinTranslucencyLeaf{ 0.f };

    /**
     * @brief Maximum transmitted light of Leaf
     */
    float MaxTranslucencyLeaf{ 5.f };

    /**
     * @brief Minimum transmitted light of Frond
     */
    float MinTranslucencyFrond{ 0.f };

    /**
     * @brief Maximum transmitted light of Frond
     */
    float MaxTranslucencyFrond{ 5.f };

    /**
     * @brief Minimum transmitted light of Branch
     */
    float MinTranslucencyBranch{ 0.f };

    /**
     * @brief Maximum transmitted light of Branch
     */
    float MaxTranslucencyBranch{ 5.f };

    /**
     * @brief Billboard Specular suppression value
     */
    float BillboardBackSpecularWeakenParam{ 1.f };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::SPEEDTREE_MODEL_PARAM_ST) == 40,
    "SPEEDTREE_MODEL_PARAM_ST paramdef size does not match detected size");
