/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 *
 */
struct GAME_SYSTEM_COMMON_PARAM_ST {
    /**
     * @brief Basic toughness durability recovery time
     *
     * This is the basic value of toughness recovery time. (Seconds)
     */
    float baseToughnessRecoverTime{ 0.f };

    /**
     * @brief Character event turning animation (90 ° left)
     *
     * This is a 90 ° left turn animation for the "Character Turn" event.
     */
    int chrEventTrun_byLeft90{ 0 };

    /**
     * @brief Character event turning animation (right 90 °)
     *
     * This is a 90 ° right turn animation for the "Character Turn" event.
     */
    int chrEventTrun_byRight90{ 0 };

    /**
     * @brief Character event turning animation (180 ° left)
     *
     * This is a 180 ° left turn animation for the "Character Turn" event.
     */
    int chrEventTrun_byLeft180{ 0 };

    /**
     * @brief Character event turning animation (right 180 °)
     *
     * This is a 180 ° right turn animation for the "Character Turn" event.
     */
    int chrEventTrun_byRight180{ 0 };

    /**
     * @brief Character event turning 90 ° Animation start angle
     *
     * The starting angle of the angle to which the 90 ° swivel animation for
     * the "Character Swirl" event is applied. If the event starts at an angle
     * smaller than this angle, a system turn will occur.
     */
    short chrEventTrun_90TurnStartAngle{ 0 };

    /**
     * @brief Character event turning 180 ° Animation start angle
     *
     * The starting angle of the angle to which the 180 ° swivel animation for
     * the "Character Swirl" event is applied.
     */
    short chrEventTrun_180TurnStartAngle{ 0 };

    /**
     * @brief Stealth attack damage multiplier
     */
    float stealthAtkDamageRate{ 0.f };

    /**
     * @brief Damage cut rate when the guard is successful when repelled
     *
     * Damage cut rate when the guard is successful when repelled. Multiply the
     * final damage
     */
    float flickDamageCutRateSuccessGurad{ 0.f };

    /**
     * @brief Difference angle to start playing NPC conversation animation
     *
     * This is the difference angle at which the animation playback of the
     * motion during the conversation of the NPC conversation starts.
     */
    float npcTalkAnimBeginDiffAngle{ 0.f };

    /**
     * @brief Difference angle to stop animation playback of NPC conversation
     *
     * This is the difference angle at which the animation playback of the
     * motion during the conversation of the NPC conversation is stopped.
     */
    float npcTalkAnimEndDiffAngle{ 0.f };

    /**
     * @brief Nemuri Item Acquisition Range_Action Button Para ID
     *
     * Nemuri Item Acquisition Range_Action Button Para ID. TAE flag Used as the
     * default value when not overwriting with "Event> Nemuri item
     * registration".
     */
    int sleepCollectorItemActionButtonParamId{ -1 };

    /**
     * @brief Buddy item permission_SFX occurrence interval [s]
     */
    float allowUseBuddyItem_sfxInterval{ 0.f };

    /**
     * @brief Buddy Item Permission_SFX Occurrence PC Damipoli ID
     */
    int allowUseBuddyItem_sfxDmyPolyId{ -1 };

    /**
     * @brief Buddy item permission_SFX generated horse Damipoli ID_when riding
     */
    int allowUseBuddyItem_sfxDmyPolyId_horse{ -1 };

    /**
     * @brief Buddy Item Permission_Occurrence SFXID
     */
    int allowUseBuddyItem_sfxId{ -1 };

    /**
     * @brief Buddy Summoning_Initial Range_SFX Occurrence Interval [s]
     */
    float onBuddySummon_inActivateRange_sfxInterval{ 0.f };

    /**
     * @brief Buddy Summoning_Initial Range_SFX Occurrence PC Damipoli ID
     */
    int onBuddySummon_inActivateRange_sfxDmyPolyId{ -1 };

    /**
     * @brief Buddy Summoning_Initial Range_SFX Generated Horse Damipoli ID_When
     * Riding
     */
    int onBuddySummon_inActivateRange_sfxDmyPolyId_horse{ -1 };

    /**
     * @brief Buddy Summoning_Initial Range_Occurrence SFXID
     */
    int onBuddySummon_inActivateRange_sfxId{ -1 };

    /**
     * @brief Buddy Summoning_Initial range Special effect ID_For PC
     */
    int onBuddySummon_inActivateRange_spEffectId_pc{ -1 };

    /**
     * @brief Buddy Summoning_Warning Range Special Effect ID_For PC
     */
    int onBuddySummon_inWarnRange_spEffectId_pc{ -1 };

    /**
     * @brief Buddy Summoning_Buddy Return Special Effect ID_For PC
     */
    int onBuddySummon_atBuddyUnsummon_spEffectId_pc{ -1 };

    /**
     * @brief Buddy Summoning_Warning Range Special Effect ID_For Buddy
     */
    int onBuddySummon_inWarnRange_spEffectId_buddy{ -1 };

    /**
     * @brief Morning in-game time (hours)
     *
     * Morning in-game time (hours). Used in conversation.
     */
    unsigned char morningIngameHour{ 0 };

    /**
     * @brief Morning in-game time (minutes)
     *
     * Morning in-game time (minutes). Used in conversation.
     */
    unsigned char morningIngameMinute{ 0 };

    /**
     * @brief Morning in-game time (seconds)
     *
     * Morning in-game time (seconds). Used in conversation.
     */
    unsigned char morningIngameSecond{ 0 };

    /**
     * @brief Daytime in-game time (hours)
     *
     * Daytime in-game time (hours). Used in conversation.
     */
    unsigned char noonIngameHour{ 0 };

    /**
     * @brief Daytime in-game time (minutes)
     *
     * Daytime in-game time (minutes). Used in conversation.
     */
    unsigned char noonIngameMinute{ 0 };

    /**
     * @brief Daytime in-game time (seconds)
     *
     * Daytime in-game time (seconds). Used in conversation.
     */
    unsigned char noonIngameSecond{ 0 };

    /**
     * @brief Night in-game time (hours)
     *
     * Night in-game time (hours). Used in conversation.
     */
    unsigned char nightIngameHour{ 0 };

    /**
     * @brief Night in-game time (minutes)
     *
     * Night in-game time (minutes). Used in conversation.
     */
    unsigned char nightIngameMinute{ 0 };

    /**
     * @brief Night in-game time (seconds)
     *
     * Night in-game time (seconds). Used in conversation.
     */
    unsigned char nightIngameSecond{ 0 };

