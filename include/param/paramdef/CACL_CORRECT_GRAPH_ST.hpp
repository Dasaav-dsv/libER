/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct CACL_CORRECT_GRAPH_ST {
    float stageMaxVal0{ 0 };
    float stageMaxVal1{ 0 };
    float stageMaxVal2{ 0 };
    float stageMaxVal3{ 0 };
    float stageMaxVal4{ 0 };
    float stageMaxGrowVal0{ 0 };
    float stageMaxGrowVal1{ 0 };
    float stageMaxGrowVal2{ 0 };
    float stageMaxGrowVal3{ 0 };
    float stageMaxGrowVal4{ 0 };
    float adjPt_maxGrowVal0{ 0 };
    float adjPt_maxGrowVal1{ 0 };
    float adjPt_maxGrowVal2{ 0 };
    float adjPt_maxGrowVal3{ 0 };
    float adjPt_maxGrowVal4{ 0 };
    float init_inclination_soul{ 0 };
    float adjustment_value{ 0 };
    float boundry_inclination_soul{ 0 };
    float boundry_value{ 0 };
    unsigned char pad[4];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::CACL_CORRECT_GRAPH_ST) == 80,
    "CACL_CORRECT_GRAPH_ST paramdef size does not match detected size");
