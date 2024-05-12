/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct SOUND_AUTO_ENV_SOUND_GROUP_PARAM_ST {
    /**
     * @brief Sound No
     *
     * Sound No to play (sound type is fixed to a)
     */
    int SoundNo{ -1 };

    /**
     * @brief Judgment extended distance
     *
     * Extended distance of playback judgment area
     */
    float ExpandRange{ 100.f };

    /**
     * @brief Sound source tracking speed
     *
     * Follow-up speed (fixed speed) to the target position of the actual sound
     * source
     */
    float FollowSpeed{ 0.1f };

    /**
     * @brief Sound source follow-up rate
     *
     * Follow-up speed (difference ratio) to the target position of the actual
     * sound source
     */
    float FollowRate{ 0.015f };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::SOUND_AUTO_ENV_SOUND_GROUP_PARAM_ST) == 16,
    "SOUND_AUTO_ENV_SOUND_GROUP_PARAM_ST paramdef size does not match detected "
    "size");