    /**
     * @brief AI visibility magnification_morning_start time (hour)
     */
    unsigned char aiSightRateStart_Morning_Hour{ 0 };

    /**
     * @brief AI visibility magnification_morning_start time (minutes)
     */
    unsigned char aiSightRateStart_Morning_Minute{ 0 };

    /**
     * @brief AI visibility magnification_day_start time (hour)
     */
    unsigned char aiSightRateStart_Noon_Hour{ 0 };

    /**
     * @brief AI visibility magnification_day_start time (minutes)
     */
    unsigned char aiSightRateStart_Noon_Minute{ 0 };

    /**
     * @brief AI visibility magnification_evening_start time (hour)
     */
    unsigned char aiSightRateStart_Evening_Hour{ 0 };

    /**
     * @brief AI visibility magnification_evening_start time (minutes)
     */
    unsigned char aiSightRateStart_Evening_Minute{ 0 };

    /**
     * @brief AI visibility magnification_night_start time (hour)
     */
    unsigned char aiSightRateStart_Night_Hour{ 0 };

    /**
     * @brief AI visibility magnification_night_start time (minutes)
     */
    unsigned char aiSightRateStart_Night_Minute{ 0 };

    /**
     * @brief AI visibility magnification_midnight_start time (hour)
     */
    unsigned char aiSightRateStart_Midnight_Hour{ 0 };

    /**
     * @brief AI visibility magnification_midnight_start time (minutes)
     */
    unsigned char aiSightRateStart_Midnight_Minute{ 0 };

    /**
     * @brief SA large damage hit production SFX_ Occurrence condition SA damage
     * threshold ratio [%]
     */
    unsigned char saLargeDamageHitSfx_Threshold{ 0 };

    /**
     * @brief SA heavy damage hit production SFX_SFXID
     */
    int saLargeDamageHitSfx_SfxId{ 0 };

    /**
     * @brief Distance to create a sign away from a safe position [m]
     *
     * Distance at which you can create a sign away from the last safe position
     * on your PC [m]
     */
    float signCreatableDistFromSafePos{ 0.f };

    /**
     * @brief Distance between host and guest where resummoning occurs [m]
     */
    float guestResummonDist{ 0.f };

    /**
     * @brief Distance to notify the guest that they are about to leave the host
     * [m]
     *
     * Distance [m] to notify the guest that they are about to leave the host.
     * Notify me when I'm farther than this distance.
     */
    float guestLeavingMessageDistMax{ 0.f };

    /**
     * @brief Distance that allows guests to be re-notified that they are about
     * to leave the host [m]
     *
     * Distance [m] that allows the guest to be re-notified that they are about
     * to leave the host. Do not re-notify until closer than this distance.
     */
    float guestLeavingMessageDistMin{ 0.f };

    /**
     * @brief Maximum distance the guest can be away from the host [m]
     *
     * Maximum distance [m] that a guest can leave the host. If a certain period
     * of time elapses while the distance is longer than this distance, the
     * session will be withdrawn.
     */
    float guestLeaveSessionDist{ 0.f };

    /**
     * @brief Retry area radius_default value (m)
     *
     * Retry area radius_default value (m). It is used as the default value when
     * the radius and area are not set in the event type "Retry Point" of
     * MapStudio.
     */
    float retryPointAreaRadius{ -1.f };

    /**
     * @brief Special effect ID that activates when Nemuri items can be acquired
     *
     * A special effect ID that activates when a Nemuri item can be acquired.
     * TAE flag Used as the default value when not overwriting with "Event>
     * Nemuri item registration".
     */
    int sleepCollectorSpEffectId{ -1 };

    /**
     * @brief "Recover below HP maximum" Special effect completion notification
     * Special effect ID
     *
     * ID of the special effect that notifies that "Recovery below HP maximum"
     * is completed. Mainly used for multi synchronization.
     */
    int recoverBelowMaxHpCompletionNoticeSpEffectId{ 0 };

    /**
     * @brief HP Est absorption production SFXID
     *
     * Absorption effect SFXID when recovering the number of times the HP Est
     * bottle has been used when defeating an intruder
     */
    int estusFlaskRecovery_AbsorptionProductionSfxId_byHp{ 0 };

    /**
     * @brief MP Est Absorption Production SFXID
     *
     * Absorption effect SFXID when recovering the number of times the MP Est
     * bottle has been used when defeating an intruder
     */
    int estusFlaskRecovery_AbsorptionProductionSfxId_byMp{ 0 };

    /**
     * @brief Special effect ID for determining the activation of the
     * resurrection special effect
     *
     * ID of the special effect that notifies that the resurrection special
     * effect has been activated. Mainly used for multi synchronization.
     */
    int respawnSpecialEffectActiveCheckerSpEffectId{ 0 };

    /**
     * @brief Buddy Summoning_Initial Range Special Effect ID_For Buddy
     */
    int onBuddySummon_inActivateRange_spEffectId_buddy{ -1 };

    /**
     * @brief Time from the start of est absorption SFX playback to the start of
     * est addition processing
     */
    float estusFlaskRecovery_AddEstusTime{ 0.f };

    /**
     * @brief Soul correction value acquired when defeating enemies at multi
     * time_host
     *
     * Correction value of the amount of soul acquired by the host when
     * defeating a normal enemy in multiplayer
     */
    float defeatMultiModeEnemyOfSoulCorrectRate_byHost{ 0.f };

    /**
     * @brief Soul correction value acquired when defeating enemies at multi
     * time_cooperative spirit
     *
     * Correction value of the amount of soul acquired by cooperating spirits
     * when defeating a normal enemy in multiplayer
     */
    float defeatMultiModeEnemyOfSoulCorrectRate_byTeamGhost{ 0.f };

    /**
     * @brief Soul correction value acquired when defeating the boss at the time
     * of multi _ host
     *
     * Correction value of the amount of soul acquired by the host when
     * defeating the boss in multiplayer
     */
    float defeatMultiModeBossOfSoulCorrectRate_byHost{ 0.f };

    /**
     * @brief Soul correction value acquired when defeating the boss at the time
     * of multi _ cooperation spirit
     *
     * Correction value of the amount of soul acquired when the boss is defeated
     * in multiplayer
     */
    float defeatMultiModeBossOfSoulCorrectRate_byTeamGhost{ 0.f };

    /**
     * @brief Offset to prevent the HP gauge of the enemy character from being
     * cut off on the screen
     *
     * Offset value [pixel] (FullHD standard) that fits in the screen when the
     * enemy's HP gauge is cut off on the screen
     */
    unsigned short enemyHpGaugeScreenOffset_byUp{ 0 };

