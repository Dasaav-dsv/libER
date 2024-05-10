/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct OBJ_ACT_PARAM_ST {
    int actionEnableMsgId{ -1 };
    int actionFailedMsgId{ -1 };
    unsigned int spQualifiedPassEventFlag{ 0 };
    unsigned int playerAnimId{ 0 };
    unsigned int chrAnimId{ 0 };
    unsigned short validDist{ 150 };
    unsigned short spQualifiedId{ 0 };
    unsigned short spQualifiedId2{ 0 };
    unsigned char objDummyId{ 0 };
    bool isEventKickSync{ false };
    unsigned int objAnimId{ 0 };
    unsigned char validPlayerAngle{ 30 };
    unsigned char spQualifiedType{ 0 };
    unsigned char spQualifiedType2{ 0 };
    unsigned char validObjAngle{ 30 };
    unsigned char chrSorbType{ 0 };
    unsigned char eventKickTiming{ 0 };
    unsigned char pad1[2];
    int actionButtonParamId{ -1 };
    float enableTreasureDelaySec{ 0 };
    int preActionSfxDmypolyId{ -1 };
    int preActionSfxId{ -1 };
    unsigned char pad2[40];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::OBJ_ACT_PARAM_ST) == 96,
    "OBJ_ACT_PARAM_ST paramdef size does not match detected size");
