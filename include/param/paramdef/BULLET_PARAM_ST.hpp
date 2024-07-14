/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 *
 */
struct BULLET_PARAM_ST {
    /**
     * @brief Attack ID
     *
     * Register each attack parameter ID. → Attack type / Attack material /
     * Physical attack power / Magic attack power / Stamina attack power /
     * Knockback distance.
     */
    int atkId_Bullet{ -1 };

    /**
     * @brief SFX ID [bullet]
     *
     * Enter the SFX ID for [Bullet]. -1 does not occur.
     */
    int sfxId_Bullet{ -1 };

    /**
     * @brief SFXID [landing]
     *
     * [Impact] Enter the SFX ID. -1 does not occur.
     */
    int sfxId_Hit{ -1 };

    /**
     * @brief SFXID [at the time of repelling]
     *
     * [At the time of repelling] Enter the SFX ID. -1 does not occur.
     */
    int sfxId_Flick{ -1 };

    /**
     * @brief Lifespan [s]
     *
     * Time for missiles to continue to exist (-1 is infinite).
     */
    float life{ -1.f };

    /**
     * @brief Range [m]
     *
     * Distance at which attenuation begins (not actual flight distance).
     */
    float dist{ 0.f };

    /**
     * @brief Fire interval [s]
     *
     * Specify how many seconds the missile will be fired.
     */
    float shootInterval{ 0.f };

    /**
     * @brief Gravity within range [m / s ^ 2]
     *
     * Downward gravity within range.
     */
    float gravityInRange{ 0.f };

    /**
     * @brief Gravity outside range [m / s ^ 2]
     *
     * Gravity applied downward when damping begins (expresses the feeling of
     * falling down.
     */
    float gravityOutRange{ 0.f };

    /**
     * @brief Guidance stop distance [m]
     *
     * The distance to the target to stop the guidance. A parameter that
     * prevents you from hitting too much with a guided bullet.
     */
    float hormingStopRange{ 0.f };

    /**
     * @brief Initial velocity [m / s]
     *
     * Initial speed of SFX.
     */
    float initVellocity{ 0.f };

    /**
     * @brief Acceleration within range [m / s ^ 2]
     *
     * Acceleration within SFX range.
     */
    float accelInRange{ 0.f };

    /**
     * @brief Acceleration outside range [m / s ^ 2]
     *
     * Acceleration when SFX goes out of range.
     */
    float accelOutRange{ 0.f };

    /**
     * @brief Maximum speed [m / s]
     *
     * maximum speed.
     */
    float maxVellocity{ 0.f };

    /**
     * @brief Minimum speed [m / s]
     *
     * Minimum guaranteed speed.
     */
    float minVellocity{ 0.f };

    /**
     * @brief Acceleration start time [s]
     *
     * Until this time, do not accelerate (make sure you can shoot magic like
     * rockets).
     */
    float accelTime{ 0.f };

    /**
     * @brief Guidance start distance [m]
     *
     * How many meters should the guidance start?
     */
    float homingBeginDist{ 0.f };

    /**
     * @brief Initial radius [m]
     *
     * Set the radius of the hit ball.
     */
    float hitRadius{ -1.f };

    /**
     * @brief Maximum radius [m]
     *
     * Maximum radius of the hit sphere (If -1, make it the same as the initial
     * radius / default)
     */
    float hitRadiusMax{ -1.f };

    /**
     * @brief Range diffusion time [s]
     *
     * The time when the radius of the range expands to a small extent.
     */
    float spreadTime{ 0.f };

    /**
     * @brief Activation delay [s]
     *
     * Time from landing to explosion (if 0, it explodes immediately).
     */
    float expDelay{ 0.f };

    /**
     * @brief Induction shift amount [m]
     *
     * It is accurate if it is 0. At the time of shooting, each component of XYZ
     * should be aimed by shifting this amount.
     */
    float hormingOffsetRange{ 0.f };

    /**
     * @brief Time to live in damage hit history [s]
     *
     * Damage hit history survival time [sec] (<= 0.0f: indefinite)
     */
    float dmgHitRecordLifeTime{ 0.f };

    /**
     * @brief External force [m / s ^ 2]
     *
     * External force applied in the direction of shooting. (Y-axis is removed)
     */
    float externalForce{ 0.f };