    /**
     * @brief Play area collection radius
     *
     * Collection radius of the play area around the PC
     */
    unsigned short playRegionCollectDist{ 0 };

    /**
     * @brief Bullet firing position during "enemy detection" Damipoli ID
     *
     * Detect bullet firing position Damipoli ID
     */
    unsigned short enemyDetectionSpEffect_ShootBulletDummypolyId{ 0 };

    /**
     * @brief Large Rune: Number of tools granted when the Greater Demon invades
     */
    unsigned short bigRuneGreaterDemonBreakInGoodsNum{ 0 };

    /**
     * @brief Large Rune: Greater Demon Invasion Tool Item ID
     */
    int bigRuneGreaterDemonBreakInGoodsId{ -1 };

    /**
     * @brief Large jump area SFXID
     *
     * SFX ID in the riding large jump area
     */
    int rideJumpRegionDefaultSfxId{ 0 };

    /**
     * @brief Common_Riding special attack magnification
     *
     * Magnification to be corrected at the time of riding special attack
     */
    float saAttackRate_forVsRideAtk{ 1.f };

    /**
     * @brief Special effects on the enemy side when drawing Nemuri items
     */
    int enemySpEffectIdAfterSleepCollectorItemLot{ -1 };

    /**
     * @brief Map UID on hold
     *
     * Map UID on hold for lap, enter in 8 digits (example ... m60_42_36_00->
     * 60423600)
     */
    int afterEndingMapUid{ 0 };

    /**
     * @brief Return point when lap is on hold
     *
     * Entity ID of return point on hold
     */
    unsigned int afterEndingReturnPointEntityId{ 0 };

    /**
     * @brief Bullet ID_cooperation ring_red hunting fired during "enemy
     * detection"
     *
     * Bullet ID to fly depending on enemy power / type (also used for
     * multi-automatic firing)
     */
    int enemyDetectionSpEffect_BulletId_byCoopRing_RedHunter{ 0 };

    /**
     * @brief No bullet ID_invasion orb_ fired during "enemy detection"
     *
     * Bullet ID to fly depending on enemy power / type (also used for
     * multi-automatic firing)
     */
    int enemyDetectionSpEffect_BulletId_byInvadeOrb_None{ 0 };

    /**
     * @brief For tutorial judgment: Event flag to turn on when accessing the
     * distant view
     */
    unsigned int tutorialFlagOnAccessDistView{ 0 };

    /**
     * @brief For tutorial judgment: Event flag to turn on when accessing the
     * retry point
     */
    unsigned int tutorialFlagOnAccessRetryPoint{ 0 };

    /**
     * @brief For tutorial judgment: Event flag to turn on when group reward is
     * entered after defeating a group
     */
    unsigned int tutorialFlagOnGetGroupReward{ 0 };

    /**
     * @brief For tutorial judgment: Event flag to turn on when entering the
     * riding big jump point
     */
    unsigned int tutorialFlagOnEnterRideJumpRegion{ 0 };

    /**
     * @brief For tutorial judgment: Expand the riding large jump point by ○ [m]
     * to judge inside and outside
     *
     * For tutorial judgment: The riding large jump point is expanded by ○ [m]
     * to judge inside and outside. ○ Set the value of [m] here.
     */
    float tutorialCheckRideJumpRegionExpandRange{ 0.f };

    /**
     * @brief PC animation ID when retry point is activated
     *
     * PC animation ID when retry point is started. If it is -1, it will not be
     * played.
     */
    int retryPointActivatedPcAnimId{ -1 };

    /**
     * @brief Delay time of dialog display when retry point is started [seconds]
     */
    float retryPointActivatedDialogDelayTime{ 0.f };

    /**
     * @brief Text ID of the dialog when starting the retry point
     *
     * The text ID of the dialog when the retry point is started. Set the text
     * in EventText_ForMap.xlsm. If it is -1, the dialog is not displayed.
     */
    int retryPointActivatedDialogTextId{ -1 };

    /**
     * @brief PC animation ID at the time of sign accumulation startup
     *
     * PC animation ID at the time of sign accumulation startup. If it is -1, it
     * will not be played.
     */
    int signPuddleOpenPcAnimId{ -1 };

    /**
     * @brief Delay time of dialog display at startup of sign accumulation
     * [seconds]
     */
    float signPuddleOpenDialogDelayTime{ 0.f };

    /**
     * @brief Bullet ID when the "Activity of the Dead" special effect is
     * activated
     *
     * Bullet ID fired when the "Activity of the Dead" special effect is
     * activated
     */
    int activityOfDeadSpEffect_BulletId{ 0 };

    /**
     * @brief Bullet generation position when the "Activity of the Dead" special
     * effect is activated Damipoli ID
     *
     * Damipoli ID at the position where the bullet is generated when the
     * "Activity of the Dead" special effect is activated
     */
    int activityOfDeadSpEffect_ShootBulletDummypolyId{ 0 };

    /**
     * @brief Fade out time of the corpse when the "Activity of the Dead"
     * special effect is activated
     *
     * Fade time when the corpse fades out when the "Activity of the Dead"
     * special effect is activated
     */
    float activityOfDeadSpEffect_DeadFadeOutTime{ 0.f };

    /**
     * @brief Time to ignore transitions due to network information at the start
     * of throwing
     */
    float ignorNetStateSyncTime_ForThrow{ 0.f };

    /**
     * @brief Multi-pre-penalty: LAN disconnection
     */
    unsigned short netPenaltyPointLanDisconnect{ 0 };

    /**
     * @brief Multi-pre-penalty: Profile sign-out
     */
    unsigned short netPenaltyPointProfileSignout{ 0 };

    /**
     * @brief Multi-pre-penalty: Power off
     */
    unsigned short netPenaltyPointReboot{ 0 };

    /**
     * @brief Multi-pre-penalty: Suspend / Pause
     */
    unsigned short netPnaltyPointSuspend{ 0 };

    /**
     * @brief Multi-pre-penalty: Waiting time to start the generation (sale) of
     * the bone of reason
     *
     * Multi-pre-penalty: Waiting time (seconds) to start the generation (sale)
     * of the bone of reason
     */
    float netPenaltyForgiveItemLimitTime{ 0.f };

    /**
     * @brief Multi-pre-penalty: Penalty judgment points
     */
    unsigned short netPenaltyPointThreshold{ 0 };

