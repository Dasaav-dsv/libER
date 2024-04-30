/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct PLAY_REGION_PARAM_ST {
    bool disableParam_NT : 1 { false };
    unsigned char disableParamReserve1 : 7;
    unsigned char disableParamReserve2[3];
    int matchAreaId{ 0 };
    unsigned int multiPlayStartLimitEventFlagId{ 0 };
    float otherDisableDistance{ 0 };
    unsigned int pcPositionSaveLimitEventFlagId{ 0 };
    unsigned int bossAreaId{ 0 };
    short cultNpcWhiteGhostEntityId_byFree{ -1 };
    bool bMapGuradianRegion{ false };
    bool bYellowCostumeRegion : 1 { false };
    bool multiPlayStartLimitEventFlagId_targetFlagState : 1 { true };
    bool breakInLimitEventFlagId_1_targetFlagState : 1 { true };
    bool whiteSignLimitEventFlagId_1_targetFlagState : 1 { true };
    bool redSignLimitEventFlagId_1_targetFlagState : 1 { true };
    bool breakInLimitEventFlagId_2_targetFlagState : 1 { true };
    bool breakInLimitEventFlagId_3_targetFlagState : 1 { true };
    bool whiteSignLimitEventFlagId_2_targetFlagState : 1 { true };
    unsigned int warpItemUsePermitBonfireId_1{ 0 };
    unsigned int warpItemUsePermitBonfireId_2{ 0 };
    unsigned int warpItemUsePermitBonfireId_3{ 0 };
    unsigned int warpItemUsePermitBonfireId_4{ 0 };
    unsigned int warpItemUsePermitBonfireId_5{ 0 };
    unsigned int warpItemProhibitionEventFlagId_1{ 0 };
    unsigned int warpItemProhibitionEventFlagId_2{ 0 };
    unsigned int warpItemProhibitionEventFlagId_3{ 0 };
    unsigned int warpItemProhibitionEventFlagId_4{ 0 };
    unsigned int warpItemProhibitionEventFlagId_5{ 0 };
    bool enableBloodstain : 1 { true };
    bool enableBloodMessage : 1 { true };
    bool enableGhost : 1 { true };
    bool dispMask00 : 1 { false };
    bool dispMask01 : 1 { false };
    bool whiteSignLimitEventFlagId_3_targetFlagState : 1 { true };
    bool redSignLimitEventFlagId_2_targetFlagState : 1 { true };
    bool redSignLimitEventFlagId_3_targetFlagState : 1 { true };
    bool isAutoIntrudePoint : 1 { false };
    unsigned char pad1 : 7;
    unsigned char pad2[2];
    unsigned int multiPlayHASHostLimitEventFlagId{ 0 };
    float otherMaxDistance{ 1000 };
    unsigned int signPuddleOpenEventFlagId{ 0 };
    unsigned char areaNo{ 0 };
    unsigned char gridXNo{ 0 };
    unsigned char gridZNo{ 0 };
    unsigned char pad4[1];
    float posX{ 0 };
    float posY{ 0 };
    float posZ{ 0 };
    unsigned int breakInLimitEventFlagId_1{ 0 };
    unsigned int whiteSignLimitEventFlagId_1{ 0 };
    unsigned int matchAreaSignCreateLimitEventFlagId{ 0 };
    unsigned int signAimId_1{ 0 };
    unsigned int signAimId_2{ 0 };
    unsigned int signAimId_3{ 0 };
    unsigned int signAimId_4{ 0 };
    unsigned int signAimId_5{ 0 };
    unsigned int signAimId_6{ 0 };
    unsigned int signAimId_7{ 0 };
    unsigned int signAimId_8{ 0 };
    unsigned int redSignLimitEventFlagId_1{ 0 };
    unsigned int breakInLimitEventFlagId_2{ 0 };
    unsigned int breakInLimitEventFlagId_3{ 0 };
    unsigned int whiteSignLimitEventFlagId_2{ 0 };
    unsigned int whiteSignLimitEventFlagId_3{ 0 };
    unsigned int redSignLimitEventFlagId_2{ 0 };
    unsigned int redSignLimitEventFlagId_3{ 0 };
    unsigned int bossId_1{ 0 };
    unsigned int bossId_2{ 0 };
    unsigned int bossId_3{ 0 };
    unsigned int bossId_4{ 0 };
    unsigned int bossId_5{ 0 };
    unsigned int bossId_6{ 0 };
    unsigned int bossId_7{ 0 };
    unsigned int bossId_8{ 0 };
    unsigned int bossId_9{ 0 };
    unsigned int bossId_10{ 0 };
    unsigned int bossId_11{ 0 };
    unsigned int bossId_12{ 0 };
    unsigned int bossId_13{ 0 };
    unsigned int bossId_14{ 0 };
    unsigned int bossId_15{ 0 };
    unsigned int bossId_16{ 0 };
    unsigned int mapMenuUnlockEventId{ 0 };
    unsigned char pad5[32];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::PLAY_REGION_PARAM_ST) == 272,
    "PLAY_REGION_PARAM_ST paramdef size does not match detected size");
