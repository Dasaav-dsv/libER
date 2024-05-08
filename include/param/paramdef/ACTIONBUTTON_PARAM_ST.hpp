/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct ACTIONBUTTON_PARAM_ST {
    unsigned char regionType{ 0 };
    unsigned char category{ 0 };
    unsigned char padding1[2];
    int dummyPoly1{ -1 };
    int dummyPoly2{ -1 };
    float radius{ 0 };
    int angle{ 180 };
    float depth{ 0 };
    float width{ 0 };
    float height{ 0 };
    float baseHeightOffset{ 0 };
    unsigned char angleCheckType{ 0 };
    unsigned char padding2[3];
    int allowAngle{ 180 };
    int spotDummyPoly{ -1 };
    unsigned char textBoxType{ 0 };
    unsigned char padding3[2];
    unsigned char padding5 : 1;
    bool isInvalidForRide : 1 { false };
    bool isGrayoutForRide : 1 { false };
    bool isInvalidForCrouching : 1 { false };
    bool isGrayoutForCrouching : 1 { false };
    unsigned char padding4 : 3;
    int textId{ -1 };
    unsigned int invalidFlag{ 0 };
    unsigned int grayoutFlag{ 0 };
    int overrideActionButtonIdForRide{ -1 };
    float execInvalidTime{ 0 };
    unsigned char padding6[28];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::ACTIONBUTTON_PARAM_ST) == 100,
    "ACTIONBUTTON_PARAM_ST paramdef size does not match detected size");