    /**
     * @brief No operation judgment time
     *
     * It is for leaving people who have not operated for a certain period of
     * time in multiplayer. The unit is seconds.
     */
    unsigned short uncontrolledMoveThresholdTime{ 0 };

    /**
     * @brief Bullet ID_hostile NPC / enemy character fired during "enemy
     * detection"
     *
     * Bullet ID to shoot to hostile NPCs / enemy characters when hostility
     * detection fails
     */
    int enemyDetectionSpEffect_BulletId_byNpcEnemy{ 0 };

    /**
     * @brief Special effect ID to be applied to the target of "Activity target
     * search of the dead"
     *
     * Special effects applied to the searched target
     */
    int activityOfDeadTargetSearchSpEffect_OnHitSpEffect{ 0 };

    /**
     * @brief "Search for active targets of the dead" distance
     *
     * Maximum searchable distance
     */
    float activityOfDeadTargetSearchSpEffect_MaxLength{ 0.f };

    /**
     * @brief Field of view_Minimum guaranteed distance [magnification
     * conversion]
     */
    float sightRangeLowerPromiseRate{ 0.f };

    /**
     * @brief SA large damage hit production SFX_ Occurrence condition SA damage
     * minimum required [pt]
     */
    short saLargeDamageHitSfx_MinDamage{ -1 };

    /**
     * @brief SA large damage hit production SFX_ Occurrence condition SA damage
     * forced occurrence minimum value [pt]
     */
    short saLargeDamageHitSfx_ForceDamage{ -1 };

    /**
     * @brief Maximum solo intrusion point
     *
     * Maximum solo intrusion point. When this value is exceeded, it will be
     * invaded solo.
     */
    unsigned int soloBreakInMaxPoint{ 0 };

    /**
     * @brief NPC conversation voice playback timeout time
     *
     * Voice playback timeout for NPC conversations. If voice playback does not
     * end after this time, proceed to the next message.
     */
    float npcTalkTimeOutThreshold{ 0.f };

    /**
     * @brief Playlog transmission interval
     *
     * Interval to send item usage log etc. to the server
     */
    float sendPlayLogIntervalTime{ 0.f };

    /**
     * @brief Maximum number of seven-colored stones installed
     */
    unsigned char item370_MaxSfxNum{ 0 };

    /**
     * @brief Distance allowed to activate during character deactivation [m]
     *
     * Distance allowed to activate during character deactivation (valid only
     * for open placement characters)
     */
    unsigned char chrActivateDist_forLeavePC{ 0 };

    /**
     * @brief Multi-weakening level correction factor 1
     *
     * Weakened stats when multiplayer. Host level addition correction
     */
    short summonDataCoopMatchingLevelUpperAbs{ 0 };

    /**
     * @brief Multi-weakening level correction factor 2
     *
     * Weakened stats when multiplayer. Host level magnification correction
     */
    short summonDataCoopMatchingLevelUpperRel{ 0 };

    /**
     * @brief Multi-weapon maximum weapon correction factor
     *
     * Weakened stats when multiplayer. Maximum weapon enhancement level
     * correction
     */
    short summonDataCoopMatchingWepLevelMul{ 0 };

    /**
     * @brief Bullet ID for the effect when picking up the Berserker sign
     *
     * Bullet ID when generating a bullet for special effects at the sign
     * position
     */
    int pickUpBerserkerSignSpEffectBulletId{ 0 };

    /**
     * @brief Berserker succeeds in killing PC by himself Special effect ID for
     * directing
     *
     * Special effect to play a special effect when Berserker succeeds in
     * killing the PC by himself
     */
    int succeedBerserkerSelfKillingEffectId{ 0 };

    /**
     * @brief Level sync application coefficient of determination 1 white
     *
     * Soul level coefficient of whether to apply level sync
     */
    unsigned char machingLevelWhiteSignUpperRel{ 0 };

    /**
     * @brief Level sync application coefficient of determination 2 white
     *
     * Soul level coefficient of whether to apply level sync
     */
    unsigned char machingLevelWhiteSignUpperAbs{ 0 };

    /**
     * @brief Level sync application coefficient of determination 1 red
     *
     * Soul level coefficient of whether to apply level sync
     */
    unsigned char machingLevelRedSignUpperRel{ 0 };

