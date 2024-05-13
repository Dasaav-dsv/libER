/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct ENEMY_COMMON_PARAM_ST {
    unsigned char reserved0[8];

    /**
     * @brief Time to try to approach the sound target
     */
    int soundTargetTryApproachTime{ 0 };

    /**
     * @brief Time to try to approach the search target
     */
    int searchTargetTryApproachTime{ 0 };

    /**
     * @brief Time to try to approach the memory target
     */
    int memoryTargetTryApproachTime{ 0 };

    unsigned char reserved5[40];

    /**
     * @brief Phantom shader ID used for directing the appearance and
     * disappearance of enemies placed in a specific time zone
     *
     * Fade the phantom shader with the appearance / disappearance effect,
     */
    int activateChrByTime_PhantomId{ 0 };

    /**
     * @brief Distance to generate an interrupt, which turns out that the enemy
     * is likely to be cut off when going to the end of the path
     *
     * At the time of Unreach pass, if the end and the target are within this
     * distance, an interrupt is generated.
     */
    float findUnfavorableFailedPointDist{ 0.f };

    /**
     * @brief The height that causes an interrupt, which turns out that the
     * enemy is likely to be cut off when going to the end of the path
     *
     * At the time of Unreach pass, if the end and the target are more than this
     * distance, an interrupt is generated.
     */
    float findUnfavorableFailedPointHeight{ 0.f };

    unsigned char reserved18[184];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::ENEMY_COMMON_PARAM_ST) == 256,
    "ENEMY_COMMON_PARAM_ST paramdef size does not match detected size");
