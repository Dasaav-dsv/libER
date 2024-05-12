/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct WORLD_MAP_PIECE_PARAM_ST {
    /**
     * @brief Do you remove it from the NT version output?
     *
     * Parameters marked with ○ are excluded in the NT version package.
     */
    bool disableParam_NT : 1 { false };

    /**
     * @brief Reserve for package output 1
     */
    unsigned char disableParamReserve1 : 7;

    /**
     * @brief Reserve for package output 2
     */
    unsigned char disableParamReserve2[3];

    /**
     * @brief Open event flag ID
     *
     * Event flag ID of open condition
     */
    unsigned int openEventFlagId{ 0 };

    /**
     * @brief Opened traversal area: Xmin
     *
     * Coordinates of the traversal area that expands when opened (Xmin)
     */
    float openTravelAreaLeft{ 0.f };

    /**
     * @brief Opened traversal area: Xmax
     *
     * Coordinates of the traversal area that expands when opened (Xmax)
     */
    float openTravelAreaRight{ 0.f };

    /**
     * @brief Opened traversal area: Ymin
     *
     * Coordinates of the traversal area that expands when opened (Ymin)
     */
    float openTravelAreaTop{ 0.f };

    /**
     * @brief Opened traversal area: Ymax
     *
     * Coordinates of the traversal area that expands when opened (Ymax)
     */
    float openTravelAreaBottom{ 0.f };

    /**
     * @brief Acquisition production event flag ID
     *
     * Event flag ID of the acquisition production start condition. Assuming
     * that only one of the map fragments is On
     */
    unsigned int acquisitionEventFlagId{ 0 };

    /**
     * @brief Acquisition effect: Display magnification
     *
     * Display magnification at the time of acquisition production
     */
    float acquisitionEventScale{ 1.f };

    /**
     * @brief Obtained production: Center coordinates X
     *
     * Center coordinates (X) at the time of acquisition production
     */
    float acquisitionEventCenterX{ 0.f };

    /**
     * @brief Obtained production: Center coordinates Y
     *
     * For the central seat at the time of acquisition production (Y)
     */
    float acquisitionEventCenterY{ 0.f };

    /**
     * @brief Acquisition effect: Resource multiplier
     *
     * Display magnification of blindfold resources for acquisition production
     */
    float acquisitionEventResScale{ 1.f };

    /**
     * @brief Acquisition effect: Resource offset X
     *
     * Display position offset (X) of blindfold resource for acquisition
     * production
     */
    float acquisitionEventResOffsetX{ 0.f };

    /**
     * @brief Acquisition effect: Resource offset Y
     *
     * Offset of display position of blindfold resource for acquisition
     * production (Y)
     */
    float acquisitionEventResOffsetY{ 0.f };

    unsigned char pad[12];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::WORLD_MAP_PIECE_PARAM_ST) == 64,
    "WORLD_MAP_PIECE_PARAM_ST paramdef size does not match detected size");
