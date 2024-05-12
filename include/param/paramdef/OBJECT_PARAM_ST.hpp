/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct OBJECT_PARAM_ST {
    /**
     * @brief HP
     *
     * Durability until destruction (-1: Indestructible)
     */
    short hp{ -1 };

    /**
     * @brief Defense power
     *
     * Attack power below this value is no damage
     */
    unsigned short defense{ 0 };

    /**
     * @brief Xref texture ID
     *
     * mAA / mAA_ ????. Tpf (-1: None) (AA: Area number)
     */
    short extRefTexId{ -1 };

    /**
     * @brief Material ID
     *
     * Material ID. Treated the same as the floor material. When -1, the same
     * behavior as before
     */
    short materialId{ -1 };

    /**
     * @brief Anime destruction ID maximum value
     *
     * What is the animation destruction ID from 0 to what?
     */
    unsigned char animBreakIdMax{ 0 };

    /**
     * @brief Does the camera hit?
     *
     * Does the camera hit (0: not hit, 1: hit)
     */
    bool isCamHit : 1 { false };

    /**
     * @brief Will it break in a player collision?
     *
     * Broken when the player touches (0: no, 1:)
     */
    bool isBreakByPlayerCollide : 1 { false };

    /**
     * @brief Is it anime destruction?
     *
     * Is it animation destruction (0: physical destruction, 1: animation
     * destruction)
     */
    bool isAnimBreak : 1 { false };

    /**
     * @brief Will it hit a penetrating bullet?
     *
     * Will the penetrating bullet hit (0: not hit, 1: hit)
     */
    bool isPenetrationBulletHit : 1 { false };

    /**
     * @brief Will the character win?
     *
     * Does the character win (0: not hit, 1: hit)
     */
    bool isChrHit : 1 { true };

    /**
     * @brief Do you play the attack
     *
     * Do you play the attack (0: do not play, 1: play)
     */
    bool isAttackBacklash : 1 { true };

    /**
     * @brief No destruction for initial appearance
     *
     * Broken at the initial appearance of the player (0: ru, 1: no)
     */
    bool isDisableBreakForFirstAppear : 1 { false };

    /**
     * @brief Is it a ladder?
     *
     * Is it a ladder (0: different, 1: yes)
     */
    bool isLadder : 1 { false };

    /**
     * @brief Do you want to stop the animation during the poly play?
     *
     * Do you want to stop the animation during the poly play (0: not, 1: do)
     */
    bool isAnimPauseOnRemoPlay : 1 { false };

    /**
     * @brief Is it not damaged?
     *
     * No damage (0: hit, 1: not hit)
     */
    bool isDamageNoHit : 1 { false };

    /**
     * @brief Is it a moving object?
     *
     * Is it a moving object (0: different, 1: yes)
     */
    bool isMoveObj : 1 { false };

    /**
     * @brief Is it a suspension bridge object?
     *
     * Suspension bridge object (0: different, 1: yes)
     */
    bool isRopeBridge : 1 { false };

    /**
     * @brief Does the damage blow off the rigid body?
     *
     * Does the damage blow the rigid body (0: do not blow, 1: blow)
     */
    bool isAddRigidImpulse_ByDamage : 1 { false };

    /**
     * @brief Will it break if the character gets on it?
     *
     * Will it break if the character gets on (0: it won't break 1: it will
     * break)
     */
    bool isBreak_ByChrRide : 1 { false };

    /**
     * @brief Will it burn
     *
     * Will it burn (0: not, 1:)
     */
    bool isBurn : 1 { false };

    /**
     * @brief Will it be destroyed by an enemy character collision?
     *
     * Broken when an enemy character touches (0: No, 1: Ru)
     */
    bool isBreakByEnemyCollide : 1 { false };

    /**
     * @brief Default LOD Param ID
     *
     * Default LOD Param ID (-1: None)
     */
    signed char defaultLodParamId{ -1 };

    /**
     * @brief SFX ID at the time of destruction
     *
     * SFXID when destroying an object (-1: default (810030))
     */
    int breakSfxId{ -1 };

    /**
     * @brief SFX Damipoli ID at the time of destruction
     *
     * SFX generation position when the object is destroyed Damipoly ID (-1:
     * placement position)
     */
    int breakSfxCpId{ -1 };

    /**
     * @brief Bomb generation at the time of destruction Action parameter ID
     *
     * Action parameter of [bullet] at the time of destruction (-1: does not
     * occur)
     */
    int breakBulletBehaviorId{ -1 };

    /**
     * @brief Damipoli ID
     *
     * Location of [bullet] at the time of destruction Damipoli ID (-1:
     * placement position)
     */
    int breakBulletCpId{ -1 };

    /**
     * @brief Fall destruction height (m)
     *
     * Height at which the object breaks when dropped (0: does not break when
     * dropped)
     */
    unsigned char breakFallHeight{ 0 };

    /**
     * @brief Wind effect type (before destruction)
     */
    unsigned char windEffectType_0{ 0 };

    /**
     * @brief Wind effect type (after destruction)
     */
    unsigned char windEffectType_1{ 0 };

    /**
     * @brief Camera avoidance setting
     *
     * What to do if an object blocks between the camera and player
     */
    unsigned char camAvoidType{ 1 };

    /**
     * @brief Wind coefficient (before destruction)
     */
    float windEffectRate_0{ 0.5f };

    /**
     * @brief Wind coefficient (after destruction)
     */
    float windEffectRate_1{ 0.5f };

    /**
     * @brief Forced stop time after destruction
     *
     * Time from destruction to forced stop of rigid body (do not force stop at
     * 0)
     */
    float breakStopTime{ 0.f };

    /**
     * @brief Burning time (seconds)
     *
     * Burning time (seconds) (continues to burn at 0)
     */
    float burnTime{ 0.f };

    /**
     * @brief Combustion fracture judgment progress
     *
     * Burnup threshold for switching to the ruptured state
     */
    float burnBraekRate{ 0.5f };

    /**
     * @brief Combustion SFXID: 0
     *
     * SFX ID at the time of combustion: 0 (-1: No SFX)
     */
    int burnSfxId{ -1 };

    /**
     * @brief Combustion SFXID: 1
     *
     * SFX ID at the time of combustion: 1 (-1: No SFX)
     */
    int burnSfxId_1{ -1 };

    /**
     * @brief Combustion SFXID: 2
     *
     * SFX ID at the time of combustion: 2 (-1: No SFX)
     */
    int burnSfxId_2{ -1 };

    /**
     * @brief Combustion SFXID: 3
     *
     * SFX ID at the time of combustion: 3 (-1: No SFX)
     */
    int burnSfxId_3{ -1 };

    /**
     * @brief Combustion bullet generation Behavior parameter: 0
     *
     * Bullet generation behavior parameter at the time of burning: 0 (-1: does
     * not occur)
     */
    int burnBulletBehaviorId{ -1 };

    /**
     * @brief Combustion bullet generation Behavior parameter: 1
     *
     * Bullet generation behavior parameter at the time of burning: 1 (-1: does
     * not occur)
     */
    int burnBulletBehaviorId_1{ -1 };

    /**
     * @brief Combustion bullet generation Behavior parameter: 2
     *
     * Bullet generation behavior parameter at the time of burning: 2 (-1: does
     * not occur)
     */
    int burnBulletBehaviorId_2{ -1 };

    /**
     * @brief Combustion bullet generation Behavior parameters: 3
     *
     * Bullet generation behavior parameter at the time of burning: 3 (-1: does
     * not occur)
     */
    int burnBulletBehaviorId_3{ -1 };

    /**
     * @brief Combustion bullet generation interval (frame)
     *
     * Interval (frame) to generate bullets for spreading fire
     */
    unsigned short burnBulletInterval{ 30 };

    /**
     * @brief Navi mesh flag
     *
     * Navigation mesh flag set from the object
     */
    unsigned char navimeshFlag{ 0 };

    /**
     * @brief Collision detection type
     */
    unsigned char collisionType{ 0 };

    /**
     * @brief Combustion bullet generation delay time (seconds)
     *
     * Time to delay the generation of bullets for fire spread (seconds)
     */
    float burnBulletDelayTime{ 0.f };

    /**
     * @brief Combustion SFX generation delay Start time (seconds): 0
     *
     * SFX generation delay time during combustion Randomly determined between
     * start and end times
     */
    float burnSfxDelayTimeMin{ 0.f };

    /**
     * @brief Combustion SFX generation delay Start time (seconds): 1
     *
     * SFX generation delay time during combustion Randomly determined between
     * start and end times
     */
    float burnSfxDelayTimeMin_1{ 0.f };

    /**
     * @brief Combustion SFX generation delay Start time (seconds): 2
     *
     * SFX generation delay time during combustion Randomly determined between
     * start and end times
     */
    float burnSfxDelayTimeMin_2{ 0.f };

    /**
     * @brief Combustion SFX generation delay Start time (seconds): 3
     *
     * SFX generation delay time during combustion Randomly determined between
     * start and end times
     */
    float burnSfxDelayTimeMin_3{ 0.f };

    /**
     * @brief Combustion SFX generation delay End time (seconds): 0
     *
     * SFX generation delay time during combustion Randomly determined between
     * start and end times
     */
    float burnSfxDelayTimeMax{ 0.f };

    /**
     * @brief Combustion SFX generation delay End time (seconds): 1
     *
     * SFX generation delay time during combustion Randomly determined between
     * start and end times
     */
    float burnSfxDelayTimeMax_1{ 0.f };

    /**
     * @brief Combustion SFX generation delay End time (seconds): 2
     *
     * SFX generation delay time during combustion Randomly determined between
     * start and end times
     */
    float burnSfxDelayTimeMax_2{ 0.f };

    /**
     * @brief Combustion SFX generation delay End time (seconds): 3
     *
     * SFX generation delay time during combustion Randomly determined between
     * start and end times
     */
    float burnSfxDelayTimeMax_3{ 0.f };

    /**
     * @brief AI sound ID generated at the time of destruction
     */
    int BreakAiSoundID{ 0 };

    /**
     * @brief Hidden debris Wait time (seconds)
     *
     * Material ID of debris (-1: Do not hide)
     */
    float FragmentInvisibleWaitTime{ 0.f };

    /**
     * @brief Debris non-display time (seconds)
     *
     * Time to hide debris (seconds)
     */
    float FragmentInvisibleTime{ 0.f };

    unsigned char pad_3[16];

    /**
     * @brief Rigid body collision point distance coefficient [soft]
     *
     * Rigid body soft contact setting Collision point distance coefficient
     * [soft]
     */
    float RigidPenetrationScale_Soft{ 0.f };

    /**
     * @brief Rigid body collision point distance coefficient [normal]
     *
     * Rigid soft contact setting Collision point distance coefficient [Normal]
     */
    float RigidPenetrationScale_Normal{ 0.f };

    /**
     * @brief Rigid body collision point distance coefficient [hard]
     *
     * Rigid soft contact setting Collision point distance coefficient [hard]
     */
    float RigidPenetrationScale_Hard{ 0.f };

    /**
     * @brief SFX ID at the time of terrain contact
     *
     * SFX ID at terrain contact (-1: offset by terrain material)
     */
    int LandTouchSfxId{ -1 };

    /**
     * @brief Do you want to shield the damage?
     *
     * Whether to pass the damage to the other side when receiving damage (0:
     * pass, 1: do not pass)
     */
    bool isDamageCover : 1 { false };

    unsigned char pad_4[1];

    /**
     * @brief Paint decal target size
     *
     * Paint decal target size (only powers of 0 to 4096 2 allowed)
     */
    unsigned short paintDecalTargetTextureSize{ 256 };

    /**
     * @brief Life of dynamically generated Obj (seconds)
     *
     * Time until dynamically generated Obj disappears after generation (0: does
     * not disappear)
     */
    float lifeTime_forDC{ 0.f };

    /**
     * @brief Cross update distance (m)
     *
     * Distance from the camera to update havokCloth (0: always update)
     */
    float clothUpdateDist{ 0.f };

    /**
     * @brief SE ID when contacting a player
     *
     * SE ID to play when touched by a local player operated by you (-1: Do not
     * play)
     */
    int contactSeId{ -1 };

    /**
     * @brief SFX identifier when landing after destruction
     *
     * Object material-dependent SFX identifier that regenerates when first
     * landing after being destroyed (-1: does not occur)
     */
    int breakLandingSfxId{ -1 };

    /**
     * @brief Waypoint Damipoli ID_0
     *
     * Waypoint Damipoli ID_0 (-1: None)
     */
    int waypointDummyPolyId_0{ -1 };

    /**
     * @brief Waypoint parameter ID_0
     *
     * Waypoint parameter ID_0 (-1: none)
     */
    int waypointParamId_0{ -1 };

    /**
     * @brief Sound bank ID
     *
     * Sound bank ID (-1: no bank, other: bank with specified ID)
     */
    int soundBankId{ -1 };

    /**
     * @brief Drawing parameter reference ID
     *
     * Reference ID of drawing parameter
     */
    int refDrawParamId{ -1 };

    /**
     * @brief Automatically generated appearance height offset [m]
     *
     * Map automatic generation OBJ appearance height offset [m], does it float
     * from where the ray cast hits?
     */
    float autoCreateDynamicOffsetHeight{ 0.1f };

    int reserved0{ -1 };

    /**
     * @brief Destruction sound SEID
     *
     * Destruction sound SEID (9 digits) -1: Generated from objId
     */
    int soundBreakSEId{ -1 };

    unsigned char pad_5[40];
};

}; // namespace paramdef
}; // namespace from
