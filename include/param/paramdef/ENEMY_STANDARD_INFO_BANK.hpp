/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct ENEMY_STANDARD_INFO_BANK {
    int EnemyBehaviorID{ 0 };
    unsigned short HP{ 1 };
    unsigned short AttackPower{ 1 };
    int ChrType{ 5 };
    float HitHeight{ 2 };
    float HitRadius{ 0.4 };
    float Weight{ 60 };
    float DynamicFriction{ 0 };
    float StaticFriction{ 0 };
    int UpperDefState{ 0 };
    int ActionDefState{ 0 };
    float RotY_per_Second{ 10 };
    unsigned char reserve0[20];
    unsigned char RotY_per_Second_old{ 0 };
    unsigned char EnableSideStep{ 0 };
    unsigned char UseRagdollHit{ 0 };
    unsigned char reserve_last[5];
    unsigned short stamina{ 0 };
    unsigned short staminaRecover{ 0 };
    unsigned short staminaConsumption{ 0 };
    unsigned short deffenct_Phys{ 0 };
    unsigned char reserve_last2[48];
};

}; // namespace paramdefs
}; // namespace from
