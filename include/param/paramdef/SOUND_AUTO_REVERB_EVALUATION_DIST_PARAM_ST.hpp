/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct SOUND_AUTO_REVERB_EVALUATION_DIST_PARAM_ST {
    /**
     * @brief Distance to No Hit [m]
     *
     * Collision points above this distance [m] are judged as No Hit (less than
     * 0: invalid)
     */
    float NoHitDist{ -1.f };

    /**
     * @brief Do you include NoHit collision points?
     */
    bool isCollectNoHitPoint{ false };

    /**
     * @brief Do you include outdoor collision points?
     */
    bool isCollectOutdoorPoint{ false };

    /**
     * @brief Do you include floor collision points?
     */
    bool isCollectFloorPoint{ false };

    /**
     * @brief Evaluation distance calculation type
     *
     * Evaluation distance calculation type (0: normal, average from 1: Max)
     */
    unsigned char distValCalcType{ 0 };

    /**
     * @brief Effective collision point life [seconds]
     *
     * Collision points longer than this life [second] are treated as invalid.
     * Set to be less than or equal to the life of the common setting
     */
    float enableLifeTime{ -1.f };

    /**
     * @brief Max Number of collision point records
     */
    unsigned int maxDistRecordNum{ 20 };

    /**
     * @brief Max distance decimation
     *
     * Max distance decimation number (0: not decimation) (must be set to the
     * value of "Max collision point record number-1". Incorrect value will be
     * corrected)
     */
    unsigned int ignoreDistNumForMax{ 0 };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::SOUND_AUTO_REVERB_EVALUATION_DIST_PARAM_ST)
                  == 20,
    "SOUND_AUTO_REVERB_EVALUATION_DIST_PARAM_ST paramdef size does not match "
    "detected size");
