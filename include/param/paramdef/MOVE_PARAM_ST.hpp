/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct MOVE_PARAM_ST {
    /**
     * @brief stand-by
     */
    int stayId{ -1 };

    /**
     * @brief Before walking
     */
    int walkF{ -1 };

    /**
     * @brief After walking
     */
    int walkB{ -1 };

    /**
     * @brief Walking left
     */
    int walkL{ -1 };

    /**
     * @brief Walking right
     */
    int walkR{ -1 };

    /**
     * @brief Before driving
     */
    int dashF{ -1 };

    /**
     * @brief After running
     */
    int dashB{ -1 };

    /**
     * @brief Driving left
     */
    int dashL{ -1 };

    /**
     * @brief Driving right
     */
    int dashR{ -1 };

    /**
     * @brief Dash move
     */
    int superDash{ -1 };

    /**
     * @brief Before emergency avoidance
     */
    int escapeF{ -1 };

    /**
     * @brief After emergency avoidance
     */
    int escapeB{ -1 };

    /**
     * @brief Emergency avoidance left
     */
    int escapeL{ -1 };

    /**
     * @brief Emergency avoidance right
     */
    int escapeR{ -1 };

    /**
     * @brief 90 degree turn left
     */
    int turnL{ -1 };

    /**
     * @brief 90 degree turn right
     */
    int trunR{ -1 };

    /**
     * @brief 180 degree turn left
     */
    int largeTurnL{ -1 };

    /**
     * @brief 180 degree turn right
     */
    int largeTurnR{ -1 };

    /**
     * @brief Step move
     *
     * 180 degree turn right
     */
    int stepMove{ -1 };

    /**
     * @brief Flight standby
     */
    int flyStay{ -1 };

    /**
     * @brief Flight advance
     */
    int flyWalkF{ -1 };

    /**
     * @brief Fly left forward
     *
     * Fly left forward. Low rotation
     */
    int flyWalkFL{ -1 };

    /**
     * @brief Flight right forward
     *
     * Fly right forward. Low rotation
     */
    int flyWalkFR{ -1 };

    /**
     * @brief Flight left forward 2
     *
     * Flight left forward 2. High rotation
     */
    int flyWalkFL2{ -1 };

    /**
     * @brief Flight right forward 2
     *
     * Flight right forward 2. High rotation
     */
    int flyWalkFR2{ -1 };

    /**
     * @brief High speed flight advance
     */
    int flyDashF{ -1 };

    /**
     * @brief High speed flight left forward
     *
     * High-speed flight left forward. Low rotation
     */
    int flyDashFL{ -1 };

    /**
     * @brief High speed flight right forward
     *
     * High speed flight right forward. Low rotation
     */
    int flyDashFR{ -1 };

    /**
     * @brief High speed flight left forward 2
     *
     * High speed flight left forward 2. High rotation
     */
    int flyDashFL2{ -1 };

    /**
     * @brief High speed flight right forward 2
     *
     * High speed flight right forward 2. High rotation
     */
    int flyDashFR2{ -1 };

    /**
     * @brief Before dash emergency avoidance
     */
    int dashEscapeF{ -1 };

    /**
     * @brief After dash emergency avoidance
     */
    int dashEscapeB{ -1 };

    /**
     * @brief Dash emergency avoidance left
     */
    int dashEscapeL{ -1 };

    /**
     * @brief Dash emergency avoidance right
     */
    int dashEscapeR{ -1 };

    /**
     * @brief Analog moving para ID
     *
     * Mobile animation parameter ID used in mobile animation blend
     */
    int analogMoveParamId{ -1 };

    /**
     * @brief No animation turning angle [deg]
     *
     * If the turning angle is less than this value, the turning animation will
     * not be played (only the enemy turning control is effective).
     */
    unsigned char turnNoAnimAngle{ 0 };

    /**
     * @brief 45 degree turning animation angle [deg]
     *
     * If the turning angle is less than this value, the 45 degree turning
     * animation will be played (only 2 bosses are valid).
     */
    unsigned char turn45Angle{ 0 };

    /**
     * @brief 90 degree turning animation angle [deg]
     *
     * If the turning angle is less than this value, the 90 degree turning
     * animation will be played (only the enemy turning control is effective).
     */
    unsigned char turn90Angle{ 0 };

    /**
     * @brief No animation when stopped Turning angle [deg]
     *
     * If the turning angle is less than this value, the turning animation will
     * not be played [when stopped] (only valid for 2 boss legs)
     */
    unsigned char turnWaitNoAnimAngle{ 0 };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::MOVE_PARAM_ST) == 144,
    "MOVE_PARAM_ST paramdef size does not match detected size");
