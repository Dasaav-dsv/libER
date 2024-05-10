/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct MOVE_PARAM_ST {
    int stayId{ -1 };
    int walkF{ -1 };
    int walkB{ -1 };
    int walkL{ -1 };
    int walkR{ -1 };
    int dashF{ -1 };
    int dashB{ -1 };
    int dashL{ -1 };
    int dashR{ -1 };
    int superDash{ -1 };
    int escapeF{ -1 };
    int escapeB{ -1 };
    int escapeL{ -1 };
    int escapeR{ -1 };
    int turnL{ -1 };
    int trunR{ -1 };
    int largeTurnL{ -1 };
    int largeTurnR{ -1 };
    int stepMove{ -1 };
    int flyStay{ -1 };
    int flyWalkF{ -1 };
    int flyWalkFL{ -1 };
    int flyWalkFR{ -1 };
    int flyWalkFL2{ -1 };
    int flyWalkFR2{ -1 };
    int flyDashF{ -1 };
    int flyDashFL{ -1 };
    int flyDashFR{ -1 };
    int flyDashFL2{ -1 };
    int flyDashFR2{ -1 };
    int dashEscapeF{ -1 };
    int dashEscapeB{ -1 };
    int dashEscapeL{ -1 };
    int dashEscapeR{ -1 };
    int analogMoveParamId{ -1 };
    unsigned char turnNoAnimAngle{ 0 };
    unsigned char turn45Angle{ 0 };
    unsigned char turn90Angle{ 0 };
    unsigned char turnWaitNoAnimAngle{ 0 };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::MOVE_PARAM_ST) == 144,
    "MOVE_PARAM_ST paramdef size does not match detected size");
