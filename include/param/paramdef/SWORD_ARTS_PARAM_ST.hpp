/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct SWORD_ARTS_PARAM_ST {
    bool disableParam_NT : 1 { false };
    unsigned char disableParamReserve1 : 7;
    unsigned char disableParamReserve2[3];
    unsigned char swordArtsType{ 0 };
    unsigned char artsSpeedType{ 0 };
    signed char refStatus{ 0 };
    bool isRefRightArts : 1 { false };
    bool isGrayoutLeftHand : 1 { false };
    bool isGrayoutRightHand : 1 { false };
    bool isGrayoutBothHand : 1 { false };
    unsigned char reserve2 : 4;
    signed char usePoint_L1{ 0 };
    signed char usePoint_L2{ 0 };
    signed char usePoint_R1{ 0 };
    signed char usePoint_R2{ 0 };
    int textId{ 0 };
    short useMagicPoint_L1{ 0 };
    short useMagicPoint_L2{ 0 };
    short useMagicPoint_R1{ 0 };
    short useMagicPoint_R2{ 0 };
    unsigned char swordArtsTypeNew{ 0 };
    unsigned char pad[1];
    unsigned short iconId{ 0 };
    int aiUsageId{ -1 };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::SWORD_ARTS_PARAM_ST) == 32,
    "SWORD_ARTS_PARAM_ST paramdef size does not match detected size");
