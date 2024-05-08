/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct AI_ATTACK_PARAM_ST {
    int attackTableId{ 0 };
    int attackId{ 0 };
    float successDistance{ 0 };
    float turnTimeBeforeAttack{ 0 };
    short frontAngleRange{ 0 };
    short upAngleThreshold{ 0 };
    short downAngleThershold{ 0 };
    bool isFirstAttack{ false };
    bool doesSelectOnOutRange{ false };
    float minOptimalDistance{ 0 };
    float maxOptimalDistance{ 0 };
    short baseDirectionForOptimalAngle1{ 0 };
    short optimalAttackAngleRange1{ 0 };
    short baseDirectionForOptimalAngle2{ 0 };
    short optimalAttackAngleRange2{ 0 };
    float intervalForExec{ 1 };
    float selectionTendency{ -1 };
    float shortRangeTendency{ -1 };
    float middleRangeTendency{ -1 };
    float farRangeTendency{ -1 };
    float outRangeTendency{ -1 };
    int deriveAttackId1{ -1 };
    int deriveAttackId2{ -1 };
    int deriveAttackId3{ -1 };
    int deriveAttackId4{ -1 };
    int deriveAttackId5{ -1 };
    int deriveAttackId6{ -1 };
    int deriveAttackId7{ -1 };
    int deriveAttackId8{ -1 };
    int deriveAttackId9{ -1 };
    int deriveAttackId10{ -1 };
    int deriveAttackId11{ -1 };
    int deriveAttackId12{ -1 };
    int deriveAttackId13{ -1 };
    int deriveAttackId14{ -1 };
    int deriveAttackId15{ -1 };
    int deriveAttackId16{ -1 };
    float goalLifeMin{ 0 };
    float goalLifeMax{ 0 };
    bool doesSelectOnInnerRange{ false };
    bool enableAttackOnBattleStart{ true };
    bool doesSelectOnTargetDown{ true };
    unsigned char pad1[1];
    float minArriveDistance{ 0 };
    float maxArriveDistance{ 0 };
    float comboExecDistance{ 4 };
    float comboExecRange{ 180 };
};

}; // namespace paramdefs
}; // namespace from
