/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 *
 */
struct NETWORK_PARAM_ST {
    /**
     * @brief Sign height offset [m]
     */
    float signVerticalOffset{ 0.f };

    /**
     * @brief Sign position correction maximum distance [m]
     */
    float maxSignPosCorrectionRange{ 0.f };

    /**
     * @brief Summon desired timeout time [seconds]
     */
    float summonTimeoutTime{ 0.f };

    unsigned char pad_0[4];

    /**
     * @brief Message display interval [seconds] during registration of
     * signature accumulation
     */
    float signPuddleActiveMessageIntervalSec{ 1.f };

    /**
     * @brief Key guide vertical range [m]
     */
    float keyGuideHeight_0{ 1.f };

    /**
     * @brief Waiting time for reacquisition of summoning sign (during
     * depopulation) [seconds]
     */
    float reloadSignIntervalTime1{ 1.f };

    /**
     * @brief Summon sign reacquisition waiting time [seconds]
     */
    float reloadSignIntervalTime2{ 1.f };

    /**
     * @brief Maximum number of summon signs you can have (overall)
     *
     * Actually u8 is enough
     */
    unsigned int reloadSignTotalCount_0{ 1 };

    /**
     * @brief Maximum number of summon signs you can have (cell)
     *
     * Actually u8 is enough
     */
    unsigned int reloadSignCellCount_0{ 1 };

    /**
     * @brief Summon sign update waiting time [seconds]
     */
    float updateSignIntervalTime{ 1.f };

    /**
     * @brief Exclusive horizontal range for drawing between summon signs [m]
     */
    float basicExclusiveRange_0{ 1.f };

    /**
     * @brief Exclusive vertical range for drawing between summon signs [m]
     */
    float basicExclusiveHeight_0{ 1.f };

    /**
     * @brief Summon sign character model drawing waiting time [seconds]
     */
    float previewChrWaitingTime{ 1.f };

    /**
     * @brief Summon sign PC drawing distance [m]
     */
    float signVisibleRange_0{ 1.f };

    /**
     * @brief Summon sign acquisition cell range (horizontal)
     *
     * Actually u8 is enough
     */
    unsigned int cellGroupHorizontalRange_0{ 1 };

    /**
     * @brief Summon sign acquisition cell range (upward)
     *
     * Actually u8 is enough
     */
    unsigned int cellGroupTopRange_0{ 1 };

    /**
     * @brief Summon sign acquisition cell range (downward)
     *
     * Actually u8 is enough
     */
    unsigned int cellGroupBottomRange_0{ 1 };

    /**
     * @brief White spirit sign display time limit lower limit magnification
     */
    float minWhitePhantomLimitTimeScale{ 1.f };

    /**
     * @brief Small spirit sign display time limit lower limit magnification
     */
    float minSmallPhantomLimitTimeScale{ 1.f };

    /**
     * @brief White spirit sign keyword extension magnification
     */
    float whiteKeywordLimitTimeScale{ 1.f };

    /**
     * @brief Ghost sign keyword extension magnification
     */
    float smallKeywordLimitTimeScale{ 1.f };

    /**
     * @brief Dark Spirit Sign Keyword Extension Magnification
     */
    float blackKeywordLimitTimeScale{ 1.f };

    /**
     * @brief Dragon Spirit Sign Keyword Extension Magnification
     */
    float dragonKeywordLimitTimeScale{ 1.f };

    /**
     * @brief Sign acquisition limit
     *
     * Actually u8 is enough
     */
    unsigned int singGetMax{ 1 };

    /**
     * @brief Sign download span
     */
    float signDownloadSpan{ 1.f };

    /**
     * @brief Sign upload span
     */
    float signUpdateSpan{ 1.f };

    /**
     * @brief reserve
     */
    unsigned char signPad[4];

    /**
     * @brief Number of intruders acquired
     */
    unsigned int maxBreakInTargetListCount{ 1 };

    /**
     * @brief Intrusion request interval [seconds]
     */
    float breakInRequestIntervalTimeSec{ 4.f };

    /**
     * @brief Intrusion request timeout time [seconds]
     */
    float breakInRequestTimeOutSec{ 20.f };

    unsigned char unknown_0x7c{ 0 };

    unsigned char pad_1[3];

    /**
     * @brief Key guide horizontal range [m]
     */
    float keyGuideRange{ 1.f };

    /**
     * @brief Key guide vertical range [m]
     */
    float keyGuideHeight_1{ 1.f };

