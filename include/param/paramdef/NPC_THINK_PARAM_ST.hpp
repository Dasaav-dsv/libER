/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct NPC_THINK_PARAM_ST {
    /**
     * @brief Do you remove it from the NT version output?
     *
     * Parameters marked with ○ are excluded in the NT version package.
     */
    bool disableParam_NT : 1 { false };

    /**
     * @brief Reserve for package output 1
     */
    unsigned char disableParamReserve1 : 7;

    /**
     * @brief Reserve for package output 2
     */
    unsigned char disableParamReserve2[3];

    /**
     * @brief Logic script ID
     *
     * Set the ID of the logic created by the script.
     */
    int logicId{ -1 };

    /**
     * @brief Battle goal ID
     */
    int battleGoalID{ -1 };

    /**
     * @brief Searching enemy vision_distance [m]
     *
     * Search range by visual search.
     */
    unsigned short searchEye_dist{ 0 };

    /**
     * @brief Searching enemy vision_angle (width) [deg]
     *
     * Search range by visual search.
     */
    unsigned char searchEye_angY{ 0 };

    /**
     * @brief Do you not detour a huge enemy?
     */
    bool isNoAvoidHugeEnemy : 1 { false };

    /**
     * @brief Do you want to pull out the sword?
     */
    bool enableWeaponOnOff : 1 { false };

    /**
     * @brief Do you aim for Rock Damipoli (for enemies)?
     */
    bool targetAILockDmyPoly : 1 { true };

    unsigned char pad8 : 5;

    /**
     * @brief Special effects ID for ranged attacks
     */
    int spEffectId_RangedAttack{ -1 };

    /**
     * @brief Search enemy Lv1 Target Forget time [sec]
     *
     * Search enemy Lv1 Target Time to forget.
     */
    float searchTargetLv1ForgetTime{ 5.f };

    /**
     * @brief Search enemy Lv2 Target Forget time [sec]
     *
     * Search enemy Lv2 time to forget the target.
     */
    float searchTargetLv2ForgetTime{ 8.f };

    /**
     * @brief Back Home time when touching an enemy wall [sec]
     *
     * The life of the BackToHome goal when it touches an enemy wall that blocks
     * the block
     */
    float BackHomeLife_OnHitEneWal{ 5.f };

    /**
     * @brief Time to forget the visual target [sec]
     *
     * Time to forget the visual target.
     */
    float SightTargetForgetTime{ 600.f };

    /**
     * @brief EzState number to do when you get stuck
     *
     * An action that automatically takes place when a destructible object stops
     * it.
     */
    int idAttackCannotMove{ 0 };

    /**
     * @brief Hearing_distance [m]
     *
     * Hearing search range ...
     */
    float ear_dist{ 0.f };

    /**
     * @brief Companion call response action anime ID
     *
     * Animation ID (EzStateAnimID) when responding
     */
    int callHelp_ActionAnimId{ -1 };

    /**
     * @brief Fellow call _ Fellow call action ID
     *
     * Action ID (EzStateAnimID) when calling a friend
     */
    int callHelp_CallActionId{ -1 };

    /**
     * @brief Visual_distance [m]
     *
     * Visual search range.
     */
    unsigned short eye_dist{ 0 };

    /**
     * @brief Whether to use a guard during action
     *
     * Whether to guard against actions (assumed when returning home, looking
     * toward the target)
     */
    bool isGuard_Act{ false };

    unsigned char pad6[1];

    /**
     * @brief Hearing influence cut distance [m]
     *
     * The distance to reduce the size of the sound source. You will not hear
     * any sound below this distance.
     */
    unsigned short ear_soundcut_dist{ 0 };

    /**
     * @brief Smell _ distance [m]
     *
     * Search range by smell.
     */
    unsigned short nose_dist{ 0 };

    /**
     * @brief Distance to go home no matter what [m]
     *
     * COMMON_SetBattleActLogic argument
     */
    unsigned short maxBackhomeDist{ 0 };

    /**
     * @brief Distance to return home while fighting [m]
     *
     * COMMON_SetBattleActLogic argument
     */
    unsigned short backhomeDist{ 0 };

    /**
     * @brief Distance to give up and fight to return to the nest [m]
     *
     * COMMON_SetBattleActLogic argument
     */
    unsigned short backhomeBattleDist{ 0 };

    /**
     * @brief Non-combat action time when conscious of the enemy [sec]
     *
     * COMMON_SetBattleActLogic argument
     */
    unsigned short nonBattleActLife{ 0 };

    /**
     * @brief When returning home: Time to look at the target [sec]
     */
    unsigned short BackHome_LookTargetTime{ 3 };

    /**
     * @brief When returning home: Distance to see the target [m]
     */
    unsigned short BackHome_LookTargetDist{ 10 };

    /**
     * @brief Time to forget the sound target [sec]
     *
     * Time to forget the sound target.
     */
    float SoundTargetForgetTime{ 3.f };

    /**
     * @brief Battle start distance [m]
     */
    unsigned short BattleStartDist{ 0 };

    /**
     * @brief Calling friends Your fellow group ID
     *
     * My fellow group ID
     */
    unsigned short callHelp_MyPeerId{ 0 };

    /**
     * @brief Companion call Companion group ID
     *
     * Companion group ID to call a companion
     */
    unsigned short callHelp_CallPeerId{ 0 };

    /**
     * @brief Damage impact rate [%]
     *
     * Damage impact rate acquisition (target system evaluation information)
     */
    unsigned short targetSys_DmgEffectRate{ 100 };

    /**
     * @brief Team attack influence [0-100]
     *
     * A value for determining the number of simultaneous attacks in a team.
     * Increasing the value reduces the number of people who can participate in
     * the attack at the same time.
     */
    unsigned char TeamAttackEffectivity{ 25 };

    /**
     * @brief Vision_angle (height) [deg]
     *
     * Visual search range.
     */
    unsigned char eye_angX{ 0 };

    /**
     * @brief Visual_angle (width) [deg]
     *
     * Visual search range.
     */
    unsigned char eye_angY{ 0 };

    /**
     * @brief Does not affect the darkness
     *
     * Whether the alert vision_distance and battle start distance are not
     * affected by the darkness
     */
    bool disableDark{ false };

    /**
     * @brief Role in the caravan
     */
    unsigned char caravanRole{ 0 };

    /**
     * @brief Companion call_minimum distance to the target [m]
     *
     * If it is closer than this value, you cannot call a friend.
     */
    unsigned char callHelp_CallValidMinDistTarget{ 5 };

    /**
     * @brief Calling friends_Effective distance to call friends [m]
     *
     * Do not call if the companion is farther than this value.
     */
    unsigned char callHelp_CallValidRange{ 15 };

    /**
     * @brief Time to forget after answering a fellow call [sec]
     *
     * Time to respond
     */
    unsigned char callHelp_ForgetTimeByArrival{ 0 };

    /**
     * @brief Minimum waiting time for response [ssm => ss. mSec]
     *
     * Minimum time for the first wait goal of the response goal [101
     * => 10.1sec]
     */
    unsigned char callHelp_MinWaitTime{ 0 };

    /**
     * @brief Maximum waiting time for response [ssm => ss. mSec]
     *
     * Maximum time for the first waiting goal of the response goal [101
     * => 10.1sec]
     */
    unsigned char callHelp_MaxWaitTime{ 0 };

    /**
     * @brief Goal action: alert / normal sound
     *
     * Goal action: Target becomes alert due to normal sound detection
     */
    unsigned char goalAction_ToCaution{ 0 };

    /**
     * @brief Hearing_audible AI sound level
     *
     * How good your ears are
     */
    unsigned char ear_listenLevel{ 128 };

    /**
     * @brief Behavior type after responding to a fellow call
     *
     * Action type to target position after response
     */
    unsigned char callHelp_ReplyBehaviorType{ 0 };

    /**
     * @brief Do not move the path
     *
     * Whether to move directly without following the path even if a path move
     * command comes
     */
    bool disablePathMove{ false };

    /**
     * @brief Do you want to skip the arrival judgment by the line of sight?
     *
     * Do you want to skip the arrival judgment by the line of sight? When set
     * to On, arrival judgment is performed even if the line of sight does not
     * pass.
     */
    bool skipArrivalVisibleCheck{ false };

    /**
     * @brief Will you be a companion?
     *
     * Thinking attribute: When turned on, it plays a role of surrounding.
     */
    bool thinkAttr_doAdmirer{ false };

    /**
     * @brief Can you pass the flag "cliff"?
     *
     * Can you pass through the node "cliff"? (def: 1)
     */
    bool enableNaviFlg_Edge : 1 { true };

    /**
     * @brief Can the flag "wide" pass?
     *
     * Can you pass through the node "wide"? (def: 1)
     */
    bool enableNaviFlg_LargeSpace : 1 { true };

    /**
     * @brief Can you pass the flag "ladder"?
     *
     * Can you pass through the node "ladder"? (def: 0)
     */
    bool enableNaviFlg_Ladder : 1 { false };

    /**
     * @brief Can you go through the flag "hole"?
     *
     * Can you go through the node "hole"? (def: 0)
     */
    bool enableNaviFlg_Hole : 1 { false };

    /**
     * @brief Can you go through the flag "door"?
     *
     * Can you pass through the node "door"? (def: 0)
     */
    bool enableNaviFlg_Door : 1 { false };

    /**
     * @brief Can you pass the flag "in the wall"?
     *
     * Can you pass through the node "in the wall"? (def: 0)
     */
    bool enableNaviFlg_InSideWall : 1 { false };

    /**
     * @brief Can you pass the flag "lava"?
     *
     * Can you pass through the node "lava"? (def: 0)
     */
    bool enableNaviFlg_Lava : 1 { false };

    /**
     * @brief Can you pass the flag "cliff"? (Normal / alert state)
     *
     * Can you pass the node "cliff" under normal / alert conditions? (def: 1)
     */
    bool enableNaviFlg_Edge_Ordinary : 1 { true };

    /**
     * @brief Really booked
     *
     * If you need a new flag, put it here (Not Padding)
     */
    unsigned char enableNaviFlg_reserve1[3];

    /**
     * @brief Search enemy Lv0 → Lv1 threshold
     */
    int searchThreshold_Lv0toLv1{ 10 };

    /**
     * @brief Search enemy Lv1 → Lv2 threshold
     */
    int searchThreshold_Lv1toLv2{ 70 };

    /**
     * @brief Platoon reaction delay time [sec]
     */
    float platoonReplyTime{ 0.f };

    /**
     * @brief Platoon reaction additional random time [sec]
     */
    float platoonReplyAddRandomTime{ 0.f };

    /**
     * @brief Searching enemy vision_angle (height) [deg]
     */
    unsigned char searchEye_angX{ 0 };

    /**
     * @brief Do you want to overwrite the combat view?
     *
     * Do you want to overwrite the battle view?
     */
    bool isUpdateBattleSight{ false };

    /**
     * @brief Battle Vision_Overwrite Distance [m]
     */
    unsigned short battleEye_updateDist{ 0 };

    /**
     * @brief Battle Vision_Overwrite Angle (Height) [deg]
     */
    unsigned char battleEye_updateAngX{ 0 };

    /**
     * @brief Battle Vision_Overwrite Angle (Width) [deg]
     */
    unsigned char battleEye_updateAngY{ 0 };

    unsigned char pad4[16];

    /**
     * @brief Visual_occurrence distance [m]
     *
     * The viewing angle start position is behind this distance from the center
     * of the character.
     */
    unsigned short eye_BackOffsetDist{ 0 };

    /**
     * @brief Visual_cut distance [m]
     *
     * This distance is not recognized from the viewing angle generation
     * position
     */
    unsigned short eye_BeginDist{ 0 };

    /**
     * @brief Behavior type at the time of path search failure / homecoming
     * limit
     *
     * Default action type to be performed when the path search fails, when the
     * end point of the alternative path is reached / when the homecoming limit
     * distance is reached
     */
    unsigned char actTypeOnFailedPath{ 0 };

    /**
     * @brief Goal Action: Alert / Important Sound
     *
     * Goal action: Target becomes alert due to detection of important sound
     */
    unsigned char goalAction_ToCautionImportant{ 0 };

    /**
     * @brief Changeover animation ID for ranged attacks
     *
     * Reference ID for AI attack parameters
     */
    int shiftAnimeId_RangedAttack{ -1 };

    /**
     * @brief Behavior when path search fails (during non-combat)
     *
     * Target [None] Sometimes, the action to be taken after rewriting the
     * current location to a nest
     */
    unsigned char actTypeOnNonBtlFailedPath{ 0 };

    /**
     * @brief Buddy AI
     *
     * Thinking for a buddy
     */
    bool isBuddyAI{ false };

    /**
     * @brief Goal action: Search enemy Lv1
     *
     * Goal action: Target becomes Lv1
     */
    unsigned char goalAction_ToSearchLv1{ 0 };

    /**
     * @brief Goal action: Search enemy Lv2
     *
     * Goal action: Target became enemy Lv2
     */
    unsigned char goalAction_ToSearchLv2{ 0 };

    /**
     * @brief Do you use the edge "jump" (non-combat state)?
     *
     * Whether to jump over the user edge for jumping (non-combat state)
     */
    unsigned char enableJumpMove{ 0 };

    /**
     * @brief Do not move around
     *
     * Do you want to turn off the behavior (local steering) that tries to move
     * while avoiding other characters?
     */
    bool disableLocalSteering{ false };

    /**
     * @brief Goal action: Memory target state
     *
     * Goal action: Lost target
     */
    unsigned char goalAction_ToDisappear{ 0 };

    /**
     * @brief Goal action: Start normal state
     *
     * Action when transitioning to the normal state
     */
    unsigned char changeStateAction_ToNormal{ 0 };

    /**
     * @brief Time to forget memory target [sec]
     *
     * Time to forget the memory target.
     */
    float MemoryTargetForgetTime{ 150.f };

    /**
     * @brief Ranged attack anime ID
     *
     * A parameter that specifies the attack ID issued by the enemy when making
     * a ranged attack
     */
    int rangedAttackId{ -1 };

    /**
     * @brief Do you use the edge "jump" (non-combat state)?
     *
     * Allows AI to pass the jumping edge in non-combat state
     */
    unsigned char useFall_onNormalCaution{ 2 };

    /**
     * @brief Do you use the edge "jump" (combat state)?
     *
     * Allow AI to pass through the jumping edge in combat
     */
    unsigned char useFall_onSearchBattle{ 2 };

    /**
     * @brief Do you use the edge "jump" (combat state)?
     *
     * Whether to jump over the user edge for jumping (combat state)
     */
    unsigned char enableJumpMove_onBattle{ 0 };

    /**
     * @brief Behavior when addicted to the homecoming limit
     */
    unsigned char backToHomeStuckAct{ 0 };

    unsigned char pad3[4];

    /**
     * @brief Behavior ID1
     *
     * Corresponds to the behavior ID of the sound target that can be heard
     */
    int soundBehaviorId01{ -1 };

    /**
     * @brief Behavior ID2
     *
     * Corresponds to the behavior ID of the sound target that can be heard
     */
    int soundBehaviorId02{ -1 };

    /**
     * @brief Behavior ID3
     *
     * Corresponds to the behavior ID of the sound target that can be heard
     */
    int soundBehaviorId03{ -1 };

    /**
     * @brief Behavior ID4
     *
     * Corresponds to the behavior ID of the sound target that can be heard
     */
    int soundBehaviorId04{ -1 };

    /**
     * @brief Behavior ID5
     *
     * Corresponds to the behavior ID of the sound target that can be heard
     */
    int soundBehaviorId05{ -1 };

    /**
     * @brief Behavior ID6
     *
     * Corresponds to the behavior ID of the sound target that can be heard
     */
    int soundBehaviorId06{ -1 };

    /**
     * @brief Behavior ID7
     *
     * Corresponds to the behavior ID of the sound target that can be heard
     */
    int soundBehaviorId07{ -1 };

    /**
     * @brief Behavior ID8
     *
     * Corresponds to the behavior ID of the sound target that can be heard
     */
    int soundBehaviorId08{ -1 };

    /**
     * @brief Special effect ID at the time of sword delivery
     */
    int weaponOffSpecialEffectId{ -1 };

    /**
     * @brief Special effect ID when pulling out a sword
     */
    int weaponOnSpecialEffectId{ -1 };

    /**
     * @brief Katana Anime ID
     */
    int weaponOffAnimId{ -1 };

    /**
     * @brief Sword animation ID
     */
    int weaponOnAnimId{ -1 };

    /**
     * @brief Amazing anime ID
     */
    int surpriseAnimId{ -1 };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::NPC_THINK_PARAM_ST) == 228,
    "NPC_THINK_PARAM_ST paramdef size does not match detected size");