    /**
     * @brief Level sync application coefficient of determination 2 red
     *
     * Soul level coefficient of whether to apply level sync
     */
    unsigned char machingLevelRedSignUpperAbs{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 0 White
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperWhiteSign_0{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 1 White
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperWhiteSign_1{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 2 White
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperWhiteSign_2{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 3 White
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperWhiteSign_3{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 4 White
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperWhiteSign_4{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 5 White
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperWhiteSign_5{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 6 White
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperWhiteSign_6{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 7 White
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperWhiteSign_7{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 8 White
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperWhiteSign_8{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 9 White
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperWhiteSign_9{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 10 White
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperWhiteSign_10{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 0 Red
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperRedSign_0{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 1 Red
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperRedSign_1{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 2 Red
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperRedSign_2{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 3 Red
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperRedSign_3{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 4 Red
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperRedSign_4{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 5 Red
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperRedSign_5{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 6 Red
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperRedSign_6{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 7 Red
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperRedSign_7{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 8 Red
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperRedSign_8{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 9 Red
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperRedSign_9{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 10 Red
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperRedSign_10{ 0 };

    /**
     * @brief Automatic placement interval of intrusion points
     */
    unsigned char autoInvadePoint_generateDist{ 40 };

    /**
     * @brief Intrusion point automatic placement cancellation range
     */
    unsigned char autoInvadePoint_cancelDist{ 20 };

    /**
     * @brief Global event log transmission interval
     *
     * Interval to send global event log to server
     */
    float sendGlobalEventLogIntervalTime{ 0.f };

    /**
     * @brief Solo intrusion point addition value_white sign
     */
    unsigned short addSoloBreakInPoint_White{ 0 };

    /**
     * @brief Solo intrusion point addition value_red sign
     */
    unsigned short addSoloBreakInPoint_Black{ 0 };

    /**
     * @brief Solo intrusion point addition value_intrusion
     */
    unsigned short addSoloBreakInPoint_ForceJoin{ 0 };

    /**
     * @brief Solo intrusion point addition value_Map guardian visit
     */
    unsigned short addSoloBreakInPoint_VisitorGuardian{ 0 };

    /**
     * @brief Solo intrusion point addition value_Red Scare visit
     */
    unsigned short addSoloBreakInPoint_VisitorRedHunter{ 0 };

    /**
     * @brief Invincible timer for initial sync PC
     */
    unsigned char invincibleTimer_forNetPC_initSync{ 0 };

    /**
     * @brief Invincible timer for non-initial sync PCs
     */
    unsigned char invincibleTimer_forNetPC{ 10 };

    /**
     * @brief [Red Scare] Soul rate received when the host passes through the
     * white door
     *
     * Soul that you can get red hunting when the host passes through the white
     * door = Soul required for red hunting to change from the previous Lv to
     * the current Lv * This magnification
     */
    float redHunter_HostBossAreaGetSoulRate{ 0.f };

    /**
     * @brief Decal parameter ID of the trace of wandering illusion
     *
     * Decal parameter ID of the trace that the wandering illusion puts out
     * while moving
     */
    int ghostFootprintDecalParamId{ 0 };

    /**
     * @brief Counting time for warning message display outside the multiplayer
     * limit [seconds]
     *
     * If this count time elapses while you are out of the multiplayer limit
     * distance, the multiplayer will be disbanded.
     */
    float leaveAroundHostWarningTime{ 0.f };

    /**
     * @brief Hosting cost Item ID
     *
     * ID of the cost item consumed when hosting is turned on
     */
    int hostModeCostItemId{ 0 };

    /**
     * @brief AI jump deceleration parameter
     *
     * Deceleration parameters for AI jump (0.0: constant velocity motion, 1.0:
     * maximum deceleration, speed 0 at target point)
     */
    float aIJump_DecelerateParam{ 0.f };

    /**
     * @brief Buddy Instance Deletion Guarantee Time
     *
     * The time from the death flag to the actual disappearance of the instance
     */
    float buddyDisappearDelaySec{ 0.f };

    /**
     * @brief AI jump jumping Y movement amount correction factor
     */
    float aIJump_AnimYMoveCorrectRate_onJumpOff{ 0.f };

    /**
     * @brief Stealth visibility magnification_Crouching without stealth effect
     */
    float stealthSystemSightRate_NotInStealthRigid_NotSightHide_StealthMode{
        1.f
    };

    /**
     * @brief Stealth visibility magnification_Standing in stealth ray shielded
     * area
     */
    float stealthSystemSightRate_NotInStealthRigid_SightHide_NotStealthMode{
        1.f
    };

    /**
     * @brief Stealth visibility magnification_Crouching in stealth ray shielded
     * area
     */
    float stealthSystemSightRate_NotInStealthRigid_SightHide_StealthMode{ 1.f };

    /**
     * @brief Stealth visibility magnification_Standing within a stealth hit
     */
    float stealthSystemSightRate_InStealthRigid_NotSightHide_NotStealthMode{
        1.f
    };

    /**
     * @brief Stealth visibility magnification_Crouching within a stealth hit
     */
    float stealthSystemSightRate_InStealthRigid_NotSightHide_StealthMode{ 1.f };

    /**
     * @brief Stealth visibility magnification_Stealth ray shielded area +
     * standing in stealth hit
     */
    float stealthSystemSightRate_InStealthRigid_SightHide_NotStealthMode{ 1.f };

    /**
     * @brief Stealth visibility magnification_Stealth ray shielded area +
     * crouching in stealth hit
     */
    float stealthSystemSightRate_InStealthRigid_SightHide_StealthMode{ 1.f };

    /**
     * @brief Treasure corpse default action button parameter ID
     *
     * Default action button parameter ID when "Treasure corpse" is selected in
     * the treasure box type of treasure box information for OBJ of MapStudio
     * event
     */
    int msbEventGeomTreasureInfo_actionButtonParamId_corpse{ 0 };

    /**
     * @brief Anime ID when acquiring the default item of the treasure corpse
     *
     * When "Treasure corpse" is selected in the treasure box type of the
     * treasure box information for OBJ of the MapStudio event, the default item
     * is acquired. Animation ID
     */
    int msbEventGeomTreasureInfo_itemGetAnimId_corpse{ 0 };

    /**
     * @brief Treasure chest default action button parameter ID
     *
     * Default action button parameter ID when "Treasure chest" is selected in
     * the treasure chest type of treasure chest information for OBJ of
     * MapStudio event
     */
    int msbEventGeomTreasureInfo_actionButtonParamId_box{ 0 };

    /**
     * @brief Anime ID when acquiring the default item of the treasure box
     *
     * When "Treasure chest" is selected in the treasure chest type of the
     * treasure chest information for OBJ of the MapStudio event, the default
     * item acquisition animation ID
     */
    int msbEventGeomTreasureInfo_itemGetAnimId_box{ 0 };

    /**
     * @brief Item light default action button parameter ID
     *
     * Default action button parameter ID when "Item light" is selected in the
     * treasure chest type of treasure chest information for OBJ of MapStudio
     * event
     */
    int msbEventGeomTreasureInfo_actionButtonParamId_shine{ 0 };

    /**
     * @brief Item Hikari's default item acquisition animation ID
     *
     * When "Item Hikari" is selected as the treasure chest type of the treasure
     * chest information for OBJ of the MapStudio event, the default item
     * acquisition animation ID
     */
    int msbEventGeomTreasureInfo_itemGetAnimId_shine{ 0 };

    /**
     * @brief Sign pool: Asset ID
     *
     * Assets used for sign collection
     */
    int signPuddleAssetId{ 0 };

    /**
     * @brief Sign accumulation: Sign appearance Damipoli 0
     *
     * Damipoli used to determine the display position of the sign in the sign
     * pool
     */
    int signPuddleAppearDmypolyId0{ 0 };

    /**
     * @brief Sign accumulation: Sign appearance Damipoli 1
     *
     * Damipoli used to determine the display position of the sign in the sign
     * pool
     */
    int signPuddleAppearDmypolyId1{ 0 };

    /**
     * @brief Sign accumulation: Sign appearance Damipoli 2
     *
     * Damipoli used to determine the display position of the sign in the sign
     * pool
     */
    int signPuddleAppearDmypolyId2{ 0 };

    /**
     * @brief Sign accumulation: Sign appearance Damipoli 3
     *
     * Damipoli used to determine the display position of the sign in the sign
     * pool
     */
    int signPuddleAppearDmypolyId3{ 0 };

    /**
     * @brief Rider's fall damage multiplier correction_for PC
     */
    float fallDamageRate_forRidePC{ 1.f };

    /**
     * @brief Rider's Fall Damage Multiplier Correction_for NPCs
     */
    float fallDamageRate_forRideNPC{ 1.f };

    /**
     * @brief Special effect ID when creating the old man sign of yellow robe
     */
    int OldMonkOfYellow_CreateSignSpEffectId{ 0 };

    /**
     * @brief Defeated soldier activation distance
     */
    float StragglerActivateDist{ 0.f };

    /**
     * @brief Permission to use defeated soldier items_Special effects for PC
     */
    int SpEffectId_EnableUseItem_StragglerActivate{ -1 };

    /**
     * @brief Activate defeated soldiers_Special effects for defeated soldier
     * characters
     */
    int SpEffectId_StragglerWakeUp{ -1 };

    /**
     * @brief Defeated soldiers_Special effects for subjugation targets
     */
    int SpEffectId_StragglerTarget{ -1 };

    /**
     * @brief Defeated soldiers_Special effects after hostility
     */
    int SpEffectId_StragglerOppose{ -1 };

    /**
     * @brief Time for a buddy to warp a player with a ray block [s]
     */
    float buddyWarp_TriggerTimeRayBlocked{ 10.f };

    /**
     * @brief Distance at which the buddy warps the player at a straight line
     * distance [m]
     */
    float buddyWarp_TriggerDistToPlayer{ 25.f };

    /**
     * @brief Time to judge that the buddy is stuck in the pass movement [s]
     *
     * Judgment time when the buddy is stuck in the pass movement [s]
     */
    float buddyWarp_ThresholdTimePathStacked{ 5.f };

    /**
     * @brief Distance [m] that the buddy considers to be clogged with a pass
     * move
     */
    float buddyWarp_ThresholdRangePathStacked{ 1.f };

    /**
     * @brief [Morning] AI visibility magnification
     */
    float aiSightRate_morning{ 1.f };

    /**
     * @brief [Day] AI visibility magnification
     */
    float aiSightRate_noonA{ 1.f };

    /**
     * @brief Time when the buddy and the player collide and start slipping
     * through [s]
     */
    float buddyPassThroughTriggerTime{ 0.5f };

    /**
     * @brief [Evening] AI visibility magnification
     */
    float aiSightRate_evening{ 1.f };

    /**
     * @brief [Night] AI visibility magnification
     */
    float aiSightRate_night{ 1.f };

    /**
     * @brief [Midnight] AI visibility magnification
     */
    float aiSightRate_midnightA{ 1.f };

	int unknown_0x230 { 0 };

    /**
     * @brief AI visibility magnification_place where the sun cannot be seen
     * (bright)
     */
    float aiSightRate_sunloss_light{ 1.f };

    /**
     * @brief AI visibility magnification_place where the sun cannot be seen
     * (darkness)
     */
    float aiSightRate_sunloss_dark{ 1.f };

    /**
     * @brief AI visibility magnification_place where the sun cannot be seen
     * (total darkness)
     */
    float aiSightRate_sunloss_veryDark{ 1.f };

    /**
     * @brief Stealth view angle attenuation factor_ crouching without stealth
     * effect
     */
    float
        stealthSystemSightAngleReduceRate_NotInStealthRigid_NotSightHide_StealthMode{
            0.f
        };

    /**
     * @brief Stealth view angle attenuation rate_Standing in stealth ray
     * shielded area
     */
    float
        stealthSystemSightAngleReduceRate_NotInStealthRigid_SightHide_NotStealthMode{
            0.f
        };

    /**
     * @brief Stealth visibility angle attenuation _ crouching in stealth ray
     * shielded area
     */
    float
        stealthSystemSightAngleReduceRate_NotInStealthRigid_SightHide_StealthMode{
            0.f
        };

    /**
     * @brief Stealth view angle attenuation rate_Standing within stealth hit
     */
    float
        stealthSystemSightAngleReduceRate_InStealthRigid_NotSightHide_NotStealthMode{
            0.f
        };

    /**
     * @brief Stealth field of view angle attenuation rate_ crouching within
     * stealth hit
     *
     * Stealth view angle attenuation rate_ crouching within stealth hit
     */
    float
        stealthSystemSightAngleReduceRate_InStealthRigid_NotSightHide_StealthMode{
            0.f
        };

    /**
     * @brief Stealth view angle attenuation rate_Stealth ray shielded area +
     * standing in stealth hit
     */
    float
        stealthSystemSightAngleReduceRate_InStealthRigid_SightHide_NotStealthMode{
            0.f
        };

    /**
     * @brief Stealth view angle attenuation rate_Stealth ray shielded area +
     * crouching in stealth hit
     */
    float
        stealthSystemSightAngleReduceRate_InStealthRigid_SightHide_StealthMode{
            0.f
        };

    /**
     * @brief Weather lottery conditions_morning_start time_hour
     *
     * Weather lottery conditions_morning_start time_hour (SEQ09371)
     */
    unsigned char weatherLotConditionStart_Morning_Hour{ 7 };

    /**
     * @brief Weather lottery conditions_morning_start time_minutes
     *
     * Weather lottery conditions_morning_start time_minutes (SEQ09371)
     */
    unsigned char weatherLotConditionStart_Morning_Minute{ 0 };

    /**
     * @brief Weather lottery conditions_day_start time_hour
     *
     * Weather lottery conditions_day_start time_hour (SEQ09371)
     */
    unsigned char weatherLotConditionStart_Day_Hour{ 12 };

    /**
     * @brief Weather lottery conditions_day_start time_minutes
     *
     * Weather lottery conditions_day_start time_minutes (SEQ09371)
     */
    unsigned char weatherLotConditionStart_Day_Minute{ 0 };

    /**
     * @brief Weather lottery conditions_evening_start time_hour
     *
     * Weather lottery conditions_evening_start time_hour (SEQ09371)
     */
    unsigned char weatherLotConditionStart_Evening_Hour{ 17 };

    /**
     * @brief Weather lottery conditions_evening_start time_minutes
     *
     * Weather lottery conditions_evening_start time_minutes (SEQ09371)
     */
    unsigned char weatherLotConditionStart_Evening_Minute{ 0 };

    /**
     * @brief Weather lottery conditions_night_start time_hour
     *
     * Weather lottery conditions_night_start time_hour (SEQ09371)
     */
    unsigned char weatherLotConditionStart_Night_Hour{ 19 };

    /**
     * @brief Weather lottery conditions_night_start time_minutes
     *
     * Weather lottery conditions_night_start time_minutes (SEQ09371)
     */
    unsigned char weatherLotConditionStart_Night_Minute{ 0 };

    /**
     * @brief Weather lottery conditions_dawn_start time_hour
     *
     * Weather lottery conditions_dawn_start time_hour (SEQ09371)
     */
    unsigned char weatherLotConditionStart_DayBreak_Hour{ 5 };

    /**
     * @brief Weather lottery conditions_dawn_start time_minutes
     *
     * Weather lottery conditions_dawn_start time_minutes (SEQ09371)
     */
    unsigned char weatherLotConditionStart_DayBreak_Minute{ 0 };

    /**
     * @brief Weather lottery conditions_reservation
     *
     * (dummy8)
     */
    unsigned char weatherLotCondition_reserved[2];

    /**
     * @brief Player Light intensity scale change time zone_start time_hour
     *
     * Player Light Intensity Scale Change Time Zone_Start Time_Hour (SEQ16562)
     */
    unsigned char pclightScaleChangeStart_Hour{ 18 };

    /**
     * @brief Player Light intensity scale change time zone_start time_minute
     *
     * Player Light Intensity Scale Change Time Zone_Start Time_Minute
     * (SEQ16562)
     */
    unsigned char pclightScaleChangeStart_Minute{ 0 };

    /**
     * @brief Player Light intensity scale change time zone_end time_hour
     *
     * Player Light intensity scale change time zone_end time_hour (SEQ16562)
     */
    unsigned char pclightScaleChangeEnd_Hour{ 5 };

    /**
     * @brief Player Light intensity scale change time zone_end time_minute
     *
     * Player Light Intensity Scale Change Time Zone_End Time_Minute (SEQ16562)
     */
    unsigned char pclightScaleChangeEnd_Minute{ 0 };

    /**
     * @brief Time zone Player light intensity scale change value
     *
     * Time zone Player light intensity scale change value (SEQ16562)
     */
    float pclightScaleByTimezone{ 1.f };

    /**
     * @brief Large Rune: Greater Demon Buddy Summon Buddy Special Effect ID
     */
    int bigRuneGreaterDemon_SummonBuddySpecialEffectId_Buddy{ -1 };

    /**
     * @brief Large Rune: Special effect ID given to PC when summoning Greater
     * Demon Buddy
     */
    int bigRuneGreaterDemon_SummonBuddySpecialEffectId_Pc{ -1 };

    /**
     * @brief Base Bonfire Warp ID
     *
     * Base bonfire bonfire warp parameter ID
     */
    int homeBonfireParamId{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 11 White
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperWhiteSign_11{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 12 White
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperWhiteSign_12{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 13 White
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperWhiteSign_13{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 14 White
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperWhiteSign_14{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 15 White
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperWhiteSign_15{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 16 White
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperWhiteSign_16{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 17 White
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperWhiteSign_17{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 18 White
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperWhiteSign_18{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 19 White
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperWhiteSign_19{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 20 White
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperWhiteSign_20{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 21 White
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperWhiteSign_21{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 22 White
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperWhiteSign_22{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 23 White
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperWhiteSign_23{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 24 White
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperWhiteSign_24{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 25 White
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperWhiteSign_25{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 11 Red
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperRedSign_11{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 12 Red
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperRedSign_12{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 13 Red
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperRedSign_13{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 14 Red
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperRedSign_14{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 15 Red
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperRedSign_15{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 16 Red
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperRedSign_16{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 17 Red
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperRedSign_17{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 18 Red
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperRedSign_18{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 19 Red
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperRedSign_19{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 20 Red
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperRedSign_20{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 21 Red
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperRedSign_21{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 22 Red
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperRedSign_22{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 23 Red
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperRedSign_23{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 24 Red
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperRedSign_24{ 0 };

    /**
     * @brief Level Sync Applicability Judgment Maximum Weapon Enhancement Level
     * Coefficient 25 Red
     *
     * Maximum weapon enhancement level factor for whether to apply level sync
     */
    unsigned char machingWeaponLevelUpperRedSign_25{ 0 };

    /**
     * @brief Menu time zone display_morning_start time_hour
     *
     * Menu time zone display_morning_start time_hour (SEQ22108)
     */
    unsigned char menuTimezoneStart_Morning_Hour{ 7 };

    /**
     * @brief Menu time zone display_morning_start time_minute
     *
     * Menu time zone display_morning_start time_minute (SEQ22108)
     */
    unsigned char menuTimezoneStart_Morning_Minute{ 0 };

    /**
     * @brief Menu time zone display_day 1_start time_hour
     *
     * Menu time zone display_day 1_start time_hour (SEQ22108)
     */
    unsigned char menuTimezoneStart_Day1_Hour{ 12 };

    /**
     * @brief Time zone display for menu_Lunch 1_Start time_Minute
     *
     * Menu time zone display_day 1_start time_minute (SEQ22108)
     */
    unsigned char menuTimezoneStart_Day1_Minute{ 0 };

    /**
     * @brief Menu time zone display_day 2_start time_hour
     *
     * Menu time zone display_day 2_start time_hour (SEQ22108)
     */
    unsigned char menuTimezoneStart_Day2_Hour{ 12 };

    /**
     * @brief Time zone display for menu_Lunch 2_Start time_Minute
     *
     * Time zone display for menu_Lunch 2_Start time_Minute (SEQ22108)
     */
    unsigned char menuTimezoneStart_Day2_Minute{ 0 };

    /**
     * @brief Menu time zone display_evening_start time_hour
     *
     * Menu time zone display_evening_start time_hour (SEQ22108)
     */
    unsigned char menuTimezoneStart_Evening_Hour{ 17 };

    /**
     * @brief Menu time zone display_evening_start time_minute
     *
     * Menu time zone display_evening_start time_minute (SEQ22108)
     */
    unsigned char menuTimezoneStart_Evening_Minute{ 0 };

    /**
     * @brief Menu time zone display_night_start time_hour
     *
     * Menu time zone display_night_start time_hour (SEQ22108)
     */
    unsigned char menuTimezoneStart_Night_Hour{ 19 };

    /**
     * @brief Menu time zone display_night_start time_minute
     *
     * Menu time zone display_night_start time_minute (SEQ22108)
     */
    unsigned char menuTimezoneStart_Night_Minute{ 0 };

    /**
     * @brief Menu time zone display_midnight_start time_hour
     *
     * Menu time zone display_midnight_start time_hour (SEQ22108)
     */
    unsigned char menuTimezoneStart_Midnight_Hour{ 5 };

    /**
     * @brief Menu time zone display_midnight_start time_minute
     *
     * Menu time zone display_midnight_start time_minute (SEQ22108)
     */
    unsigned char menuTimezoneStart_Midnight_Minute{ 0 };

    /**
     * @brief Network PC threat level notification_threat level
     *
     * Network PC Threat Level Notification_Threat Level (SEQ21950)
     */
    unsigned short remotePlayerThreatLvNotify_ThreatLv{ 0 };

    /**
     * @brief Network PC threat level notification_notification distance [m]
     *
     * Network PC Threat Level Notification_Notification Distance [m] (SEQ21950)
     */
    float remotePlayerThreatLvNotify_NotifyDist{ 0.f };

    /**
     * @brief Network PC threat level notification_notification end distance [m]
     *
     * Network PC threat level notification_notification end distance [m]
     * (SEQ21950)
     */
    float remotePlayerThreatLvNotify_EndNotifyDist{ 0.f };

    /**
     * @brief Default extended distance of map point discovery area [m]
     *
     * The default extended distance for the map point discovery area. When the
     * "discovery area overwrite area" of the map point is invalid (-1), the
     * discovery area is generated by expanding from its own area. Its extended
     * distance
     */
    float worldMapPointDiscoveryExpandRange{ 0.f };

    /**
     * @brief Map point participation area default extended distance [m]
     *
     * The default extended distance for the map point's entry area. When the
     * "participation area overwrite area" of the map point is invalid (-1), the
     * participation area is generated by expanding from its own area. Its
     * extended distance
     */
    float worldMapPointReentryExpandRange{ 0.f };

    /**
     * @brief Network PC threat level notification_Notification time [seconds]
     *
     * Network PC Threat Level Notification_Notification Time [seconds]
     * (SEQ21950)
     */
    unsigned short remotePlayerThreatLvNotify_NotifyTime{ 0 };

    /**
     * @brief Number of "re-invasion items" to be given at the time of
     * intrusion: Intrusion item_Greater system (ID102)
     */
    unsigned short breakIn_A_rebreakInGoodsNum{ 0 };

    /**
     * @brief Tool item ID of "re-invasion item" given at the time of intrusion:
     * Invasion item_Greater system (ID102)
     */
    int breakIn_A_rebreakInGoodsId{ -1 };

    /**
     * @brief Big jump to get off _ sky SFXID
     */
    int rideJumpoff_SfxId{ -1 };

    /**
     * @brief Big jump to get off_SFX base point offset in the sky
     */
    float rideJumpoff_SfxHeightOffset{ 0.f };

    /**
     * @brief In the big jump area to get off _ Special effect ID for PC horse
     */
    int rideJumpoff_SpEffectId{ -1 };

    /**
     * @brief Special effect ID applied to _PC in the large jump area to get off
     *
     * Special effect ID for _PC in the big jump area to get off
     */
    int rideJumpoff_SpEffectIdPc{ -1 };

    /**
     * @brief Main menu_Item creation_Open event flag
     *
     * Main menu → Event flag to unlock the item creation menu
     */
    unsigned int unlockExchangeMenuEventFlagId{ 0 };

    /**
     * @brief Main menu_message_open event flag
     *
     * Main menu → Event flag to unlock the message menu
     */
    unsigned int unlockMessageMenuEventFlagId{ 0 };

    /**
     * @brief Number of "re-invasion items" to be given at the time of
     * intrusion: Intrusion item_Greater disposable (ID111)
     */
    unsigned short breakInOnce_A_rebreakInGoodsNum{ 0 };

    /**
     * @brief Number of "re-invasion items" to be given at the time of invasion:
     * Invasion item_Volcano building system (ID112)
     */
    unsigned short breakIn_B_rebreakInGoodsNum{ 0 };

    /**
     * @brief Tool item ID of "re-invasion item" given at the time of intrusion:
     * Invasion item_Greater disposable (ID111)
     */
    int breakInOnce_A_rebreakInGoodsId{ -1 };

    /**
     * @brief Tool item ID of "re-invasion item" given at the time of invasion:
     * Invasion item_Volcano building system (ID112)
     */
    int breakIn_B_rebreakInGoodsId{ -1 };

    /**
     * @brief Time to disable action button operation by holding down the action
     * button
     */
    float actionButtonInputCancelTime{ -1.f };

    /**
     * @brief Clear bonus acquisition delay time after boss defeat processing
     */
    float blockClearBonusDelayTime{ 7.f };

    /**
     * @brief [Unused] (Refer to SEQ25048) Distance from the PC to determine the
     * bonfire invalidation by the enemy [m]
     *
     * [Unused] (Refer to SEQ25048) Distance from PC to bonfire that determines
     * invalidation of bonfire by enemy [m] (0 or less: PC distance is not
     * checked. Checked at all distances)
     */
    float bonfireCheckEnemyRange{ -1.f };

    int unknown_0x2f0{ 0 };

    int unknown_0x2f4{ 0 };

    int unknown_0x2f8{ 0 };

    int unknown_0x2fc{ 0 };

    int unknown_0x300{ 0 };

    int unknown_0x304{ 0 };

    int unknown_0x308{ 0 };

    int unknown_0x30c{ 0 };

    float unknown_0x310{ 0.0f };

    float unknown_0x314{ 0.0f };

    float unknown_0x318{ 0.0f };

    float unknown_0x31c{ 0.0f };

    float unknown_0x320{ 0.0f };

    float unknown_0x324{ 0.0f };

    float unknown_0x328{ 0.0f };

    float unknown_0x32c{ 0.0f };

    float unknown_0x330{ 0.0f };

    float unknown_0x334{ 0.0f };

    float unknown_0x338{ 0.0f };

    float unknown_0x33c{ 0.0f };

    float unknown_0x340{ 0.0f };

    float unknown_0x344{ 0.0f };

    int unknown_0x34c{ 0 };

    int unknown_0x350{ 0 };

    int unknown_0x354{ 0 };

    int unknown_0x358{ 0 };

    int unknown_0x35c{ 0 };

    int unknown_0x360{ 0 };

    int unknown_0x364{ 0 };

    int unknown_0x368{ 0 };

    int unknown_0x36c{ 0 };

    int unknown_0x370{ 0 };

    int unknown_0x374{ 0 };

    int unknown_0x378{ 0 };

    int unknown_0x37c{ 0 };

    int unknown_0x380{ 0 };

    int unknown_0x384{ 0 };

    int unknown_0x388{ 0 };

    int unknown_0x38c{ 0 };

    int unknown_0x390{ 0 };

    int unknown_0x394{ 0 };

    /**
     * @brief endPad
     */
    unsigned char endPad[108];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::GAME_SYSTEM_COMMON_PARAM_ST) == 1024,
    "GAME_SYSTEM_COMMON_PARAM_ST paramdef size does not match detected size");