    /**
     * @brief Number of blood characters acquired (overall)
     *
     * Actually u8 is enough
     */
    unsigned int reloadSignTotalCount_1{ 1 };

    /**
     * @brief Number of blood characters acquired (cell, new order)
     *
     * Actually u8 is enough
     */
    unsigned int reloadNewSignCellCount{ 1 };

    /**
     * @brief Number of blood characters acquired (cell, random)
     *
     * Actually u8 is enough
     */
    unsigned int reloadRandomSignCellCount{ 1 };

    /**
     * @brief Upper limit of the number of blood characters that can be
     * possessed (overall)
     *
     * Actually u16 is enough
     */
    unsigned int maxSignTotalCount_0{ 1 };

    /**
     * @brief Upper limit of the number of blood characters that can be
     * possessed (cell)
     *
     * Actually u8 is enough
     */
    unsigned int maxSignCellCount_0{ 1 };

    /**
     * @brief Blood character drawing exclusive horizontal range [m]
     */
    float basicExclusiveRange_1{ 1.f };

    /**
     * @brief Blood character drawing exclusive vertical range [m]
     */
    float basicExclusiveHeight_1{ 1.f };

    /**
     * @brief Blood character PC drawing distance [m]
     */
    float signVisibleRange_1{ 1.f };

    /**
     * @brief Maximum number of written blood characters history
     *
     * Actually u8 is enough
     */
    unsigned int maxWriteSignCount{ 1 };

    /**
     * @brief Maximum number of blood characters read
     *
     * Actually u8 is enough
     */
    unsigned int maxReadSignCount{ 1 };

    /**
     * @brief Blood character reacquisition waiting time [seconds]
     */
    float reloadSignIntervalTime_0{ 1.f };

    /**
     * @brief Blood character acquisition cell range (horizontal)
     *
     * Actually u8 is enough
     */
    unsigned int cellGroupHorizontalRange_1{ 1 };

    /**
     * @brief Blood character acquisition cell range (upward)
     *
     * Actually u8 is enough
     */
    unsigned int cellGroupTopRange_1{ 1 };

    /**
     * @brief Blood character acquisition cell range (downward)
     *
     * Actually u8 is enough
     */
    unsigned int cellGroupBottomRange_1{ 1 };

    /**
     * @brief Blood character data retention period upper limit [seconds]
     *
     * Actually u16 is enough
     */
    unsigned int lifeTime_0{ 1 };

    /**
     * @brief Blood character download interval
     */
    float downloadSpan_0{ 0.f };

    /**
     * @brief Blood character evaluation number Download interval
     */
    float downloadEvaluationSpan{ 0.f };

    unsigned char pad_2[4];

    /**
     * @brief Allowable distance between bloodstain position and illusion start
     * position [m]
     *
     * If the distance between the bloodstain position and the illusion start
     * position is farther than this value, the server will not be registered.
     */
    float deadingGhostStartPosThreshold{ 1.f };

    /**
     * @brief Key guide vertical range [m]
     */
    float keyGuideHeight_2{ 1.f };

    /**
     * @brief Player Bloodstain Key Guide Horizontal Range [m]
     */
    float keyGuideRangePlayer{ 1.f };

    /**
     * @brief Player Bloodstain Key Guide Vertical Range [m]
     */
    float keyGuideHeightPlayer{ 1.f };

    /**
     * @brief Number of blood stains acquired (overall)
     *
     * Actually u8 is enough
     */
    unsigned int reloadSignTotalCount_2{ 1 };

    /**
     * @brief Number of blood stains obtained (cell)
     *
     * Actually u8 is enough
     */
    unsigned int reloadSignCellCount_1{ 1 };

    /**
     * @brief Upper limit of the number of blood stains that can be possessed
     * (overall)
     *
     * Actually u16 is enough
     */
    unsigned int maxSignTotalCount_1{ 1 };

    /**
     * @brief Maximum number of blood stains (cell)
     *
     * Actually u8 is enough
     */
    unsigned int maxSignCellCount_1{ 1 };

    /**
     * @brief Waiting time for reacquisition of blood stains [seconds]
     */
    float reloadSignIntervalTime_1{ 1.f };

    /**
     * @brief Bloodstain PC drawing distance [m]
     */
    float signVisibleRange_2{ 1.f };

    /**
     * @brief Exclusive horizontal range for drawing between blood stains [m]
     */
    float basicExclusiveRange_2{ 1.f };

