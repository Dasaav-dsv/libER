/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct CACL_CORRECT_GRAPH_ST {
    /**
     * @brief Threshold point 0
     *
     * Those with "nth threshold [point]" written in the specifications
     */
    float stageMaxVal0{ 0.f };

    /**
     * @brief Threshold point 1
     *
     * Those with "nth threshold [point]" written in the specifications
     */
    float stageMaxVal1{ 0.f };

    /**
     * @brief Threshold point 2
     *
     * Those with "nth threshold [point]" written in the specifications
     */
    float stageMaxVal2{ 0.f };

    /**
     * @brief Threshold point 3
     *
     * Those with "nth threshold [point]" written in the specifications
     */
    float stageMaxVal3{ 0.f };

    /**
     * @brief Threshold point 4
     *
     * Those with "nth threshold [point]" written in the specifications
     */
    float stageMaxVal4{ 0.f };

    /**
     * @brief Threshold coefficient 0
     *
     * Those with "nth threshold [coefficient]" written in the specifications
     */
    float stageMaxGrowVal0{ 0.f };

    /**
     * @brief Threshold coefficient 1
     *
     * Those with "nth threshold [coefficient]" written in the specifications
     */
    float stageMaxGrowVal1{ 0.f };

    /**
     * @brief Threshold coefficient 2
     *
     * Those with "nth threshold [coefficient]" written in the specifications
     */
    float stageMaxGrowVal2{ 0.f };

    /**
     * @brief Threshold coefficient 3
     *
     * Those with "nth threshold [coefficient]" written in the specifications
     */
    float stageMaxGrowVal3{ 0.f };

    /**
     * @brief Threshold coefficient 4
     *
     * Those with "nth threshold [coefficient]" written in the specifications
     */
    float stageMaxGrowVal4{ 0.f };

    /**
     * @brief Adjustment factor 0
     *
     * Adjustment factor
     */
    float adjPt_maxGrowVal0{ 0.f };

    /**
     * @brief Adjustment factor 1
     *
     * Adjustment factor
     */
    float adjPt_maxGrowVal1{ 0.f };

    /**
     * @brief Adjustment factor 2
     *
     * Adjustment factor
     */
    float adjPt_maxGrowVal2{ 0.f };

    /**
     * @brief Adjustment factor 3
     *
     * Adjustment factor
     */
    float adjPt_maxGrowVal3{ 0.f };

    /**
     * @brief Adjustment factor 4
     *
     * Adjustment factor
     */
    float adjPt_maxGrowVal4{ 0.f };

    /**
     * @brief Growth Soul Slope of the early graph α1
     */
    float init_inclination_soul{ 0.f };

    /**
     * @brief Growth soul Early soul adjustment α2
     */
    float adjustment_value{ 0.f };

    /**
     * @brief Affects the slope of the graph after the growth soul threshold α3
     */
    float boundry_inclination_soul{ 0.f };

    /**
     * @brief Growth soul threshold t
     */
    float boundry_value{ 0.f };

    unsigned char pad[4];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::CACL_CORRECT_GRAPH_ST) == 80,
    "CACL_CORRECT_GRAPH_ST paramdef size does not match detected size");
