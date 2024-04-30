/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct BUDDY_STONE_PARAM_ST {
    bool disableParam_NT : 1 { false };
    unsigned char disableParamReserve1 : 7;
    unsigned char disableParamReserve2[3];
    unsigned int talkChrEntityId{ 0 };
    unsigned int eliminateTargetEntityId{ 0 };
    unsigned int summonedEventFlagId{ 0 };
    bool isSpecial : 1 { false };
    unsigned char pad1 : 7;
    unsigned char pad2[3];
    int buddyId{ 0 };
    int dopingSpEffectId{ -1 };
    unsigned short activateRange{ 100 };
    short overwriteReturnRange{ -1 };
    unsigned int overwriteActivateRegionEntityId{ 0 };
    unsigned int warnRegionEntityId{ 0 };
    unsigned char pad3[24];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::BUDDY_STONE_PARAM_ST) == 64,
    "BUDDY_STONE_PARAM_ST paramdef size does not match detected size");