    /**
     * @brief Exclusive vertical range for drawing between blood stains [m]
     */
    float basicExclusiveHeight_2{ 1.f };

    /**
     * @brief Blood stain acquisition cell range (horizontal)
     *
     * Actually u8 is enough
     */
    unsigned int cellGroupHorizontalRange_2{ 1 };

    /**
     * @brief Blood stain acquisition cell range (upward)
     *
     * Actually u8 is enough
     */
    unsigned int cellGroupTopRange_2{ 1 };

    /**
     * @brief Blood stain acquisition cell range (downward)
     *
     * Actually u8 is enough
     */
    unsigned int cellGroupBottomRange_2{ 1 };

    /**
     * @brief Bloodstain data retention period upper limit [seconds]
     *
     * Actually u16 is enough
     */
    unsigned int lifeTime_1{ 1 };

    /**
     * @brief Death illusion record total time [seconds]
     */
    float recordDeadingGhostTotalTime{ 0.f };

    /**
     * @brief Minimum recording time of death illusion [seconds]
     *
     * Death illusions less than this recording time will not register the
     * server
     */
    float recordDeadingGhostMinTime{ 5.f };

    /**
     * @brief Bloodstain download interval
     */
    float downloadSpan_1{ 0.f };

    /**
     * @brief Petrified blood stain drawing limit distance [m]
     *
     * For open fields. When a stone statue is generated, it can be generated if
     * the distance between the PC and the generation position is greater than
     * or equal to this value.
     */
    float statueCreatableDistance{ 80.f };

    /**
     * @brief Number of illusions acquired (overall)
     *
     * Actually u8 is enough
     */
    unsigned int reloadGhostTotalCount{ 1 };

    /**
     * @brief Number of illusions acquired (cell)
     *
     * Actually u8 is enough
     */
    unsigned int reloadGhostCellCount{ 1 };

    /**
     * @brief Maximum number of illusions you can have (overall)
     *
     * Actually u16 is enough
     */
    unsigned int maxGhostTotalCount{ 1 };

    /**
     * @brief Hostile PC replay recording start distance [m]
     */
    float distanceOfBeginRecordVersus{ 1.f };

    /**
     * @brief Hostile PC replay recording end distance [m]
     */
    float distanceOfEndRecordVersus{ 1.f };

    /**
     * @brief Wandering illusion upload interval [seconds]
     */
    float updateWanderGhostIntervalTime{ 1.f };

    /**
     * @brief Battle illusion upload interval [seconds]
     */
    float updateVersusGhostIntervalTime{ 1.f };

    /**
     * @brief Phantom recording time [seconds]
     */
    float recordWanderingGhostTime{ 1.f };

    /**
     * @brief Minimum recording time of wandering illusion [seconds]
     *
     * Wandering illusions less than this recording time do not register the
     * server
     */
    float recordWanderingGhostMinTime{ 5.f };

    /**
     * @brief Kagaribi illusion upload interval [seconds]
     */
    float updateBonfireGhostIntervalTime{ 1.f };

    /**
     * @brief Phantom reproduction distance (in the field of view) [seconds]
     */
    float replayGhostRangeOnView{ 1.f };

    /**
     * @brief Phantom playback distance (out of field of view) [seconds]
     */
    float replayGhostRangeOutView{ 1.f };

    /**
     * @brief Kagaribi illusion Playing time [seconds]
     */
    float replayBonfireGhostTime{ 1.f };

    /**
     * @brief Kagaribi illusion placement minimum distance [seconds]
     *
     * Do not place bonfire illusions less than this distance from the bonfire
     */
    float minBonfireGhostValidRange{ 1.f };

    /**
     * @brief Kagaribi illusion placement maximum distance [seconds]
     *
     * Do not place bonfire illusions beyond this distance from the bonfire
     */
    float maxBonfireGhostValidRange{ 1.f };

    /**
     * @brief Phantom playback interval lower limit [seconds]
     */
    float minReplayIntervalTime{ 1.f };

    /**
     * @brief Phantom playback interval upper limit [seconds]
     */
    float maxReplayIntervalTime{ 1.f };

    /**
     * @brief Phantom periodic acquisition interval [seconds]
     */
    float reloadGhostIntervalTime{ 1.f };

    /**
     * @brief Phantom acquisition cell range (horizontal)
     *
     * Actually u8 is enough
     */
    unsigned int cellGroupHorizontalRange_3{ 1 };

