/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct PLAYER_COMMON_PARAM_ST {
    int playerFootEffect_bySFX{ 0 };
    float snipeModeDrawAlpha_FadeTime{ 0 };
    float toughnessRecoverCorrection{ 0 };
    unsigned char baseMagicSlotSize{ 0 };
    unsigned char baseAccSlotNum{ 0 };
    unsigned char reserved02[2];
    int animeID_DropItemPick{ 0 };
    float resistRecoverPoint_Sleep_Player{ 0 };
    int flareOverrideHomingAngle{ -1 };
    float flareOverrideHomingStopRange{ -1 };
    int animeID_SleepCollectorItemPick{ 0 };
    unsigned int unlockEventFlagBaseId_forWepAttr{ 0 };
    int systemEnchant_BigRune{ 0 };
    float lowStatus_AtkPowDown{ 0 };
    float lowStatus_ConsumeStaminaRate{ 0 };
    short lowStatus_AtkGuardBreak{ 0 };
    short guardStatusCorrect_MaxStatusVal{ 0 };
    unsigned short unlockEventFlagStepNum_forWepAttr{ 1 };
    unsigned short retributionMagic_damageCountNum{ 0 };
    unsigned short retributionMagic_damageCountRemainTime{ 0 };
    unsigned short retributionMagic_burstDmypolyId{ 0 };
    int retributionMagic_burstMagicParamId{ -1 };
    float chrAimCam_rideOffsetHeight{ 0 };
    unsigned char reserved23[4];
    int arrowCaseWepBindDmypolyId{ 0 };
    int boltPouchWepBindDmypolyId{ 0 };
    float estusFlaskAllocateRate{ 0 };
    unsigned char reserved38[2];
    unsigned char kickAcceptanceDeg{ 0 };
    unsigned char npcPlayerAnalogWeightRate_Light{ 0 };
    unsigned char npcPlayerAnalogWeightRate_Normal{ 0 };
    unsigned char npcPlayerAnalogWeightRate_Heavy{ 0 };
    unsigned char npcPlayerAnalogWeightRate_WeightOver{ 0 };
    unsigned char npcPlayerAnalogWeightRate_SuperLight{ 0 };
    unsigned char reserved45[4];
    int clearCountCorrectBaseSpEffectId{ 0 };
    int arrowBoltModelIdOffset{ 0 };
    signed char arrowBoltRemainingNumModelMaskThreshold1{ 0 };
    signed char arrowBoltRemainingNumModelMaskThreshold2{ 0 };
    unsigned char reserved27[2];
    float resistRecoverPoint_Poision_Player{ 0 };
    float resistRecoverPoint_Desease_Player{ 0 };
    float resistRecoverPoint_Blood_Player{ 0 };
    float resistRecoverPoint_Curse_Player{ 0 };
    float resistRecoverPoint_Freeze_Player{ 0 };
    float resistRecoverPoint_Poision_Enemy{ 0 };
    float resistRecoverPoint_Desease_Enemy{ 0 };
    float resistRecoverPoint_Blood_Enemy{ 0 };
    float resistRecoverPoint_Curse_Enemy{ 0 };
    float resistRecoverPoint_Freeze_Enemy{ 0 };
    float requestTimeLeftBothHand{ 0 };
    float resistRecoverPoint_Madness_Player{ 0 };
    int animeID_MaterialItemPick{ 0 };
    float hpEstusFlaskAllocateRateForYellowMonk{ 0 };
    int hpEstusFlaskAllocateOffsetForYellowMonk{ 0 };
    float mpEstusFlaskAllocateRateForYellowMonk{ 0 };
    int mpEstusFlaskAllocateOffsetForYellowMonk{ 0 };
    float resistRecoverPoint_Sleep_Enemy{ 0 };
    float resistRecoverPoint_Madness_Enemy{ 0 };
    int resistCurseItemId{ -1 };
    unsigned char resistCurseItemMaxNum{ 0 };
    unsigned char reserved_123[3];
    int resistCurseItemSpEffectBaseId{ -1 };
    int resistCurseItemLotParamId_map{ -1 };
    unsigned char reserved41[52];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::PLAYER_COMMON_PARAM_ST) == 256,
    "PLAYER_COMMON_PARAM_ST paramdef size does not match detected size");
