/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct SOUND_AUTO_ENV_SOUND_GROUP_PARAM_ST {
    int SoundNo{ -1 };
    float ExpandRange{ 100 };
    float FollowSpeed{ 0.1 };
    float FollowRate{ 0.015 };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::SOUND_AUTO_ENV_SOUND_GROUP_PARAM_ST)
                  == 16,
    "SOUND_AUTO_ENV_SOUND_GROUP_PARAM_ST paramdef size does not match detected "
    "size");
