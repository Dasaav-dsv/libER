/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct WHITE_SIGN_COOL_TIME_PARAM_ST {
    float limitationTime_Normal{ 0 };
    float limitationTime_NormalDriedFinger{ 0 };
    float limitationTime_Guardian{ 0 };
    float limitationTime_GuardianDriedFinger{ 0 };
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::WHITE_SIGN_COOL_TIME_PARAM_ST) == 16,
    "WHITE_SIGN_COOL_TIME_PARAM_ST paramdef size does not match detected size");
