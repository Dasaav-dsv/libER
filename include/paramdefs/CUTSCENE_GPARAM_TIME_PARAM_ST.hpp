/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct CUTSCENE_GPARAM_TIME_PARAM_ST {
    bool disableParam_NT : 1 { false };
    bool disableParam_Debug : 1 { false };
    unsigned char disableParamReserve1 : 6;
    unsigned char disableParamReserve2[3];
    unsigned char DstTimezone_Morning{ 0 };
    unsigned char DstTimezone_Noon{ 0 };
    unsigned char DstTimezone_AfterNoon{ 0 };
    unsigned char DstTimezone_Evening{ 0 };
    unsigned char DstTimezone_Night{ 0 };
    unsigned char DstTimezone_DeepNightA{ 0 };
    unsigned char DstTimezone_DeepNightB{ 0 };
    unsigned char reserved[1];
    float PostPlayIngameTime{ -1 };
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::CUTSCENE_GPARAM_TIME_PARAM_ST) == 16,
    "CUTSCENE_GPARAM_TIME_PARAM_ST paramdef size does not match detected size");