    /**
     * @brief Special effects on the person who shot
     */
    int spEffectIDForShooter{ -1 };

    /**
     * @brief Funnel NPC Thinking ID
     *
     * Parameters used by the funnel to search for the target
     */
    int autoSearchNPCThinkID{ 0 };

    /**
     * @brief Generated bullet ID
     *
     * Specify the ID when generating a new bullet parameter from the bullet
     * parameter
     */
    int HitBulletID{ -1 };

    /**
     * @brief Special effect ID0
     *
     * Register each special effect parameter ID. → General special effects.
     */
    int spEffectId0{ -1 };

    /**
     * @brief Special effect ID1
     *
     * Register each special effect parameter ID. → General special effects.
     */
    int spEffectId1{ -1 };

    /**
     * @brief Special effect ID2
     *
     * Register each special effect parameter ID. → General special effects.
     */
    int spEffectId2{ -1 };

    /**
     * @brief Special effect ID3
     *
     * Register each special effect parameter ID. → General special effects.
     */
    int spEffectId3{ -1 };

    /**
     * @brief Special effect ID4
     *
     * Register each special effect parameter ID. → General special effects.
     */
    int spEffectId4{ -1 };

    /**
     * @brief Number of shots
     *
     * The number of missiles fired at one time.
     */
    unsigned short numShoot{ 0 };

    /**
     * @brief Induction performance [deg / s]
     *
     * How many corrections per second? ..
     */
    short homingAngle{ 0 };

    /**
     * @brief Launch angle [deg]
     *
     * Specify how many times the missile is fired forward.
     */
    short shootAngle{ 0 };

    /**
     * @brief Launch angle interval [deg]
     *
     * When firing multiple missiles, specify how often to fire them. (Y-axis)
     */
    short shootAngleInterval{ 0 };

    /**
     * @brief Launch elevation interval [deg]
     *
     * When firing multiple missiles, specify how often to fire them. (X-axis)
     */
    short shootAngleXInterval{ 0 };

    /**
     * @brief Physical attack power attenuation rate [% / s]
     *
     * Correction value that decreases in 1 second after the attenuation
     * distance.
     */
    signed char damageDamp{ 0 };

    /**
     * @brief Magic attack power attenuation rate [% / s]
     *
     * Correction value that decreases in 1 second after the attenuation
     * distance.
     */
    signed char spelDamageDamp{ 0 };

    /**
     * @brief Flame attack power attenuation rate [% / s]
     *
     * Correction value that decreases in 1 second after the attenuation
     * distance.
     */
    signed char fireDamageDamp{ 0 };

    /**
     * @brief Electric shock attack power attenuation rate [% / s]
     *
     * Correction value that decreases in 1 second after the attenuation
     * distance.
     */
    signed char thunderDamageDamp{ 0 };

    /**
     * @brief Stamina damage attenuation rate [% / s]
     *
     * Correction value that decreases in 1 second after the attenuation
     * distance.
     */
    signed char staminaDamp{ 0 };

    /**
     * @brief Knockback attenuation factor [% / s]
     *
     * Correction value that decreases in 1 second after the attenuation
     * distance.
     */
    signed char knockbackDamp{ 0 };

    /**
     * @brief Launch elevation angle [deg]
     *
     * Additional elevation angle from the horizontal.
     */
    signed char shootAngleXZ{ 0 };

    /**
     * @brief Lock direction limit angle
     *
     * Limit angle when facing the lock direction
     */
    unsigned char lockShootLimitAng{ 0 };

    unsigned char pad2[1];

    /**
     * @brief Previous movement direction addition rate [%]
     *
     * Ratio to add the previous movement direction to the current direction
     * when the sliding bullet hits the wall
     */
    unsigned char prevVelocityDirRate{ 0 };

    /**
     * @brief Physical attributes
     *
     * Set the physical attributes to set for the bullet
     */
    unsigned char atkAttribute{ 254 };

    /**
     * @brief Special attributes
     *
     * Set special attributes to set for bullets
     */
    unsigned char spAttribute{ 254 };

    /**
     * @brief Attack attribute [SFX / SE]
     *
     * Specify what the attack attribute is
     */
    unsigned char Material_AttackType{ 254 };

    /**
     * @brief Attack material [SFX / SE]
     *
     * Used for SFX / SE during attack
     */
    unsigned char Material_AttackMaterial{ 254 };

