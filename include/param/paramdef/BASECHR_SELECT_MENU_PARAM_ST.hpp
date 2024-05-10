/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct BASECHR_SELECT_MENU_PARAM_ST {
    bool disableParam_NT : 1 { false };
    unsigned char disableParamReserve1 : 7;
    unsigned char disableParamReserve2[3];
    unsigned int chrInitParam{ 0 };
    unsigned int originChrInitParam{ 0 };
    int imageId{ 0 };
    int textId{ 0 };
    unsigned char reserve[12];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::BASECHR_SELECT_MENU_PARAM_ST) == 32,
    "BASECHR_SELECT_MENU_PARAM_ST paramdef size does not match detected size");
