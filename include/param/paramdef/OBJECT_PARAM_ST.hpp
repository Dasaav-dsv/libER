/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct OBJECT_PARAM_ST {
    short hp{ -1 };
    unsigned short defense{ 0 };
    short extRefTexId{ -1 };
    short materialId{ -1 };
    unsigned char animBreakIdMax{ 0 };
    bool isCamHit : 1 { false };
    bool isBreakByPlayerCollide : 1 { false };
    bool isAnimBreak : 1 { false };
    bool isPenetrationBulletHit : 1 { false };
    bool isChrHit : 1 { true };
    bool isAttackBacklash : 1 { true };
    bool isDisableBreakForFirstAppear : 1 { false };
    bool isLadder : 1 { false };
    bool isAnimPauseOnRemoPlay : 1 { false };
    bool isDamageNoHit : 1 { false };
    bool isMoveObj : 1 { false };
    bool isRopeBridge : 1 { false };
    bool isAddRigidImpulse_ByDamage : 1 { false };
    bool isBreak_ByChrRide : 1 { false };
    bool isBurn : 1 { false };
    bool isBreakByEnemyCollide : 1 { false };
    signed char defaultLodParamId{ -1 };
    int breakSfxId{ -1 };
    int breakSfxCpId{ -1 };
    int breakBulletBehaviorId{ -1 };
    int breakBulletCpId{ -1 };
    unsigned char breakFallHeight{ 0 };
    unsigned char windEffectType_0{ 0 };
    unsigned char windEffectType_1{ 0 };
    unsigned char camAvoidType{ 1 };
    float windEffectRate_0{ 0.5 };
    float windEffectRate_1{ 0.5 };
    float breakStopTime{ 0 };
    float burnTime{ 0 };
    float burnBraekRate{ 0.5 };
    int burnSfxId{ -1 };
    int burnSfxId_1{ -1 };
    int burnSfxId_2{ -1 };
    int burnSfxId_3{ -1 };
    int burnBulletBehaviorId{ -1 };
    int burnBulletBehaviorId_1{ -1 };
    int burnBulletBehaviorId_2{ -1 };
    int burnBulletBehaviorId_3{ -1 };
    unsigned short burnBulletInterval{ 30 };
    unsigned char navimeshFlag{ 0 };
    unsigned char collisionType{ 0 };
    float burnBulletDelayTime{ 0 };
    float burnSfxDelayTimeMin{ 0 };
    float burnSfxDelayTimeMin_1{ 0 };
    float burnSfxDelayTimeMin_2{ 0 };
    float burnSfxDelayTimeMin_3{ 0 };
    float burnSfxDelayTimeMax{ 0 };
    float burnSfxDelayTimeMax_1{ 0 };
    float burnSfxDelayTimeMax_2{ 0 };
    float burnSfxDelayTimeMax_3{ 0 };
    int BreakAiSoundID{ 0 };
    float FragmentInvisibleWaitTime{ 0 };
    float FragmentInvisibleTime{ 0 };
    unsigned char pad_3[16];
    float RigidPenetrationScale_Soft{ 0 };
    float RigidPenetrationScale_Normal{ 0 };
    float RigidPenetrationScale_Hard{ 0 };
    int LandTouchSfxId{ -1 };
    bool isDamageCover : 1 { false };
    unsigned char pad_4[1];
    unsigned short paintDecalTargetTextureSize{ 256 };
    float lifeTime_forDC{ 0 };
    float clothUpdateDist{ 0 };
    int contactSeId{ -1 };
    int breakLandingSfxId{ -1 };
    int waypointDummyPolyId_0{ -1 };
    int waypointParamId_0{ -1 };
    int soundBankId{ -1 };
    int refDrawParamId{ -1 };
    float autoCreateDynamicOffsetHeight{ 0.1 };
    int reserved0{ -1 };
    int soundBreakSEId{ -1 };
    unsigned char pad_5[40];
};

}; // namespace paramdef
}; // namespace from