    /**
     * @brief Penetrate the character?
     *
     * If it is ON, it will penetrate without landing when it hits the
     * character.
     */
    bool isPenetrateChr : 1 { false };

    /**
     * @brief Penetrate the object?
     *
     * If it is ON, it will penetrate without landing when hitting a dynamic /
     * partial destruction asset.
     */
    bool isPenetrateObj : 1 { false };

    unsigned char unknown_0x98_3 : 1 { 0 };

    unsigned char pad : 5;

    /**
     * @brief Occurrence condition
     *
     * Specify the condition to judge whether to generate a bullet when it lands
     * or the life is extinguished
     */
    unsigned char launchConditionType{ 0 };

    /**
     * @brief Follow-up type
     *
     * Follow-up type. "Do not follow" is the default.
     */
    unsigned char FollowType : 3 { 0 };

    /**
     * @brief Source type
     *
     * Source type. Usually from Damipoli. (Introduced to judge meteo)
     */
    unsigned char EmittePosType : 3 { 0 };

    /**
     * @brief Will it stay stuck?
     *
     * Set whether bullets such as arrows will remain stuck in the character
     */
    bool isAttackSFX : 1 { false };

    /**
     * @brief Do you keep hitting?
     */
    bool isEndlessHit : 1 { false };

    /**
     * @brief Penetrate the map?
     *
     * If it is ON, it will penetrate without landing when hitting a hit /
     * static asset.
     */
    bool isPenetrateMap : 1 { false };

    /**
     * @brief Are you an enemy or an ally?
     *
     * Are you an enemy or an ally? (Not a wandering ghost)
     */
    bool isHitBothTeam : 1 { false };

    /**
     * @brief Do you want to share the hit list?
     *
     * Specify whether to share the hit list
     */
    bool isUseSharedHitList : 1 { false };

    /**
     * @brief Do you use multiple Damipoli?
     *
     * Do you use the same Damipoly ID more than once when placing bullets?
     */
    bool isUseMultiDmyPolyIfPlace : 1 { false };

    /**
     * @brief Does it hit other bullets forced erasure A?
     */
    bool isHitOtherBulletForceEraseA : 1 { false };

    /**
     * @brief Does it hit the other bullet forced erasure B?
     */
    bool isHitOtherBulletForceEraseB : 1 { false };

    /**
     * @brief Do you hit the force magic?
     */
    bool isHitForceMagic : 1 { false };

    /**
     * @brief Whether to ignore the effect at the time of water collision
     *
     * Should I ignore the effect if it hits the surface of the water?
     */
    bool isIgnoreSfxIfHitWater : 1 { false };

    /**
     * @brief Whether to ignore the state transition at the time of water
     * collision
     *
     * Whether to ignore the state transition even if it hits water
     */
    bool isIgnoreMoveStateIfHitWater : 1 { false };

    /**
     * @brief Do you hit the dark force magic?
     */
    bool isHitDarkForceMagic : 1 { false };

    /**
     * @brief Damage calculation side
     *
     * Damage calculation side. During multiplayer, the damage calculation is
     * for switching between the giving side and the receiving side.
     */
    unsigned char dmgCalcSide : 2 { 0 };

    /**
     * @brief Bullet automatic capture permission
     *
     * Whether to automatically follow when not locked on
     */
    bool isEnableAutoHoming : 1 { false };

    /**
     * @brief For synchronous bullets, do you recalculate at the Damipoli
     * position?
     *
     * In the case of a synchronously generated bullet, the emitter attitude at
     * the time of synchronization is used without recalculating the attitude
     * due to the Damipoli position when the bullet is generated.
     */
    bool isSyncBulletCulcDumypolyPos : 1 { false };

    /**
     * @brief Do you want to overwrite the owner with the reference direction of
     * the bullet?
     *
     * Only valid for sub-bullets. If it is ON, the reference direction is the
     * owner.
     */
    bool isOwnerOverrideInitAngle : 1 { false };

    /**
     * @brief Will SFX be taken over by the child bullets?
     *
     * Take over the SFX of the parent bullet. Ignore the SFX ID set for the sub
     * bullet
     */
    bool isInheritSfxToChild : 1 { false };

