/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct BEHAVIOR_PARAM_ST {
    int variationId{ 0 };
    int behaviorJudgeId{ 0 };
    unsigned char ezStateBehaviorType_old{ 0 };
    unsigned char refType{ 0 };
    unsigned char pad2[2];
    int refId{ -1 };
    float consumeSA{ 0 };
    int stamina{ 0 };
    int consumeDurability{ 0 };
    unsigned char category{ 0 };
    unsigned char heroPoint{ 0 };
    unsigned char pad1[2];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::BEHAVIOR_PARAM_ST) == 32,
    "BEHAVIOR_PARAM_ST paramdef size does not match detected size");
