/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct GRASS_LOD_RANGE_PARAM_ST {
    float LOD0_range{ 0 };
    float LOD0_play{ 0 };
    float LOD1_range{ 0 };
    float LOD1_play{ 0 };
    float LOD2_range{ 0 };
    float LOD2_play{ 0 };
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::GRASS_LOD_RANGE_PARAM_ST) == 24,
    "GRASS_LOD_RANGE_PARAM_ST paramdef size does not match detected size");
