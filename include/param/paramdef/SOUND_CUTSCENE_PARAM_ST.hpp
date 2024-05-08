/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct SOUND_CUTSCENE_PARAM_ST {
    bool disableParam_NT : 1 { false };
    unsigned char disableParamReserve1 : 7;
    unsigned char disableParamReserve2[3];
    unsigned char ReverbType{ 0 };
    unsigned char pad0[3];
    short BgmBehaviorTypeOnStart{ 0 };
    short OneShotBgmBehaviorOnStart{ 0 };
    int PostPlaySeId{ -1 };
    int PostPlaySeIdForSkip{ -1 };
    float EnterMapMuteStopTimeOnDrawCutscene{ -1 };
    unsigned char reserved[8];
    unsigned char reserved2[4];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::SOUND_CUTSCENE_PARAM_ST) == 36,
    "SOUND_CUTSCENE_PARAM_ST paramdef size does not match detected size");
