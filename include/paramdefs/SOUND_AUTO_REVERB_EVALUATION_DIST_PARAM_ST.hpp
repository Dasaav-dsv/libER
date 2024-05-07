/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct SOUND_AUTO_REVERB_EVALUATION_DIST_PARAM_ST {
    float NoHitDist{ -1 };
    bool isCollectNoHitPoint{ false };
    bool isCollectOutdoorPoint{ false };
    bool isCollectFloorPoint{ false };
    unsigned char distValCalcType{ 0 };
    float enableLifeTime{ -1 };
    unsigned int maxDistRecordNum{ 20 };
    unsigned int ignoreDistNumForMax{ 0 };
};

}; // namespace paramdefs
}; // namespace from

static_assert(
    sizeof(from::paramdefs::SOUND_AUTO_REVERB_EVALUATION_DIST_PARAM_ST) == 20,
    "SOUND_AUTO_REVERB_EVALUATION_DIST_PARAM_ST paramdef size does not match "
    "detected size");