    /**
     * @brief Phantom acquisition cell range (upward)
     *
     * Actually u8 is enough
     */
    unsigned int cellGroupTopRange_3{ 1 };

    /**
     * @brief Phantom bonfire mode phantom parameter ID (codename)
     *
     * Phantom bonfire mode phantom parameter ID used when codename matches
     */
    int replayBonfirePhantomParamIdForCodename{ 0 };

    /**
     * @brief Phantom bonfire mode playback applicable distance
     */
    float replayBonfireModeRange{ 1.f };

    /**
     * @brief Phantom bonfire mode phantom parameter ID
     */
    int replayBonfirePhantomParamId{ 0 };

    /**
     * @brief reserve
     */
    unsigned char ghostpad[4];

    /**
     * @brief Ring search interval [seconds]
     */
    float reloadVisitListCoolTime{ 1.f };

    /**
     * @brief Maximum number of rescue blue spirits appearing
     *
     * Actually u8 is enough
     */
    unsigned int maxCoopBlueSummonCount{ 1 };

    /**
     * @brief Upper limit of the number of bell guard ghosts that appear
     *
     * Actually u8 is enough
     */
    unsigned int maxBellGuardSummonCount{ 1 };

    /**
     * @brief Number of ring search destinations acquired
     */
    unsigned int maxVisitListCount{ 1 };

    /**
     * @brief Relief Blue Spirit reload time minimum [sec]
     */
    float reloadSearch_CoopBlue_Min{ 0.f };

    /**
     * @brief Relief Blue Spirit reload time maximum [sec]
     */
    float reloadSearch_CoopBlue_Max{ 0.f };

    /**
     * @brief Kanemori reload time minimum [sec]
     */
    float reloadSearch_BellGuard_Min{ 0.f };

    /**
     * @brief Kanemori reload time maximum [sec]
     */
    float reloadSearch_BellGuard_Max{ 0.f };

    /**
     * @brief Mouse King Reload Time Minimum [sec]
     */
    float reloadSearch_RatKing_Min{ 0.f };

    /**
     * @brief Mouse King Reload Time Maximum [sec]
     */
    float reloadSearch_RatKing_Max{ 0.f };

    /**
     * @brief reserve
     */
    unsigned char visitpad00[8];

    /**
     * @brief SRTT upper limit [milliseconds]
     */
    float srttMaxLimit{ 1000.f };

    /**
     * @brief SRTT upper limit (when stable) [milliseconds]
     */
    float srttMeanLimit{ 1000.f };

    /**
     * @brief RTT mean deviation upper limit [milliseconds]
     */
    float srttMeanDeviationLimit{ 1000.f };

    /**
     * @brief Dark spirit time limit Acceleration time [seconds]
     */
    float darkPhantomLimitBoostTime{ 1000.f };

    /**
     * @brief Dark spirit time limit acceleration time magnification
     */
    float darkPhantomLimitBoostScale{ 1000.f };

    /**
     * @brief Multiplayer invalidation life
     */
    float multiplayDisableLifeTime{ 1.f };

    /**
     * @brief Abyss Spirit Multiplayer Count
     *
     * The number of times the abyss spirit enters the host in the abyss area
     */
    unsigned char abyssMultiplayLimit{ 10 };

    /**
     * @brief Minimum time for a ghost to warp [seconds]
     */
    unsigned char phantomWarpMinimumTime{ 5 };

    /**
     * @brief Delay time until returning after using black crystal [seconds]
     */
    unsigned char phantomReturnDelayTime{ 5 };

    /**
     * @brief Time-out time waiting for disconnection
     */
    unsigned char terminateTimeoutTime{ 30 };

    /**
     * @brief Penalty addition value without LAN
     */
    unsigned short penaltyPointLanDisconnect{ 0 };

    /**
     * @brief Penalty addition value for sign-out
     */
    unsigned short penaltyPointSignout{ 0 };

    /**
     * @brief Penalty addition value due to power failure
     */
    unsigned short penaltyPointReboot{ 0 };

    /**
     * @brief Penalty value that activates the penalty
     */
    unsigned short penaltyPointBeginPenalize{ 0 };

    /**
     * @brief Sales time limit for "Line Reason" [seconds]
     */
    float penaltyForgiveItemLimitTime{ 0.f };

    /**
     * @brief Area search rate: Relief Blue Spirit [0-100]
     *
     * Percentage of searching for intrusion targets from all areas (%)
     */
    unsigned char allAreaSearchRate_CoopBlue{ 0 };