    /**
     * @brief Dark attack power attenuation rate [% / s]
     *
     * Correction value that decreases in 1 second after the attenuation
     * distance.
     */
    signed char darkDamageDamp{ 0 };

    /**
     * @brief Bullet SFX extinction type at the time of landing
     *
     * Bullet SFX extinction type when landing or playing
     */
    signed char bulletSfxDeleteType_byHit{ 0 };

    /**
     * @brief Bullet SFX extinction type at the end of life
     */
    signed char bulletSfxDeleteType_byLifeDead{ 0 };

    /**
     * @brief Target vertical offset [m]
     *
     * Vertical offset of landing position. Shift the target position up and
     * down at the time of launch and during homing. (-N ~ n)
     */
    float targetYOffsetRange{ 0.f };

    /**
     * @brief Launch angle random number [deg]
     *
     * Upper limit of random number of firing angle (0 to 360)
     */
    float shootAngleYMaxRandom{ 0.f };

    /**
     * @brief Elevation angle random number [deg]
     *
     * Upper limit of firing elevation random number (0 to 360)
     */
    float shootAngleXMaxRandom{ 0.f };

    /**
     * @brief Interval specified bullet ID
     *
     * Bullet ID used when making bullets at regular intervals
     */
    int intervalCreateBulletId{ -1 };

    /**
     * @brief Occurrence interval: Minimum time [s]
     *
     * Minimum interval for making bullets at regular intervals (0 to n)
     */
    float intervalCreateTimeMin{ 0.f };

    /**
     * @brief Occurrence interval: Maximum time [s]
     *
     * Maximum interval for making bullets at regular intervals (function is
     * disabled if 0 to n 0)
     */
    float intervalCreateTimeMax{ 0.f };

    /**
     * @brief Predicted shooting velocity observation time [s]
     *
     * Average speed observation time of predicted shooting function (function
     * is invalid if 0 to 40)
     */
    float predictionShootObserveTime{ 0.f };

    /**
     * @brief Waiting time for start of specified interval [s]
     *
     * Waiting time to start making bullets at regular intervals
     */
    float intervalCreateWaitTime{ 0.f };

    /**
     * @brief The type of SFX attitude generated from the bullet
     *
     * Set the initial attitude of an SFX or sub-bullet created from a bullet
     */
    unsigned char sfxPostureType{ 0 };

    /**
     * @brief Creation restriction group Id
     *
     * If it is 0, it is unused. If the upper limit is reached when creating a
     * bullet set in the same group Id, that bullet will not be created.
     * (Bullets created synchronously on the network will be released
     * regardless)
     */
    unsigned char createLimitGroupId{ 0 };

    unsigned char pad5[1];

    /**
     * @brief Will the speed be taken over by the submunition?
     *
     * Take over the speed of the timing to replace the submunition. Ignore the
     * speed set for the submunition
     */
    bool isInheritSpeedToChild : 1 { false };

    /**
     * @brief Do not play landing SFX when character / OBJ hits
     *
     * When ON, the bullet parameter "landing SFX" does not play even if it hits
     * a character / object.
     */
    bool isDisableHitSfx_byChrAndObj : 1 { false };

    /**
     * @brief Launch position Makes a wall digging judgment by skipping a ray
     * that connects the center of the character in parallel.
     *
     * There was a problem with the digging judgment when firing a bullet, so it
     * is for error handling. SEQ23101 [Own character] If you use a soul short
     * arrow or a strong soul short arrow in close contact with a character with
     * a high lock-on position, the direction of the bullet will be reversed.
     */
    bool isCheckWall_byCenterRay : 1 { false };

    /**
     * @brief Do you hit flare magic?
     */
    bool isHitFlare : 1 { false };

    /**
     * @brief Do you use primitive magic Atari?
     *
     * Do you use primitive magic Atari? It will change to a filter that
     * corresponds to the Atari dedicated to primitive magic.
     */
    bool isUseBulletWallFilter : 1 { false };

    unsigned char unknown_0xc3_5 : 1 { 0 };

    /**
     * @brief The number of funnels on the PC does not fluctuate due to reason
     *
     * The number of funnels on the PC does not fluctuate by force. Become the
     * number of shots
     */
    bool isNonDependenceMagicForFunnleNum : 1 { false };

    /**
     * @brief Does it react to AI bullets (even with 0 attack power)?
     */
    bool isAiInterruptShootNoDamageBullet : 1 { false };

