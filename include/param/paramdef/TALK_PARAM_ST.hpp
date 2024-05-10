/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct TALK_PARAM_ST {
    bool disableParam_NT : 1 { false };
    unsigned char disableParamReserve1 : 7;
    unsigned char disableParamReserve2[3];
    int msgId{ -1 };
    int voiceId{ -1 };
    int spEffectId0{ -1 };
    int motionId0{ -1 };
    int spEffectId1{ -1 };
    int motionId1{ -1 };
    int returnPos{ -1 };
    int reactionId{ -1 };
    int eventId{ -1 };
    int msgId_female{ -1 };
    int voiceId_female{ -1 };
    short lipSyncStart{ -1 };
    short lipSyncTime{ -1 };
    unsigned char pad2[4];
    float timeout{ -1 };
    int talkAnimationId{ -1 };
    bool isForceDisp : 1 { false };
    unsigned char pad3 : 7;
    unsigned char pad1[31];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::TALK_PARAM_ST) == 96,
    "TALK_PARAM_ST paramdef size does not match detected size");
