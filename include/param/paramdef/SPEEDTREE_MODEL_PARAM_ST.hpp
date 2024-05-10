/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct SPEEDTREE_MODEL_PARAM_ST {
    float MinFadeLeaf{ 0 };
    float MinFadeFrond{ 0 };
    float MinFadeBranch{ 0 };
    float MinTranslucencyLeaf{ 0 };
    float MaxTranslucencyLeaf{ 5 };
    float MinTranslucencyFrond{ 0 };
    float MaxTranslucencyFrond{ 5 };
    float MinTranslucencyBranch{ 0 };
    float MaxTranslucencyBranch{ 5 };
    float BillboardBackSpecularWeakenParam{ 1 };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::SPEEDTREE_MODEL_PARAM_ST) == 40,
    "SPEEDTREE_MODEL_PARAM_ST paramdef size does not match detected size");
