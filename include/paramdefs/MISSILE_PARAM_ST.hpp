/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct MISSILE_PARAM_ST {
    int FFXID{ 0 };
    unsigned short LifeTime{ 0 };
    unsigned short HitSphereRadius{ 0 };
    unsigned short HitDamage{ 0 };
    unsigned char reserve0[6];
    float InitVelocity{ 0 };
    float distance{ 0 };
    float gravityInRange{ 0 };
    float gravityOutRange{ 0 };
    int mp{ 0 };
    float accelInRange{ 0 };
    float accelOutRange{ 0 };
    unsigned char reserve1[20];
    unsigned short HitMissileID{ 0 };
    bool DiedNaturaly{ false };
    bool ExplosionDie{ false };
    int behaviorId{ 0 };
    unsigned char reserve_last[56];
};

}; // namespace paramdefs
}; // namespace from
