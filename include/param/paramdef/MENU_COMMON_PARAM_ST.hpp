/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct MENU_COMMON_PARAM_ST {
    float soloPlayDeath_ToFadeOutTime{ 0 };
    float partyGhostDeath_ToFadeOutTime{ 0 };
    int playerMaxHpLimit{ 0 };
    int playerMaxMpLimit{ 0 };
    int playerMaxSpLimit{ 0 };
    float actionPanelChangeThreshold_Vel{ 0 };
    float actionPanelChangeThreshold_PassTime{ 0 };
    int kgIconVspace{ 0 };
    float worldMapCursorSelectRadius{ 0.1 };
    unsigned char reserved8[4];
    int decalPosOffsetX{ 0 };
    int decalPosOffsetY{ 0 };
    float targetStateSearchDurationTime{ 0 };
    float targetStateBattleDurationTime{ 0 };
    float worldMapCursorSpeed{ 1 };
    float worldMapCursorFirstDistance{ 1 };
    float worldMapCursorFirstDelay{ 0.01 };
    float worldMapCursorWaitTime{ 0 };
    float worldMapCursorSnapRadius{ 0.1 };
    float worldMapCursorSnapTime{ 0.01 };
    float itemGetLogAliveTime{ 0.01 };
    int playerMaxSaLimit{ 0 };
    unsigned int worldMap_IsChangeableLayerEventFlagId{ 0 };
    float worldMap_TravelMargin{ 0 };
    float systemAnnounceScrollBufferTime{ 0 };
    int systemAnnounceScrollSpeed{ 100 };
    float systemAnnounceNoScrollWaitTime{ 0 };
    unsigned char systemAnnounceScrollCount{ 1 };
    unsigned char reserved17[3];
    float compassMemoDispDistance{ 50 };
    float compassBonfireDispDistance{ 50 };
    float markerGoalThreshold{ 0 };
    float svSliderStep{ 10 };
    float preOpeningMovie_WaitSec{ 0 };
    float kgIconScale{ 100 };
    float kgIconScale_forTable{ 100 };
    int kgIconVspace_forTable{ 0 };
    float kgIconScale_forConfig{ 100 };
    int kgIconVspace_forConfig{ 0 };
    float worldMap_SearchRadius{ 256 };
    float tutorialDisplayTime{ 3 };
    float compassFriendHostInnerDistance{ 0 };
    float compassEnemyHostInnerDistance{ 0 };
    float compassFriendGuestInnerDistance{ 0 };
    float cutsceneKeyGuideAliveTime{ 5 };
    float autoHideHpThresholdRatio{ -1 };
    int autoHideHpThresholdValue{ -1 };
    float autoHideMpThresholdRatio{ -1 };
    int autoHideMpThresholdValue{ -1 };
    float autoHideSpThresholdRatio{ -1 };
    int autoHideSpThresholdValue{ -1 };
    float worldMapZoomAnimationTime{ 0.5 };
    float worldMapIconScaleMin{ 1 };
    float worldMap_TravelMargin_Point{ 0 };
    unsigned short enemyTagSafeLeft{ 0 };
    unsigned short enemyTagSafeRight{ 1920 };
    unsigned short enemyTagSafeTop{ 0 };
    unsigned short enemyTagSafeBottom{ 1080 };
    unsigned int pcHorseHpRecoverDispThreshold{ 0 };
    unsigned char reserved33[32];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::MENU_COMMON_PARAM_ST) == 256,
    "MENU_COMMON_PARAM_ST paramdef size does not match detected size");