    /**
     * @brief Area search rate: Retribution Blue Spirit [0-100]
     *
     * Percentage of searching for intrusion targets from all areas (%)
     */
    unsigned char allAreaSearchRate_VsBlue{ 0 };

    /**
     * @brief Area search rate: Kanemori Ashrei [0-100]
     *
     * Percentage of searching for intrusion targets from all areas (%)
     */
    unsigned char allAreaSearchRate_BellGuard{ 0 };

    /**
     * @brief HP recovery rate at the time of blood character evaluation [0-100]
     */
    unsigned char bloodMessageEvalHealRate{ 100 };

    /**
     * @brief Kogane Rei Success Return Host Reward ID
     */
    unsigned int smallGoldSuccessHostRewardId{ 0 };

    /**
     * @brief Play area invalidation distance near the door [m]
     *
     * The area around the black door that separates the multiplayer area is set
     * to the systematically invalid play area (-1). At that time, make the
     * invalid area thicker with this parameter on the thinner side of the OBJ's
     * bounding box with a black door.
     */
    float doorInvalidPlayAreaExtents{ 1.f };

    /**
     * @brief Maximum number of simultaneous displays of signs
     */
    unsigned char signDisplayMax{ 10 };

    /**
     * @brief Maximum number of blood stains displayed at the same time
     */
    unsigned char bloodStainDisplayMax{ 7 };

    /**
     * @brief Maximum number of blood characters displayed at the same time
     */
    unsigned char bloodMessageDisplayMax{ 3 };

    unsigned char pad00[9];

    unsigned char pad10[32];

    /**
     * @brief Summon message is displayed at interval [seconds]
     */
    float summonMessageInterval{ 1.f };

    /**
     * @brief Host periodic update request interval [seconds]
     */
    float hostRegisterUpdateTime{ 1.f };

    /**
     * @brief Host guest join wait timeout time [seconds]
     */
    float hostTimeOutTime{ 1.f };

    /**
     * @brief Authentication wait timeout time from guest host [seconds]
     */
    float guestUpdateTime{ 1.f };

    /**
     * @brief Guest PlayNo Sync wait timeout time [seconds]
     */
    float guestPlayerNoTimeOutTime{ 1.f };

    /**
     * @brief Host PlayNo Sync wait timeout time [seconds]
     */
    float hostPlayerNoTimeOutTime{ 1.f };

    /**
     * @brief RequestSearchQuickMatch limit value
     *
     * Actually u8 is enough
     */
    unsigned int requestSearchQuickMatchLimit{ 1 };

    /**
     * @brief Maximum number of people when searching for avatar battles
     * (unused)
     *
     * Actually u8 is enough
     */
    unsigned int AvatarMatchSearchMax{ 1 };

    /**
     * @brief Minimum number of people when searching for battle royale (unused)
     *
     * Actually u8 is enough
     */
    unsigned int BattleRoyalMatchSearchMin{ 1 };

    /**
     * @brief Maximum number of people when searching for battle royale (unused)
     *
     * Actually u8 is enough
     */
    unsigned int BattleRoyalMatchSearchMax{ 1 };

    unsigned char pad11[8];

    /**
     * @brief Maximum number of people to get a list of visitors
     *
     * Actually u8 is enough
     */
    unsigned int VisitorListMax{ 1 };

    /**
     * @brief Time-out waiting for visit
     */
    float VisitorTimeOutTime{ 1.f };

    /**
     * @brief Visitor list download interval [seconds]
     */
    float DownloadSpan{ 1.f };

    /**
     * @brief Visit search message display interval [seconds]
     *
     * Display interval [seconds] of messages sent by visiting guests while
     * searching for a destination
     */
    float VisitorGuestRequestMessageIntervalSec{ 1.f };

    /**
     * @brief Wandering illusion life
     */
    float wanderGhostIntervalLifeTime{ 40.f };

    unsigned char pad13[12];

    /**
     * @brief Yellow robe's old man waiting time out
     */
    float YellowMonkTimeOutTime{ 1.f };

    /**
     * @brief Yellow robe list download interval
     */
    float YellowMonkDownloadSpan{ 1.f };

    /**
     * @brief Yellow robe's whole flow time-out
     */
    float YellowMonkOverallFlowTimeOutTime{ 1.f };

    unsigned char pad14_0[4];

    unsigned char pad14_1[8];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::NETWORK_PARAM_ST) == 632,
    "NETWORK_PARAM_ST paramdef size does not match detected size");
