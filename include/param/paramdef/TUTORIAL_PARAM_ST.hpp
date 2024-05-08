/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct TUTORIAL_PARAM_ST {
    bool disableParam_NT : 1 { false };
    unsigned char disableParamReserve1 : 7;
    unsigned char disableParamReserve2[3];
    unsigned char menuType{ 0 };
    unsigned char triggerType{ 0 };
    unsigned char repeatType{ 0 };
    unsigned char pad1[1];
    unsigned short imageId{ 0 };
    unsigned char pad2[2];
    unsigned int unlockEventFlagId{ 0 };
    int textId{ -1 };
    float displayMinTime{ 1 };
    float displayTime{ 3 };
    unsigned char pad3[4];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::TUTORIAL_PARAM_ST) == 32,
    "TUTORIAL_PARAM_ST paramdef size does not match detected size");
