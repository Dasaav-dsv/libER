/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct NPC_THINK_PARAM_ST {
    bool disableParam_NT : 1 { false };
    unsigned char disableParamReserve1 : 7;
    unsigned char disableParamReserve2[3];
    int logicId{ -1 };
    int battleGoalID{ -1 };
    unsigned short searchEye_dist{ 0 };
    unsigned char searchEye_angY{ 0 };
    bool isNoAvoidHugeEnemy : 1 { false };
    bool enableWeaponOnOff : 1 { false };
    bool targetAILockDmyPoly : 1 { true };
    unsigned char pad8 : 5;
    int spEffectId_RangedAttack{ -1 };
    float searchTargetLv1ForgetTime{ 5 };
    float searchTargetLv2ForgetTime{ 8 };
    float BackHomeLife_OnHitEneWal{ 5 };
    float SightTargetForgetTime{ 600 };
    int idAttackCannotMove{ 0 };
    float ear_dist{ 0 };
    int callHelp_ActionAnimId{ -1 };
    int callHelp_CallActionId{ -1 };
    unsigned short eye_dist{ 0 };
    bool isGuard_Act{ false };
    unsigned char pad6[1];
    unsigned short ear_soundcut_dist{ 0 };
    unsigned short nose_dist{ 0 };
    unsigned short maxBackhomeDist{ 0 };
    unsigned short backhomeDist{ 0 };
    unsigned short backhomeBattleDist{ 0 };
    unsigned short nonBattleActLife{ 0 };
    unsigned short BackHome_LookTargetTime{ 3 };
    unsigned short BackHome_LookTargetDist{ 10 };
    float SoundTargetForgetTime{ 3 };
    unsigned short BattleStartDist{ 0 };
    unsigned short callHelp_MyPeerId{ 0 };
    unsigned short callHelp_CallPeerId{ 0 };
    unsigned short targetSys_DmgEffectRate{ 100 };
    unsigned char TeamAttackEffectivity{ 25 };
    unsigned char eye_angX{ 0 };
    unsigned char eye_angY{ 0 };
    bool disableDark{ false };
    unsigned char caravanRole{ 0 };
    unsigned char callHelp_CallValidMinDistTarget{ 5 };
    unsigned char callHelp_CallValidRange{ 15 };
    unsigned char callHelp_ForgetTimeByArrival{ 0 };
    unsigned char callHelp_MinWaitTime{ 0 };
    unsigned char callHelp_MaxWaitTime{ 0 };
    unsigned char goalAction_ToCaution{ 0 };
    unsigned char ear_listenLevel{ 128 };
    unsigned char callHelp_ReplyBehaviorType{ 0 };
    bool disablePathMove{ false };
    bool skipArrivalVisibleCheck{ false };
    bool thinkAttr_doAdmirer{ false };
    bool enableNaviFlg_Edge : 1 { true };
    bool enableNaviFlg_LargeSpace : 1 { true };
    bool enableNaviFlg_Ladder : 1 { false };
    bool enableNaviFlg_Hole : 1 { false };
    bool enableNaviFlg_Door : 1 { false };
    bool enableNaviFlg_InSideWall : 1 { false };
    bool enableNaviFlg_Lava : 1 { false };
    bool enableNaviFlg_Edge_Ordinary : 1 { true };
    unsigned char enableNaviFlg_reserve1[3];
    int searchThreshold_Lv0toLv1{ 10 };
    int searchThreshold_Lv1toLv2{ 70 };
    float platoonReplyTime{ 0 };
    float platoonReplyAddRandomTime{ 0 };
    unsigned char searchEye_angX{ 0 };
    bool isUpdateBattleSight{ false };
    unsigned short battleEye_updateDist{ 0 };
    unsigned char battleEye_updateAngX{ 0 };
    unsigned char battleEye_updateAngY{ 0 };
    unsigned char pad4[16];
    unsigned short eye_BackOffsetDist{ 0 };
    unsigned short eye_BeginDist{ 0 };
    unsigned char actTypeOnFailedPath{ 0 };
    unsigned char goalAction_ToCautionImportant{ 0 };
    int shiftAnimeId_RangedAttack{ -1 };
    unsigned char actTypeOnNonBtlFailedPath{ 0 };
    bool isBuddyAI{ false };
    unsigned char goalAction_ToSearchLv1{ 0 };
    unsigned char goalAction_ToSearchLv2{ 0 };
    unsigned char enableJumpMove{ 0 };
    bool disableLocalSteering{ false };
    unsigned char goalAction_ToDisappear{ 0 };
    unsigned char changeStateAction_ToNormal{ 0 };
    float MemoryTargetForgetTime{ 150 };
    int rangedAttackId{ -1 };
    unsigned char useFall_onNormalCaution{ 2 };
    unsigned char useFall_onSearchBattle{ 2 };
    unsigned char enableJumpMove_onBattle{ 0 };
    unsigned char backToHomeStuckAct{ 0 };
    unsigned char pad3[4];
    int soundBehaviorId01{ -1 };
    int soundBehaviorId02{ -1 };
    int soundBehaviorId03{ -1 };
    int soundBehaviorId04{ -1 };
    int soundBehaviorId05{ -1 };
    int soundBehaviorId06{ -1 };
    int soundBehaviorId07{ -1 };
    int soundBehaviorId08{ -1 };
    int weaponOffSpecialEffectId{ -1 };
    int weaponOnSpecialEffectId{ -1 };
    int weaponOffAnimId{ -1 };
    int weaponOnAnimId{ -1 };
    int surpriseAnimId{ -1 };
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::NPC_THINK_PARAM_ST) == 228,
    "NPC_THINK_PARAM_ST paramdef size does not match detected size");
