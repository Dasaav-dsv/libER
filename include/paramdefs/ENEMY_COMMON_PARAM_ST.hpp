/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct ENEMY_COMMON_PARAM_ST {
    unsigned char reserved0[8];
    int soundTargetTryApproachTime{ 0 };
    int searchTargetTryApproachTime{ 0 };
    int memoryTargetTryApproachTime{ 0 };
    unsigned char reserved5[40];
    int activateChrByTime_PhantomId{ 0 };
    float findUnfavorableFailedPointDist{ 0 };
    float findUnfavorableFailedPointHeight{ 0 };
    unsigned char reserved18[184];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::ENEMY_COMMON_PARAM_ST) == 256,
    "ENEMY_COMMON_PARAM_ST paramdef size does not match detected size");
