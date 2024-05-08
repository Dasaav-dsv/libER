/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct AUTO_CREATE_ENV_SOUND_PARAM_ST {
    float RangeMin{ 10 };
    float RangeMax{ 25 };
    float LifeTimeMin{ 30 };
    float LifeTimeMax{ 30 };
    float DeleteDist{ 30 };
    float NearDist{ 15 };
    float LimiteRotateMin{ 0 };
    float LimiteRotateMax{ 180 };
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::AUTO_CREATE_ENV_SOUND_PARAM_ST) == 32,
    "AUTO_CREATE_ENV_SOUND_PARAM_ST paramdef size does not match detected "
    "size");