    /**
     * @brief Occurrence range (radius) at random occurrence [m]
     *
     * The range of bullets used when the source type is set to occur at random
     * locations.
     */
    float randomCreateRadius{ 0.f };

    /**
     * @brief Funnel tracking position_base point height [m]
     */
    float followOffset_BaseHeight{ 0.f };

    /**
     * @brief Asset number generated at the time of landing
     *
     * The number of the asset to be generated at the time of landing. -1: Do
     * not generate. The asset number is the last 6 digits of the asset.
     * Example: AEG999_999 = 999999
     */
    int assetNo_Hit{ -1 };

    /**
     * @brief Lifetime random number [s]
     *
     * Add a random number of seconds with a set time fluctuation range to the
     * "lifetime [s]".
     */
    float lifeRandomRange{ 0.f };

    /**
     * @brief Induction performance (X-axis individual) [deg / s]
     *
     * Only the X-axis component of the inductive performance is changed. Do not
     * change with -1
     */
    short homingAngleX{ -1 };

    /**
     * @brief Ballistic calculation type
     */
    unsigned char ballisticCalcType{ 0 };

    /**
     * @brief Attach effect type
     *
     * Effect type to attach
     */
    unsigned char attachEffectType{ 0 };

    /**
     * @brief SEID1 [bullet]
     *
     * Insert SE ID1 for [Bullet]. -1: Not generated 9 digits. Sound type is
     * fixed to s: SFX.
     */
    int seId_Bullet1{ -1 };

    /**
     * @brief SEID2 [bullet]
     *
     * Insert SE ID 2 for [Bullet]. -1: Not generated 9 digits. Sound type is
     * fixed to s: SFX.
     */
    int seId_Bullet2{ -1 };

    /**
     * @brief SEID [landing]
     *
     * Insert SE ID 1 for [landing]. -1 does not occur. 9 digits. Sound type is
     * fixed to s: SFX.
     */
    int seId_Hit{ -1 };

    /**
     * @brief SEID [at the time of repelling]
     *
     * [At the time of repelling] Enter SE ID1 for. -1 does not occur. 9 digits.
     * Sound type is fixed to s: SFX.
     */
    int seId_Flick{ -1 };

    /**
     * @brief [Curly shooting] Launch elevation limit_lower limit [deg]
     *
     * [Curly fire] The lower limit [deg] with the firing elevation angle as a
     * reference (0 deg) before applying the curve fire calculation.
     */
    short howitzerShootAngleXMin{ 0 };

    /**
     * @brief [Song firing] Launch elevation limit_upper limit [deg]
     *
     * [Sky firing] The upper limit [deg] based on the firing elevation angle
     * (0deg) before applying the bending firing calculation.
     */
    short howitzerShootAngleXMax{ 0 };

    /**
     * @brief [Song shooting] Minimum speed limit [m / s]
     *
     * [Song firing] The minimum speed limit for song firing calculation [m /
     * s].
     */
    float howitzerInitMinVelocity{ 0.f };

    /**
     * @brief [Song shooting] Maximum speed limit [m / s]
     *
     * [Song firing] Maximum speed limit for song firing calculation [m / s].
     */
    float howitzerInitMaxVelocity{ 0.f };

    /**
     * @brief SFXID [At the time of forced erasure]
     *
     * SFX ID at the time of forced erasure. -1 does not occur.
     */
    int sfxId_ForceErase{ -1 };

    /**
     * @brief Bullet SFX extinction type at the time of forced erasure
     */
    signed char bulletSfxDeleteType_byForceErase{ 0 };

    unsigned char pad3[1];

    /**
     * @brief SFX direction specification when following Damipoli
     */
    short followDmypoly_forSfxPose{ -1 };

    /**
     * @brief Funnel tracking position_radius [m]
     */
    float followOffset_Radius{ 0.f };

    /**
     * @brief Special effect flight distance correction magnification
     */
    float spBulletDistUpRate{ 1.f };

    /**
     * @brief Target range [m] when unlocked
     *
     * Target range when unlocked (-1: Refer to "range", 0: No target)
     */
    float nolockTargetDist{ 0.f };

    unsigned char pad4[8];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::BULLET_PARAM_ST) == 272,
    "BULLET_PARAM_ST paramdef size does not match detected size");
