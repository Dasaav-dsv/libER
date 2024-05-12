/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct SOUND_AUTO_REVERB_SELECT_PARAM_ST {
    /**
     * @brief Reverb type
     */
    unsigned int reverbType{ 0 };

    /**
     * @brief Area No
     *
     * Condition: Area No. (-1: Invalid)
     */
    int AreaNo{ -1 };

    /**
     * @brief Indoor and outdoor
     *
     * Condition: Indoor / outdoor designation (0: outdoor, 1: indoor) (-1:
     * invalid)
     */
    signed char IndoorOutdoor{ -1 };

    /**
     * @brief Evaluation distance number A
     *
     * Condition: Evaluation distance number A to use (-1: invalid)
     */
    signed char useDistNoA{ -1 };

    /**
     * @brief Evaluation distance number B
     *
     * Condition: Evaluation distance number B to be used (-1: invalid)
     */
    signed char useDistNoB{ -1 };

    unsigned char pad0[1];

    /**
     * @brief Distance MinA [m]
     *
     * Condition: For evaluation distance minimum specification A (less than 0:
     * invalid)
     */
    float DistMinA{ -1.f };

    /**
     * @brief Distance MaxA [m]
     *
     * Condition: For evaluation distance maximum specification A (less than 0:
     * invalid)
     */
    float DistMaxA{ -1.f };

    /**
     * @brief Distance MinB [m]
     *
     * Condition: For evaluation distance minimum specification A (less than 0:
     * invalid)
     */
    float DistMinB{ -1.f };

    /**
     * @brief Distance MaxB [m]
     *
     * Condition: For evaluation distance maximum specification A (less than 0:
     * invalid)
     */
    float DistMaxB{ -1.f };

    /**
     * @brief Minimum number of collision points No Hits
     *
     * Condition: No Hit number (-1: invalid)
     */
    int NoHitNumMin{ -1 };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::SOUND_AUTO_REVERB_SELECT_PARAM_ST) == 32,
    "SOUND_AUTO_REVERB_SELECT_PARAM_ST paramdef size does not match detected "
    "size");
