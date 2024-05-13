/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct MENU_COMMON_PARAM_ST {
    /**
     * @brief Solo play Fade out start time at death [seconds]
     *
     * How many seconds have passed after "YOU DIED" is displayed at the time of
     * death of solo play to start fading out?
     */
    float soloPlayDeath_ToFadeOutTime{ 0.f };

    /**
     * @brief White, Black Ghost Fade Out Start Time [Seconds]
     *
     * How many seconds have passed after "YOU DIED" is displayed when a white
     * or black ghost dies to start fading out?
     */
    float partyGhostDeath_ToFadeOutTime{ 0.f };

    /**
     * @brief Maximum player HP
     *
     * It is used to calculate what percentage of the gauge length provided by
     * the resource is used when displaying the HP gauge.
     */
    int playerMaxHpLimit{ 0 };

    /**
     * @brief Maximum player MP
     *
     * It is used to calculate what percentage of the gauge length provided by
     * the resource is used when displaying the MP gauge.
     */
    int playerMaxMpLimit{ 0 };

    /**
     * @brief Maximum player SP
     *
     * It is used to calculate what percentage of the gauge length provided by
     * the resource is used when displaying the SP gauge.
     */
    int playerMaxSpLimit{ 0 };

    /**
     * @brief Action panel switching judgment_player speed [m / sec]
     *
     * Action panel Switchable player speed. Switchable if below this speed
     */
    float actionPanelChangeThreshold_Vel{ 0.f };

    /**
     * @brief Action panel switching judgment_player speed judgment time [sec]
     *
     * Action panel Consideration time to increase the speed of switchable
     * players. Use the average speed of this time (systematically up to 4
     * seconds)
     */
    float actionPanelChangeThreshold_PassTime{ 0.f };

    /**
     * @brief Vertical position of the key guide icon
     *
     * Vertical position of key guide icon (+: top,-: bottom)
     */
    int kgIconVspace{ 0 };

    /**
     * @brief Cursor selection radius [px]
     *
     * If the cursor position is within this radius, it means that it is
     * selected.
     */
    float worldMapCursorSelectRadius{ 0.1f };

    unsigned char reserved8[4];

    /**
     * @brief Decal offset (left and right)
     *
     * Decal display position offset left and right
     */
    int decalPosOffsetX{ 0 };

    /**
     * @brief Decal offset (up and down)
     *
     * Decal display position offset vertical direction
     */
    int decalPosOffsetY{ 0 };

    /**
     * @brief FE: Search icon display time [seconds]
     *
     * The number of seconds it takes for the FE Search icon to start fading in
     * and then fading out.
     */
    float targetStateSearchDurationTime{ 0.f };

    /**
     * @brief FE: Battle icon display time [seconds]
     *
     * The number of seconds it takes for the FE Battle icon to start fading in
     * and then fading out.
     */
    float targetStateBattleDurationTime{ 0.f };

    /**
     * @brief Cursor movement speed [px / sec]
     *
     * Movement speed when moving smoothly
     */
    float worldMapCursorSpeed{ 1.f };

    /**
     * @brief First movement distance of the cursor [px]
     *
     * Distance to move only once at the first input
     */
    float worldMapCursorFirstDistance{ 1.f };

    /**
     * @brief Delay time for the first movement of the cursor [sec]
     *
     * The time it takes to move only once at the first input
     */
    float worldMapCursorFirstDelay{ 0.01f };

    /**
     * @brief Wait until the cursor moves [sec]
     *
     * Waiting time from input to smooth movement
     */
    float worldMapCursorWaitTime{ 0.f };

    /**
     * @brief Cursor snap radius [px]
     *
     * Move the cursor closer than this radius to start adsorption (for snap
     * mode)
     */
    float worldMapCursorSnapRadius{ 0.1f };

    /**
     * @brief Cursor snap time [sec]
     *
     * The time it takes to start and complete adsorption
     */
    float worldMapCursorSnapTime{ 0.01f };

    /**
     * @brief Item acquisition log: Display time of 1 line [sec]
     *
     * Time to add one line of log and fade out. There is a timer for each line
     */
    float itemGetLogAliveTime{ 0.01f };

    /**
     * @brief Upper limit of player maximum SA (trunk value)
     *
     * It is used to calculate what percentage of the gauge length provided by
     * the resource is used when displaying the SA gauge.
     */
    int playerMaxSaLimit{ 0 };

    /**
     * @brief Underground map switchable event flag ID
     *
     * Specify the event flag ID that manages whether it is possible to switch
     * to the underground map. When this event flag ID is ON, it is possible to
     * switch to the underground map.
     */
    unsigned int worldMap_IsChangeableLayerEventFlagId{ 0 };

    /**
     * @brief Additional ban distance for traversal range [m]
     *
     * Distance (m) that extends in four directions around the player. I decided
     * to break through this range
     */
    float worldMap_TravelMargin{ 0.f };

    /**
     * @brief Wait time before and after scrolling [sec]
     *
     * The number of seconds to wait before and after scrolling through the long
     * text of the operation announcement. For example, if it is 3 seconds, wait
     * for a total of 6 seconds before and after.
     */
    float systemAnnounceScrollBufferTime{ 0.f };

    /**
     * @brief Scrolling speed [px / sec]
     *
     * Scrolling speed (pixels / second) when scrolling long sentences in the
     * operation announcement. It does not depend on the screen size. Think of
     * the entire menu as 1920x1080
     */
    int systemAnnounceScrollSpeed{ 100 };

    /**
     * @brief Display time when not scrolling [sec]
     *
     * The number of seconds to display when it is a short sentence that does
     * not require scrolling of the operation announcement
     */
    float systemAnnounceNoScrollWaitTime{ 0.f };

    /**
     * @brief Number of scrolls
     *
     * Number of times to repeat when scrolling long sentences of management
     * announcement
     */
    unsigned char systemAnnounceScrollCount{ 1 };

    unsigned char reserved17[3];

    /**
     * @brief Display distance_Memo marker [m]
     *
     * Display distance [m] of the memo marker displayed on the compass.
     * Anything closer than this distance will be displayed
     */
    float compassMemoDispDistance{ 50.f };

    /**
     * @brief Display distance_bonfire [m]
     *
     * The display distance of the bonfire displayed on the compass [m].
     * Anything closer than this distance will be displayed
     */
    float compassBonfireDispDistance{ 50.f };

    /**
     * @brief Goal judgment distance of destination marker [m]
     *
     * Goal judgment distance [m] of the destination marker. The destination
     * marker disappears when you get closer than this distance
     */
    float markerGoalThreshold{ 0.f };

    /**
     * @brief Saturation / brightness slider movement amount [% / sec]
     *
     * Amount of movement of the saturation / brightness slider of the color
     * control [% / sec]. Maximum amount to move in 1 second when each value is
     * 0% to 100%. Since it is operated with an analog stick, it becomes a ratio
     * by the input value.
     */
    float svSliderStep{ 10.f };

    /**
     * @brief Weight before OP movie [sec]
     *
     * Wait time before playing the OP movie. > SEQ 15261
     */
    float preOpeningMovie_WaitSec{ 0.f };

    /**
     * @brief Key guide icon scale [%]
     *
     * The scale value of the key guide icon. 100% is the texture size as it is
     */
    float kgIconScale{ 100.f };

    /**
     * @brief Scale of key guide icon for pad operation list [%]
     *
     * Scale value of the key guide icon for the pad operation list. 100% is the
     * texture size as it is
     */
    float kgIconScale_forTable{ 100.f };

    /**
     * @brief Vertical position of the key guide icon for the pad operation list
     *
     * Vertical position of the key guide icon for the pad operation list (+:
     * top,-: bottom)
     */
    int kgIconVspace_forTable{ 0 };

    /**
     * @brief Key guide icon scale for key config [%]
     *
     * The scale value of the key guide icon for the key config. 100% is the
     * texture size as it is
     */
    float kgIconScale_forConfig{ 100.f };

    /**
     * @brief Vertical position of the key guide icon for key config
     *
     * Vertical position of key guide icon for key config (+: top,-: bottom)
     */
    int kgIconVspace_forConfig{ 0 };

    /**
     * @brief Unsearched mask_Searched range [m]
     *
     * Range [m] (radius) that makes unsearched masks searched. It is assumed
     * that the circle centered on the player has been searched.
     */
    float worldMap_SearchRadius{ 256.f };

    /**
     * @brief Toast display time [sec]
     *
     * Tutorial (toast notification) display time [sec]. It will be closed
     * automatically after this time has passed
     */
    float tutorialDisplayTime{ 3.f };

    /**
     * @brief Display distance_Cooperation / Relief Guest side: Host
     *
     * Display distance [m] of other players (friendly hosts) to be displayed on
     * the compass. If you are more than this distance, it will be displayed on
     * the compass.
     */
    float compassFriendHostInnerDistance{ 0.f };

    /**
     * @brief Display distance_hostile guest side: host
     *
     * Display distance [m] of other players (enemy hosts) displayed on the
     * compass. If you are more than this distance, it will be displayed on the
     * compass.
     */
    float compassEnemyHostInnerDistance{ 0.f };

    /**
     * @brief Display distance_host / cooperation / rescue Host side:
     * cooperation / rescue guest
     *
     * Display distance [m] of other players (friendly guests) to be displayed
     * on the compass. If you are more than this distance, it will be displayed
     * on the compass.
     */
    float compassFriendGuestInnerDistance{ 0.f };

    /**
     * @brief Cutscene key guide display time [seconds]
     *
     * The amount of time that the key guide will continue to be displayed after
     * the cutscene skip has been pre-entered. Since skip input is accepted only
     * while the key guide is displayed, it can be said that it is the skip
     * input acceptance time.
     */
    float cutsceneKeyGuideAliveTime{ 5.f };

    /**
     * @brief HP gauge: Percentage always displayed [%]
     *
     * [HUD: Auto setting] HP ratio. If the HP ratio is below this value, the HP
     * gauge will always be displayed. Percentage and current value are OR
     * conditions (displayed if either is satisfied)
     */
    float autoHideHpThresholdRatio{ -1.f };

    /**
     * @brief HP gauge: Current value always displayed
     *
     * [HUD: Auto setting] HP current value. If the current HP value is less
     * than or equal to this value, the HP gauge will always be displayed.
     * Percentage and current value are OR conditions (displayed if either is
     * satisfied)
     */
    int autoHideHpThresholdValue{ -1 };

    /**
     * @brief MP gauge: Percentage to always display [%]
     *
     * [HUD: Auto setting] MP ratio. If the MP ratio is below this value, the MP
     * gauge is always displayed. Percentage and current value are OR conditions
     * (displayed if either is satisfied)
     */
    float autoHideMpThresholdRatio{ -1.f };

    /**
     * @brief MP gauge: Current value always displayed
     *
     * [HUD: Auto setting] MP current value. If the current MP value is less
     * than or equal to this value, the MP gauge is always displayed. Percentage
     * and current value are OR conditions (displayed if either is satisfied)
     */
    int autoHideMpThresholdValue{ -1 };

    /**
     * @brief SP gauge: Percentage to always display [%]
     *
     * [HUD: Auto setting] SP ratio. If the SP ratio is less than or equal to
     * this value, the SP gauge is always displayed. Percentage and current
     * value are OR conditions (displayed if either is satisfied)
     */
    float autoHideSpThresholdRatio{ -1.f };

    /**
     * @brief SP gauge: Current value always displayed
     *
     * [HUD: Auto setting] SP current value. If the current SP value is less
     * than or equal to this value, the SP gauge is always displayed. Percentage
     * and current value are OR conditions (displayed if either is satisfied)
     */
    int autoHideSpThresholdValue{ -1 };

    /**
     * @brief Zoom animation time [seconds]
     *
     * World map: Time to zoom animation [seconds]
     */
    float worldMapZoomAnimationTime{ 0.5f };

    /**
     * @brief Minimum icon display magnification
     *
     * World map: Display magnification of the map point icon at zoom step 0
     * (0.0 to 1.0). 1x (1.0) at zoom step 2. From there, the icon magnification
     * is also interpolated according to the enlargement ratio.
     */
    float worldMapIconScaleMin{ 1.f };

    /**
     * @brief Map point unit Additional ban distance when the ban is lifted [m]
     *
     * World map: Additional ban distance [m] when the ban is lifted in map
     * point units. When the ban on map points such as the distant view stand is
     * lifted, the ban on the traversal range will be lifted. Distance to be
     * additionally extended in 4 directions around the map point
     */
    float worldMap_TravelMargin_Point{ 0.f };

    /**
     * @brief Displayable area (far left)
     *
     * How far can the center coordinates of the enemy HP gauge go to the left
     * end? Since it is the center coordinate, the size of the gauge body is
     * included.
     */
    unsigned short enemyTagSafeLeft{ 0 };

    /**
     * @brief Displayable area (right end)
     *
     * How far can the center coordinates of the enemy HP gauge go to the right
     * end? Since it is the center coordinate, the size of the gauge body is
     * included.
     */
    unsigned short enemyTagSafeRight{ 1920 };

    /**
     * @brief Displayable area (top)
     *
     * How far can the center coordinates of the enemy HP gauge go to the upper
     * end? Since it is the center coordinate, the size of the gauge body is
     * included.
     */
    unsigned short enemyTagSafeTop{ 0 };

    /**
     * @brief Displayable area (bottom)
     *
     * How far can the center coordinates of the enemy HP gauge go to the lower
     * end? Since it is the center coordinate, the size of the gauge body is
     * included.
     */
    unsigned short enemyTagSafeBottom{ 1080 };

    /**
     * @brief Display recovery amount threshold
     *
     * Threshold for displaying the PC horse HP gauge at the time of recovery.
     * "Constant value" of "Display HP bar when it increases more than a certain
     * value at a time"
     */
    unsigned int pcHorseHpRecoverDispThreshold{ 0 };

    unsigned char reserved33[32];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::MENU_COMMON_PARAM_ST) == 256,
    "MENU_COMMON_PARAM_ST paramdef size does not match detected size");
