/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct GAME_SYSTEM_COMMON_PARAM_ST {
    float baseToughnessRecoverTime{ 0 };
    int chrEventTrun_byLeft90{ 0 };
    int chrEventTrun_byRight90{ 0 };
    int chrEventTrun_byLeft180{ 0 };
    int chrEventTrun_byRight180{ 0 };
    short chrEventTrun_90TurnStartAngle{ 0 };
    short chrEventTrun_180TurnStartAngle{ 0 };
    float stealthAtkDamageRate{ 0 };
    float flickDamageCutRateSuccessGurad{ 0 };
    float npcTalkAnimBeginDiffAngle{ 0 };
    float npcTalkAnimEndDiffAngle{ 0 };
    int sleepCollectorItemActionButtonParamId{ -1 };
    float allowUseBuddyItem_sfxInterval{ 0 };
    int allowUseBuddyItem_sfxDmyPolyId{ -1 };
    int allowUseBuddyItem_sfxDmyPolyId_horse{ -1 };
    int allowUseBuddyItem_sfxId{ -1 };
    float onBuddySummon_inActivateRange_sfxInterval{ 0 };
    int onBuddySummon_inActivateRange_sfxDmyPolyId{ -1 };
    int onBuddySummon_inActivateRange_sfxDmyPolyId_horse{ -1 };
    int onBuddySummon_inActivateRange_sfxId{ -1 };
    int onBuddySummon_inActivateRange_spEffectId_pc{ -1 };
    int onBuddySummon_inWarnRange_spEffectId_pc{ -1 };
    int onBuddySummon_atBuddyUnsummon_spEffectId_pc{ -1 };
    int onBuddySummon_inWarnRange_spEffectId_buddy{ -1 };
    unsigned char morningIngameHour{ 0 };
    unsigned char morningIngameMinute{ 0 };
    unsigned char morningIngameSecond{ 0 };
    unsigned char noonIngameHour{ 0 };
    unsigned char noonIngameMinute{ 0 };
    unsigned char noonIngameSecond{ 0 };
    unsigned char nightIngameHour{ 0 };
    unsigned char nightIngameMinute{ 0 };
    unsigned char nightIngameSecond{ 0 };
    unsigned char aiSightRateStart_Morning_Hour{ 0 };
    unsigned char aiSightRateStart_Morning_Minute{ 0 };
    unsigned char aiSightRateStart_Noon_Hour{ 0 };
    unsigned char aiSightRateStart_Noon_Minute{ 0 };
    unsigned char aiSightRateStart_Evening_Hour{ 0 };
    unsigned char aiSightRateStart_Evening_Minute{ 0 };
    unsigned char aiSightRateStart_Night_Hour{ 0 };
    unsigned char aiSightRateStart_Night_Minute{ 0 };
    unsigned char aiSightRateStart_Midnight_Hour{ 0 };
    unsigned char aiSightRateStart_Midnight_Minute{ 0 };
    unsigned char saLargeDamageHitSfx_Threshold{ 0 };
    int saLargeDamageHitSfx_SfxId{ 0 };
    float signCreatableDistFromSafePos{ 0 };
    float guestResummonDist{ 0 };
    float guestLeavingMessageDistMax{ 0 };
    float guestLeavingMessageDistMin{ 0 };
    float guestLeaveSessionDist{ 0 };
    float retryPointAreaRadius{ -1 };
    int sleepCollectorSpEffectId{ -1 };
    int recoverBelowMaxHpCompletionNoticeSpEffectId{ 0 };
    int estusFlaskRecovery_AbsorptionProductionSfxId_byHp{ 0 };
    int estusFlaskRecovery_AbsorptionProductionSfxId_byMp{ 0 };
    int respawnSpecialEffectActiveCheckerSpEffectId{ 0 };
    int onBuddySummon_inActivateRange_spEffectId_buddy{ -1 };
    float estusFlaskRecovery_AddEstusTime{ 0 };
    float defeatMultiModeEnemyOfSoulCorrectRate_byHost{ 0 };
    float defeatMultiModeEnemyOfSoulCorrectRate_byTeamGhost{ 0 };
    float defeatMultiModeBossOfSoulCorrectRate_byHost{ 0 };
    float defeatMultiModeBossOfSoulCorrectRate_byTeamGhost{ 0 };
    unsigned short enemyHpGaugeScreenOffset_byUp{ 0 };
    unsigned short playRegionCollectDist{ 0 };
    unsigned short enemyDetectionSpEffect_ShootBulletDummypolyId{ 0 };
    unsigned short bigRuneGreaterDemonBreakInGoodsNum{ 0 };
    int bigRuneGreaterDemonBreakInGoodsId{ -1 };
    int rideJumpRegionDefaultSfxId{ 0 };
    float saAttackRate_forVsRideAtk{ 1 };
    int enemySpEffectIdAfterSleepCollectorItemLot{ -1 };
    int afterEndingMapUid{ 0 };
    unsigned int afterEndingReturnPointEntityId{ 0 };
    int enemyDetectionSpEffect_BulletId_byCoopRing_RedHunter{ 0 };
    int enemyDetectionSpEffect_BulletId_byInvadeOrb_None{ 0 };
    unsigned int tutorialFlagOnAccessDistView{ 0 };
    unsigned int tutorialFlagOnAccessRetryPoint{ 0 };
    unsigned int tutorialFlagOnGetGroupReward{ 0 };
    unsigned int tutorialFlagOnEnterRideJumpRegion{ 0 };
    float tutorialCheckRideJumpRegionExpandRange{ 0 };
    int retryPointActivatedPcAnimId{ -1 };
    float retryPointActivatedDialogDelayTime{ 0 };
    int retryPointActivatedDialogTextId{ -1 };
    int signPuddleOpenPcAnimId{ -1 };
    float signPuddleOpenDialogDelayTime{ 0 };
    int activityOfDeadSpEffect_BulletId{ 0 };
    int activityOfDeadSpEffect_ShootBulletDummypolyId{ 0 };
    float activityOfDeadSpEffect_DeadFadeOutTime{ 0 };
    float ignorNetStateSyncTime_ForThrow{ 0 };
    unsigned short netPenaltyPointLanDisconnect{ 0 };
    unsigned short netPenaltyPointProfileSignout{ 0 };
    unsigned short netPenaltyPointReboot{ 0 };
    unsigned short netPnaltyPointSuspend{ 0 };
    float netPenaltyForgiveItemLimitTime{ 0 };
    unsigned short netPenaltyPointThreshold{ 0 };
    unsigned short uncontrolledMoveThresholdTime{ 0 };
    int enemyDetectionSpEffect_BulletId_byNpcEnemy{ 0 };
    int activityOfDeadTargetSearchSpEffect_OnHitSpEffect{ 0 };
    float activityOfDeadTargetSearchSpEffect_MaxLength{ 0 };
    float sightRangeLowerPromiseRate{ 0 };
    short saLargeDamageHitSfx_MinDamage{ -1 };
    short saLargeDamageHitSfx_ForceDamage{ -1 };
    unsigned int soloBreakInMaxPoint{ 0 };
    float npcTalkTimeOutThreshold{ 0 };
    float sendPlayLogIntervalTime{ 0 };
    unsigned char item370_MaxSfxNum{ 0 };
    unsigned char chrActivateDist_forLeavePC{ 0 };
    short summonDataCoopMatchingLevelUpperAbs{ 0 };
    short summonDataCoopMatchingLevelUpperRel{ 0 };
    short summonDataCoopMatchingWepLevelMul{ 0 };
    int pickUpBerserkerSignSpEffectBulletId{ 0 };
    int succeedBerserkerSelfKillingEffectId{ 0 };
    unsigned char machingLevelWhiteSignUpperRel{ 0 };
    unsigned char machingLevelWhiteSignUpperAbs{ 0 };
    unsigned char machingLevelRedSignUpperRel{ 0 };
    unsigned char machingLevelRedSignUpperAbs{ 0 };
    unsigned char machingWeaponLevelUpperWhiteSign_0{ 0 };
    unsigned char machingWeaponLevelUpperWhiteSign_1{ 0 };
    unsigned char machingWeaponLevelUpperWhiteSign_2{ 0 };
    unsigned char machingWeaponLevelUpperWhiteSign_3{ 0 };
    unsigned char machingWeaponLevelUpperWhiteSign_4{ 0 };
    unsigned char machingWeaponLevelUpperWhiteSign_5{ 0 };
    unsigned char machingWeaponLevelUpperWhiteSign_6{ 0 };
    unsigned char machingWeaponLevelUpperWhiteSign_7{ 0 };
    unsigned char machingWeaponLevelUpperWhiteSign_8{ 0 };
    unsigned char machingWeaponLevelUpperWhiteSign_9{ 0 };
    unsigned char machingWeaponLevelUpperWhiteSign_10{ 0 };
    unsigned char machingWeaponLevelUpperRedSign_0{ 0 };
    unsigned char machingWeaponLevelUpperRedSign_1{ 0 };
    unsigned char machingWeaponLevelUpperRedSign_2{ 0 };
    unsigned char machingWeaponLevelUpperRedSign_3{ 0 };
    unsigned char machingWeaponLevelUpperRedSign_4{ 0 };
    unsigned char machingWeaponLevelUpperRedSign_5{ 0 };
    unsigned char machingWeaponLevelUpperRedSign_6{ 0 };
    unsigned char machingWeaponLevelUpperRedSign_7{ 0 };
    unsigned char machingWeaponLevelUpperRedSign_8{ 0 };
    unsigned char machingWeaponLevelUpperRedSign_9{ 0 };
    unsigned char machingWeaponLevelUpperRedSign_10{ 0 };
    unsigned char autoInvadePoint_generateDist{ 40 };
    unsigned char autoInvadePoint_cancelDist{ 20 };
    float sendGlobalEventLogIntervalTime{ 0 };
    unsigned short addSoloBreakInPoint_White{ 0 };
    unsigned short addSoloBreakInPoint_Black{ 0 };
    unsigned short addSoloBreakInPoint_ForceJoin{ 0 };
    unsigned short addSoloBreakInPoint_VisitorGuardian{ 0 };
    unsigned short addSoloBreakInPoint_VisitorRedHunter{ 0 };
    unsigned char invincibleTimer_forNetPC_initSync{ 0 };
    unsigned char invincibleTimer_forNetPC{ 10 };
    float redHunter_HostBossAreaGetSoulRate{ 0 };
    int ghostFootprintDecalParamId{ 0 };
    float leaveAroundHostWarningTime{ 0 };
    int hostModeCostItemId{ 0 };
    float aIJump_DecelerateParam{ 0 };
    float buddyDisappearDelaySec{ 0 };
    float aIJump_AnimYMoveCorrectRate_onJumpOff{ 0 };
    float stealthSystemSightRate_NotInStealthRigid_NotSightHide_StealthMode{
        1
    };
    float stealthSystemSightRate_NotInStealthRigid_SightHide_NotStealthMode{
        1
    };
    float stealthSystemSightRate_NotInStealthRigid_SightHide_StealthMode{ 1 };
    float stealthSystemSightRate_InStealthRigid_NotSightHide_NotStealthMode{
        1
    };
    float stealthSystemSightRate_InStealthRigid_NotSightHide_StealthMode{ 1 };
    float stealthSystemSightRate_InStealthRigid_SightHide_NotStealthMode{ 1 };
    float stealthSystemSightRate_InStealthRigid_SightHide_StealthMode{ 1 };
    int msbEventGeomTreasureInfo_actionButtonParamId_corpse{ 0 };
    int msbEventGeomTreasureInfo_itemGetAnimId_corpse{ 0 };
    int msbEventGeomTreasureInfo_actionButtonParamId_box{ 0 };
    int msbEventGeomTreasureInfo_itemGetAnimId_box{ 0 };
    int msbEventGeomTreasureInfo_actionButtonParamId_shine{ 0 };
    int msbEventGeomTreasureInfo_itemGetAnimId_shine{ 0 };
    int signPuddleAssetId{ 0 };
    int signPuddleAppearDmypolyId0{ 0 };
    int signPuddleAppearDmypolyId1{ 0 };
    int signPuddleAppearDmypolyId2{ 0 };
    int signPuddleAppearDmypolyId3{ 0 };
    float fallDamageRate_forRidePC{ 1 };
    float fallDamageRate_forRideNPC{ 1 };
    int OldMonkOfYellow_CreateSignSpEffectId{ 0 };
    float StragglerActivateDist{ 0 };
    int SpEffectId_EnableUseItem_StragglerActivate{ -1 };
    int SpEffectId_StragglerWakeUp{ -1 };
    int SpEffectId_StragglerTarget{ -1 };
    int SpEffectId_StragglerOppose{ -1 };
    float buddyWarp_TriggerTimeRayBlocked{ 10 };
    float buddyWarp_TriggerDistToPlayer{ 25 };
    float buddyWarp_ThresholdTimePathStacked{ 5 };
    float buddyWarp_ThresholdRangePathStacked{ 1 };
    float aiSightRate_morning{ 1 };
    float aiSightRate_noonA{ 1 };
    float buddyPassThroughTriggerTime{ 0.5 };
    float aiSightRate_evening{ 1 };
    float aiSightRate_night{ 1 };
    float aiSightRate_midnightA{ 1 };
    unsigned char reserve4_2[4];
    float aiSightRate_sunloss_light{ 1 };
    float aiSightRate_sunloss_dark{ 1 };
    float aiSightRate_sunloss_veryDark{ 1 };
    float
        stealthSystemSightAngleReduceRate_NotInStealthRigid_NotSightHide_StealthMode{
            0
        };
    float
        stealthSystemSightAngleReduceRate_NotInStealthRigid_SightHide_NotStealthMode{
            0
        };
    float
        stealthSystemSightAngleReduceRate_NotInStealthRigid_SightHide_StealthMode{
            0
        };
    float
        stealthSystemSightAngleReduceRate_InStealthRigid_NotSightHide_NotStealthMode{
            0
        };
    float
        stealthSystemSightAngleReduceRate_InStealthRigid_NotSightHide_StealthMode{
            0
        };
    float
        stealthSystemSightAngleReduceRate_InStealthRigid_SightHide_NotStealthMode{
            0
        };
    float
        stealthSystemSightAngleReduceRate_InStealthRigid_SightHide_StealthMode{
            0
        };
    unsigned char weatherLotConditionStart_Morning_Hour{ 7 };
    unsigned char weatherLotConditionStart_Morning_Minute{ 0 };
    unsigned char weatherLotConditionStart_Day_Hour{ 12 };
    unsigned char weatherLotConditionStart_Day_Minute{ 0 };
    unsigned char weatherLotConditionStart_Evening_Hour{ 17 };
    unsigned char weatherLotConditionStart_Evening_Minute{ 0 };
    unsigned char weatherLotConditionStart_Night_Hour{ 19 };
    unsigned char weatherLotConditionStart_Night_Minute{ 0 };
    unsigned char weatherLotConditionStart_DayBreak_Hour{ 5 };
    unsigned char weatherLotConditionStart_DayBreak_Minute{ 0 };
    unsigned char weatherLotCondition_reserved[2];
    unsigned char pclightScaleChangeStart_Hour{ 18 };
    unsigned char pclightScaleChangeStart_Minute{ 0 };
    unsigned char pclightScaleChangeEnd_Hour{ 5 };
    unsigned char pclightScaleChangeEnd_Minute{ 0 };
    float pclightScaleByTimezone{ 1 };
    int bigRuneGreaterDemon_SummonBuddySpecialEffectId_Buddy{ -1 };
    int bigRuneGreaterDemon_SummonBuddySpecialEffectId_Pc{ -1 };
    int homeBonfireParamId{ 0 };
    unsigned char machingWeaponLevelUpperWhiteSign_11{ 0 };
    unsigned char machingWeaponLevelUpperWhiteSign_12{ 0 };
    unsigned char machingWeaponLevelUpperWhiteSign_13{ 0 };
    unsigned char machingWeaponLevelUpperWhiteSign_14{ 0 };
    unsigned char machingWeaponLevelUpperWhiteSign_15{ 0 };
    unsigned char machingWeaponLevelUpperWhiteSign_16{ 0 };
    unsigned char machingWeaponLevelUpperWhiteSign_17{ 0 };
    unsigned char machingWeaponLevelUpperWhiteSign_18{ 0 };
    unsigned char machingWeaponLevelUpperWhiteSign_19{ 0 };
    unsigned char machingWeaponLevelUpperWhiteSign_20{ 0 };
    unsigned char machingWeaponLevelUpperWhiteSign_21{ 0 };
    unsigned char machingWeaponLevelUpperWhiteSign_22{ 0 };
    unsigned char machingWeaponLevelUpperWhiteSign_23{ 0 };
    unsigned char machingWeaponLevelUpperWhiteSign_24{ 0 };
    unsigned char machingWeaponLevelUpperWhiteSign_25{ 0 };
    unsigned char machingWeaponLevelUpperRedSign_11{ 0 };
    unsigned char machingWeaponLevelUpperRedSign_12{ 0 };
    unsigned char machingWeaponLevelUpperRedSign_13{ 0 };
    unsigned char machingWeaponLevelUpperRedSign_14{ 0 };
    unsigned char machingWeaponLevelUpperRedSign_15{ 0 };
    unsigned char machingWeaponLevelUpperRedSign_16{ 0 };
    unsigned char machingWeaponLevelUpperRedSign_17{ 0 };
    unsigned char machingWeaponLevelUpperRedSign_18{ 0 };
    unsigned char machingWeaponLevelUpperRedSign_19{ 0 };
    unsigned char machingWeaponLevelUpperRedSign_20{ 0 };
    unsigned char machingWeaponLevelUpperRedSign_21{ 0 };
    unsigned char machingWeaponLevelUpperRedSign_22{ 0 };
    unsigned char machingWeaponLevelUpperRedSign_23{ 0 };
    unsigned char machingWeaponLevelUpperRedSign_24{ 0 };
    unsigned char machingWeaponLevelUpperRedSign_25{ 0 };
    unsigned char menuTimezoneStart_Morning_Hour{ 7 };
    unsigned char menuTimezoneStart_Morning_Minute{ 0 };
    unsigned char menuTimezoneStart_Day1_Hour{ 12 };
    unsigned char menuTimezoneStart_Day1_Minute{ 0 };
    unsigned char menuTimezoneStart_Day2_Hour{ 12 };
    unsigned char menuTimezoneStart_Day2_Minute{ 0 };
    unsigned char menuTimezoneStart_Evening_Hour{ 17 };
    unsigned char menuTimezoneStart_Evening_Minute{ 0 };
    unsigned char menuTimezoneStart_Night_Hour{ 19 };
    unsigned char menuTimezoneStart_Night_Minute{ 0 };
    unsigned char menuTimezoneStart_Midnight_Hour{ 5 };
    unsigned char menuTimezoneStart_Midnight_Minute{ 0 };
    unsigned short remotePlayerThreatLvNotify_ThreatLv{ 0 };
    float remotePlayerThreatLvNotify_NotifyDist{ 0 };
    float remotePlayerThreatLvNotify_EndNotifyDist{ 0 };
    float worldMapPointDiscoveryExpandRange{ 0 };
    float worldMapPointReentryExpandRange{ 0 };
    unsigned short remotePlayerThreatLvNotify_NotifyTime{ 0 };
    unsigned short breakIn_A_rebreakInGoodsNum{ 0 };
    int breakIn_A_rebreakInGoodsId{ -1 };
    int rideJumpoff_SfxId{ -1 };
    float rideJumpoff_SfxHeightOffset{ 0 };
    int rideJumpoff_SpEffectId{ -1 };
    int rideJumpoff_SpEffectIdPc{ -1 };
    unsigned int unlockExchangeMenuEventFlagId{ 0 };
    unsigned int unlockMessageMenuEventFlagId{ 0 };
    unsigned short breakInOnce_A_rebreakInGoodsNum{ 0 };
    unsigned short breakIn_B_rebreakInGoodsNum{ 0 };
    int breakInOnce_A_rebreakInGoodsId{ -1 };
    int breakIn_B_rebreakInGoodsId{ -1 };
    float actionButtonInputCancelTime{ -1 };
    float blockClearBonusDelayTime{ 7 };
    float bonfireCheckEnemyRange{ -1 };
    unsigned char reserved_124[32];
    float unkR00{ 0 };
    float unkR04{ 0 };
    float unkR08{ 0 };
    float unkR12{ 0 };
    float unkR16{ 0 };
    float unkR20{ 0 };
    float unkR24{ 0 };
    float unkR28{ 0 };
    float unkR32{ 0 };
    float unkR36{ 0 };
    float unkR40{ 0 };
    float unkR44{ 0 };
    float unkR48{ 0 };
    float unkR52{ 0 };
    unsigned char reserved_124_2[40];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::GAME_SYSTEM_COMMON_PARAM_ST) == 880,
    "GAME_SYSTEM_COMMON_PARAM_ST paramdef size does not match detected size");
