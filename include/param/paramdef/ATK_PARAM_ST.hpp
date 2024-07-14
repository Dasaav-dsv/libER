/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 *
 */
struct ATK_PARAM_ST {
    /**
     * @brief 0 radius per
     *
     * Sphere, capsule radius
     */
    float hit0_Radius{ 0.f };

    /**
     * @brief 1 radius per
     *
     * Sphere, capsule radius
     */
    float hit1_Radius{ 0.f };

    /**
     * @brief 2 radii per
     *
     * Sphere, capsule radius
     */
    float hit2_Radius{ 0.f };

    /**
     * @brief 3 radii per
     *
     * Sphere, capsule radius
     */
    float hit3_Radius{ 0.f };

    /**
     * @brief Knockback distance [m]
     */
    float knockbackDist{ 0.f };

    /**
     * @brief Hit stop time [s]
     *
     * Hit stop stop time [s]
     */
    float hitStopTime{ 0.f };

    /**
     * @brief Special effects 0
     *
     * Enter the ID created with the special effects parameter
     */
    int spEffectId0{ -1 };

    /**
     * @brief Special effect 1
     *
     * Enter the ID created with the special effects parameter
     */
    int spEffectId1{ -1 };

    /**
     * @brief Special effect 2
     *
     * Enter the ID created with the special effects parameter
     */
    int spEffectId2{ -1 };

    /**
     * @brief Special effect 3
     *
     * Enter the ID created with the special effects parameter
     */
    int spEffectId3{ -1 };

    /**
     * @brief Special effect 4
     *
     * Enter the ID created with the special effects parameter
     */
    int spEffectId4{ -1 };

    /**
     * @brief Per 0 Damipoli 1
     *
     * Damipoli in sphere, capsule position
     */
    short hit0_DmyPoly1{ 0 };

    /**
     * @brief 1 per Damipoli 1
     *
     * Damipoli in sphere, capsule position
     */
    short hit1_DmyPoly1{ 0 };

    /**
     * @brief 2 per Damipoli 1
     *
     * Damipoli in sphere, capsule position
     */
    short hit2_DmyPoly1{ 0 };

    /**
     * @brief 3 per Damipoli 1
     *
     * Damipoli in sphere, capsule position
     */
    short hit3_DmyPoly1{ 0 };

    /**
     * @brief Per 0 Damipoli 2
     *
     * The position of another point on the capsule Damipoli. -1 makes it a
     * sphere
     */
    short hit0_DmyPoly2{ 0 };

    /**
     * @brief 1 per Damipoli 2
     *
     * The position of another point on the capsule Damipoli. -1 makes it a
     * sphere
     */
    short hit1_DmyPoly2{ 0 };

    /**
     * @brief 2 per Damipoli 2
     *
     * The position of another point on the capsule Damipoli. -1 makes it a
     * sphere
     */
    short hit2_DmyPoly2{ 0 };

    /**
     * @brief 3 per Damipoli 2
     *
     * The position of another point on the capsule Damipoli. -1 makes it a
     * sphere
     */
    short hit3_DmyPoly2{ 0 };

    /**
     * @brief Blow-off correction value
     *
     * Correction value when blowing off
     */
    unsigned short blowingCorrection{ 0 };

    /**
     * @brief Physical attack power correction value
     *
     * PC only. Multiplier by multiplying the basic physical attack power
     */
    unsigned short atkPhysCorrection{ 0 };

    /**
     * @brief Magic attack power correction value
     *
     * PC only. Multiply the magic attack power (in the case of a bow, correct
     * the missile)
     */
    unsigned short atkMagCorrection{ 0 };

    /**
     * @brief Fire attack power correction value
     *
     * PC only. Multiply the fire attack power (in the case of a bow, correct
     * the missile)
     */
    unsigned short atkFireCorrection{ 0 };

    /**
     * @brief Electric shock attack power correction value
     *
     * PC only. Multiplier for electric shock attack power (in the case of a
     * bow, correct the missile)
     */
    unsigned short atkThunCorrection{ 0 };

    /**
     * @brief Stamina attack power correction value
     *
     * PC only. Multiplier for stamina attack power
     */
    unsigned short atkStamCorrection{ 0 };

    /**
     * @brief Repellent attack power correction value
     *
     * PC only. 1 only
     */
    unsigned short guardAtkRateCorrection{ 0 };

    /**
     * @brief Repellent defense correction value
     *
     * PC only. Multiplying the base value by the repelling of the attack
     */
    unsigned short guardBreakCorrection{ 0 };

    /**
     * @brief Throw-through attack power correction value
     *
     * Weapon correction value for throw-through attacks
     */
    unsigned short atkThrowEscapeCorrection{ 0 };

    /**
     * @brief Subcategory 1
     */
    unsigned char subCategory1{ 0 };

    /**
     * @brief Subcategory 2
     */
    unsigned char subCategory2{ 0 };

    /**
     * @brief Physical attack power
     *
     * NPCs only. Basic damage of physical attack
     */
    unsigned short atkPhys{ 0 };

    /**
     * @brief Magic attack power
     *
     * NPCs only. Additional damage from magic attacks
     */
    unsigned short atkMag{ 0 };

    /**
     * @brief Fire attack power
     *
     * NPCs only. Additional damage from fire attacks
     */
    unsigned short atkFire{ 0 };

    /**
     * @brief Electric shock attack power
     *
     * NPCs only. Additional damage from electric shock attacks
     */
    unsigned short atkThun{ 0 };

    /**
     * @brief Stamina attack power
     *
     * NPCs only. Amount of damage to enemy (player) stamina
     */
    unsigned short atkStam{ 0 };

    /**
     * @brief Repellent attack power
     *
     * NPCs only. Flick value
     */
    unsigned short guardAtkRate{ 0 };

    /**
     * @brief Repellent defense
     *
     * NPCs only. Value used to determine if an attack is repelled
     */
    unsigned short guardBreakRate{ 0 };

    unsigned char pad6[1];

    /**
     * @brief Can damage bushes
     *
     * Do you want to calculate damage for assets that are "Break due to bush
     * damage"? To set. 〇: Calculate, ×: Do not calculate (that is, you cannot
     * inflict damage) [GR] SEQ20617
     */
    bool isEnableCalcDamageForBushesObj{ false };

    /**
     * @brief Throw-through attack power
     */
    unsigned short atkThrowEscape{ 0 };

    /**
     * @brief Object attack power
     *
     * Attack power against OBJ
     */
    unsigned short atkObj{ 0 };

    /**
     * @brief Stamina cut rate correction when guarding
     *
     * Correct the [stamina cut rate when guarding] set in the weapon parameter
     * and NPC parameter.
     */
    short guardStaminaCutRate{ 0 };

    /**
     * @brief Guard magnification
     *
     * NPC, the guard performance set in the weapon parameter is uniformly
     * corrected. 0, 1x / 100, 2x / -100, guard multiplier = (guard multiplier /
     * 100) to increase / decrease the parameter to 0. + 1)
     */
    short guardRate{ 0 };

    /**
     * @brief Throw type ID
     *
     * ID associated with the throw parameter
     */
    unsigned short throwTypeId{ 0 };

    /**
     * @brief 0 parts per
     *
     * Hit part
     */
    unsigned char hit0_hitType{ 0 };

    /**
     * @brief 1 part per part
     *
     * Hit part
     */
    unsigned char hit1_hitType{ 0 };

    /**
     * @brief 2 parts per
     *
     * Hit part
     */
    unsigned char hit2_hitType{ 0 };

    /**
     * @brief 3 parts per
     *
     * Hit part
     */
    unsigned char hit3_hitType{ 0 };

    /**
     * @brief 0 Priority per
     *
     * priority. If there are two or more hits at the same time, the one with
     * the higher priority will be adopted.
     */
    unsigned char hti0_Priority{ 0 };

    /**
     * @brief 1 priority per
     *
     * priority. If there are two or more hits at the same time, the one with
     * the higher priority will be adopted.
     */
    unsigned char hti1_Priority{ 0 };

    /**
     * @brief 2 priorities per
     *
     * priority. If there are two or more hits at the same time, the one with
     * the higher priority will be adopted.
     */
    unsigned char hti2_Priority{ 0 };

    /**
     * @brief 3 priorities per
     *
     * priority. If there are two or more hits at the same time, the one with
     * the higher priority will be adopted.
     */
    unsigned char hti3_Priority{ 0 };

    /**
     * @brief Damage level
     *
     * Which damage motion should be played against the enemy when attacking? To
     * decide.
     */
    unsigned char dmgLevel{ 0 };

    /**
     * @brief See per map
     *
     * Which map do you see around the attack? The set
     */
    unsigned char mapHitType{ 0 };

    /**
     * @brief Guard cut rate invalidation factor
     *
     * Guard cut rate invalidation ratio (-100 to 100) → Normal at 0 /
     * Completely invalidated at -100 / Doubles the defense effect of the
     * opponent at 100 → -50, 100% cut shield becomes 50% cut Become
     */
    signed char guardCutCancelRate{ 0 };

    /**
     * @brief Physical attributes
     *
     * Physical attributes to set for attacks
     */
    unsigned char atkAttribute{ 0 };

    /**
     * @brief Special attributes
     *
     * Special attributes to set for attacks
     */
    unsigned char spAttribute{ 0 };

    /**
     * @brief Attack attribute [SFX / SE]
     *
     * Specify SFX / SE at the time of attack (1 set by attribute, material,
     * size)
     */
    unsigned char atkType{ 0 };

    /**
     * @brief Attack material [SFX / SE]
     *
     * Specify SFX / SE at the time of attack (1 set by attribute, material,
     * size)
     */
    unsigned char atkMaterial{ 0 };

    /**
     * @brief Guard judgment position
     */
    unsigned char guardRangeType{ 0 };

    /**
     * @brief Defensive material 1 [SE]
     *
     * Used for SE when guarding 1
     */
    unsigned short defSeMaterial1{ 0 };

    /**
     * @brief Source per
     *
     * Where do you get the Damipoli ID per attack? To specify
     */
    unsigned char hitSourceType{ 0 };

    /**
     * @brief Throw
     *
     * Flag used for throwing information
     */
    unsigned char throwFlag{ 0 };

    /**
     * @brief Unguardable flag
     *
     * If 1, ignore the guard on the guard side and enter the damage level
     */
    bool disableGuard : 1 { false };

    /**
     * @brief Stamina does not decrease
     *
     * "Destruction judgment" is performed by stamina attack power, but stamina
     * is not actually reduced.
     */
    bool disableStaminaAttack : 1 { false };

    /**
     * @brief Special effects disabled on hit
     *
     * Disables special effects when an attack hits. SCE bug countermeasures
     */
    bool disableHitSpEffect : 1 { false };

    /**
     * @brief Do not notify AI of missed swing
     */
    bool IgnoreNotifyMissSwingForAI : 1 { false };

    /**
     * @brief Do you issue SFX many times during HIT?
     *
     * Enemy only: Does SFX occur continuously when hitting a wall?
     */
    bool repeatHitSfx : 1 { false };

    /**
     * @brief Is it an arrow attack?
     *
     * Used for site damage judgment.
     */
    bool isArrowAtk : 1 { false };

    /**
     * @brief Is it a ghost attack?
     *
     * Used for determining spirit damage.
     */
    bool isGhostAtk : 1 { false };

    /**
     * @brief Do you penetrate invincible
     *
     * Ignore invincible effects such as steps, TAE's complete invincibility
     * cannot be ignored.
     */
    bool isDisableNoDamage : 1 { false };

    /**
     * @brief Attack strength [SFX]
     */
    signed char atkPow_forSfx{ 0 };

    /**
     * @brief Attack direction [SFX]
     */
    signed char atkDir_forSfx{ 0 };

    /**
     * @brief Target: ● Hostile
     */
    bool opposeTarget : 1 { true };

    /**
     * @brief Target: ○ Allies
     */
    bool friendlyTarget : 1 { false };

    /**
     * @brief Target: myself
     */
    bool selfTarget : 1 { false };

    /**
     * @brief Do you want to check the door penetration?
     *
     * Whether to check the door penetration. In the case of ○, it is judged
     * whether or not the target through the door can be attacked.
     */
    bool isCheckDoorPenetration : 1 { false };

    /**
     * @brief Is it a riding special attack?
     *
     * If you hit the target of the riding special attack while riding, the SA
     * damage will be multiplied by the multiplier.
     */
    bool isVsRideAtk : 1 { false };

    /**
     * @brief Do you refer to the additional attack power even in weapon
     * attacks?
     */
    bool isAddBaseAtk : 1 { false };

    /**
     * @brief Is it excluded from threat level notification?
     */
    bool excludeThreatLvNotify : 1 { false };

    unsigned char pad1 : 1;

    /**
     * @brief Behavior identification value 1
     *
     * Behavior identification value: Extra large damage transition
     */
    unsigned char atkBehaviorId{ 0 };

    /**
     * @brief Attack strength [SE]
     */
    signed char atkPow_forSe{ 0 };

    /**
     * @brief SA attack power
     *
     * NPCs only. Value used for SA break calculation formula
     */
    float atkSuperArmor{ 0.f };

    /**
     * @brief Decal ID 1 (directly specified)
     */
    int decalId1{ -1 };

    /**
     * @brief Decal ID 2 (directly specified)
     */
    int decalId2{ -1 };

    /**
     * @brief AI sound ID when it occurs
     *
     * ID of AI sound generated when an attack occurs
     */
    int AppearAiSoundId{ 0 };

    /**
     * @brief AI sound ID on hit
     *
     * ID of AI sound generated at the time of hit
     */
    int HitAiSoundId{ 0 };

    /**
     * @brief Vibration effect on hit (-1 invalid)
     *
     * Vibration ID at the time of hit (-1 invalid). It is a vibration ID when
     * none of the following three applies
     */
    int HitRumbleId{ -1 };

    /**
     * @brief Vibration ID when the tip hits
     *
     * Vibration ID at the time of hit when hitting the tip (-1 invalid)
     */
    int HitRumbleIdByNormal{ -1 };

    /**
     * @brief Vibration ID when hit in the middle
     *
     * Vibration ID at the time of hit when hit in the middle (-1 invalid)
     */
    int HitRumbleIdByMiddle{ -1 };

    /**
     * @brief Vibration ID at the time of root hit
     *
     * Vibration ID at the time of hit when hitting the root (-1 invalid)
     */
    int HitRumbleIdByRoot{ -1 };

    /**
     * @brief Sword Flash SfxID_0
     *
     * Sword flash SfxID_0 (-1 invalid)
     */
    int traceSfxId0{ -1 };

    /**
     * @brief Root Sword Flash Damipoli ID_0
     *
     * Sword flash root Damipoli ID_0 (-1 invalid)
     */
    int traceDmyIdHead0{ -1 };

    /**
     * @brief Sword tip sword flash Damipoli ID_0
     *
     * Sword Flash Sword Tip Damipoli ID_0
     */
    int traceDmyIdTail0{ -1 };

    /**
     * @brief Sword Flash SfxID_1
     *
     * Sword flash SfxID_1 (-1 invalid)
     */
    int traceSfxId1{ -1 };

    /**
     * @brief Root Sword Flash Damipoli ID_1
     *
     * Sword Flash Root Damipoli ID_1 (-1 invalid)
     */
    int traceDmyIdHead1{ -1 };

    /**
     * @brief Sword tip sword flash Damipoli ID_1
     *
     * Sword Flash Sword Tip Damipoli ID_1
     */
    int traceDmyIdTail1{ -1 };

    /**
     * @brief Sword Flash SfxID_2
     *
     * Sword flash SfxID_2 (-1 invalid)
     */
    int traceSfxId2{ -1 };

    /**
     * @brief Root Sword Flash Damipoli ID_2
     *
     * Sword Flash Root Damipoli ID_2 (-1 invalid)
     */
    int traceDmyIdHead2{ -1 };

    /**
     * @brief Sword tip sword flash Damipoli ID_2
     *
     * Sword Flash Sword Tip Damipoli ID_2
     */
    int traceDmyIdTail2{ -1 };

    /**
     * @brief Sword Flash SfxID_3
     *
     * Sword Flash SfxID_3 (-1 invalid)
     */
    int traceSfxId3{ -1 };

    /**
     * @brief Root Sword Flash Damipoli ID_3
     *
     * Sword flash root Damipoli ID_3 (-1 invalid)
     */
    int traceDmyIdHead3{ -1 };

    /**
     * @brief Sword tip sword flash Damipoli ID_3
     *
     * Sword Flash Sword Tip Damipoli ID_3
     */
    int traceDmyIdTail3{ -1 };

    /**
     * @brief Sword Flash SfxID_4
     *
     * Sword Flash SfxID_4 (-1 invalid)
     */
    int traceSfxId4{ -1 };

    /**
     * @brief Root Sword Flash Damipoli ID_4
     *
     * Sword flash root Damipoli ID_4 (-1 invalid)
     */
    int traceDmyIdHead4{ -1 };

    /**
     * @brief Sword tip sword flash Damipoli ID_4
     *
     * Sword Flash Sword Tip Damipoli ID_4
     */
    int traceDmyIdTail4{ -1 };

    /**
     * @brief Sword Flash SfxID_5
     *
     * Sword Flash SfxID_5 (-1 invalid)
     */
    int traceSfxId5{ -1 };

    /**
     * @brief Root Sword Flash Damipoli ID_5
     *
     * Sword Flash Root Damipoli ID_5 (-1 invalid)
     */
    int traceDmyIdHead5{ -1 };

    /**
     * @brief Sword tip sword flash Damipoli ID_5
     *
     * Sword Flash Sword Tip Damipoli ID_5
     */
    int traceDmyIdTail5{ -1 };

    /**
     * @brief Sword Flash SfxID_6
     *
     * Sword Flash SfxID_6 (-1 invalid)
     */
    int traceSfxId6{ -1 };

    /**
     * @brief Root Sword Flash Damipoli ID_6
     *
     * Sword Flash Root Damipoli ID_6 (-1 invalid)
     */
    int traceDmyIdHead6{ -1 };

    /**
     * @brief Sword tip sword flash Damipoli ID_6
     *
     * Sword Flash Sword Tip Damipoli ID_6
     */
    int traceDmyIdTail6{ -1 };

    /**
     * @brief Sword Flash SfxID_7
     *
     * Sword Flash SfxID_7 (-1 invalid)
     */
    int traceSfxId7{ -1 };

    /**
     * @brief Root Sword Flash Damipoli ID_7
     *
     * Sword Flash Root Damipoli ID_7 (-1 invalid)
     */
    int traceDmyIdHead7{ -1 };

    /**
     * @brief Sword tip sword flash Damipoli ID_7
     *
     * Sword Flash Sword Tip Damipoli ID_7
     */
    int traceDmyIdTail7{ -1 };

    /**
     * @brief 4 radii per
     *
     * Sphere, capsule radius
     */
    float hit4_Radius{ 0.f };

    /**
     * @brief 5 radii per
     *
     * Sphere, capsule radius
     */
    float hit5_Radius{ 0.f };

    /**
     * @brief 6 radii per
     *
     * Sphere, capsule radius
     */
    float hit6_Radius{ 0.f };

    /**
     * @brief 7 radii per
     *
     * Sphere, capsule radius
     */
    float hit7_Radius{ 0.f };

    /**
     * @brief 8 radii per
     *
     * Sphere, capsule radius
     */
    float hit8_Radius{ 0.f };

    /**
     * @brief 9 radii per
     *
     * Sphere, capsule radius
     */
    float hit9_Radius{ 0.f };

    /**
     * @brief 10 radii per
     *
     * Sphere, capsule radius
     */
    float hit10_Radius{ 0.f };

    /**
     * @brief 11 radii per
     *
     * Sphere, capsule radius
     */
    float hit11_Radius{ 0.f };

    /**
     * @brief 12 radii per
     *
     * Sphere, capsule radius
     */
    float hit12_Radius{ 0.f };

    /**
     * @brief 13 radii per
     *
     * Sphere, capsule radius
     */
    float hit13_Radius{ 0.f };

    /**
     * @brief 14 radii per
     *
     * Sphere, capsule radius
     */
    float hit14_Radius{ 0.f };

    /**
     * @brief 15 radii per
     *
     * Sphere, capsule radius
     */
    float hit15_Radius{ 0.f };

    /**
     * @brief 4 per Damipoli 1
     *
     * Damipoli in sphere, capsule position
     */
    short hit4_DmyPoly1{ 0 };

    /**
     * @brief 5 per Damipoli 1
     *
     * Damipoli in sphere, capsule position
     */
    short hit5_DmyPoly1{ 0 };

    /**
     * @brief 6 per Damipoli 1
     *
     * Damipoli in sphere, capsule position
     */
    short hit6_DmyPoly1{ 0 };

    /**
     * @brief 7 per Damipoli 1
     *
     * Damipoli in sphere, capsule position
     */
    short hit7_DmyPoly1{ 0 };

    /**
     * @brief 8 Damipoli per 1
     *
     * Damipoli in sphere, capsule position
     */
    short hit8_DmyPoly1{ 0 };

    /**
     * @brief 9 per Damipoli 1
     *
     * Damipoli in sphere, capsule position
     */
    short hit9_DmyPoly1{ 0 };

    /**
     * @brief 10 per Damipoli 1
     *
     * Damipoli in sphere, capsule position
     */
    short hit10_DmyPoly1{ 0 };

    /**
     * @brief Per 11 Damipoli 1
     *
     * Damipoli in sphere, capsule position
     */
    short hit11_DmyPoly1{ 0 };

    /**
     * @brief 12 per Damipoli 1
     *
     * Damipoli in sphere, capsule position
     */
    short hit12_DmyPoly1{ 0 };

    /**
     * @brief 13 Damipoli per 1
     *
     * Damipoli in sphere, capsule position
     */
    short hit13_DmyPoly1{ 0 };

    /**
     * @brief Per 14 Damipoli 1
     *
     * Damipoli in sphere, capsule position
     */
    short hit14_DmyPoly1{ 0 };

    /**
     * @brief 15 per Damipoli 1
     *
     * Damipoli in sphere, capsule position
     */
    short hit15_DmyPoly1{ 0 };

    /**
     * @brief 4 per Damipoli 2
     *
     * The position of another point on the capsule Damipoli. -1 makes it a
     * sphere
     */
    short hit4_DmyPoly2{ 0 };

    /**
     * @brief 5 Damipoli 2 per
     *
     * The position of another point on the capsule Damipoli. -1 makes it a
     * sphere
     */
    short hit5_DmyPoly2{ 0 };

    /**
     * @brief 6 Damipoli 2 per
     *
     * The position of another point on the capsule Damipoli. -1 makes it a
     * sphere
     */
    short hit6_DmyPoly2{ 0 };

    /**
     * @brief 7 Damipoli 2 per
     *
     * The position of another point on the capsule Damipoli. -1 makes it a
     * sphere
     */
    short hit7_DmyPoly2{ 0 };

    /**
     * @brief 8 per Damipoli 2
     *
     * The position of another point on the capsule Damipoli. -1 makes it a
     * sphere
     */
    short hit8_DmyPoly2{ 0 };

    /**
     * @brief 9 Damipoli per 2
     *
     * The position of another point on the capsule Damipoli. -1 makes it a
     * sphere
     */
    short hit9_DmyPoly2{ 0 };

    /**
     * @brief 10 per Damipoli 2
     *
     * The position of another point on the capsule Damipoli. -1 makes it a
     * sphere
     */
    short hit10_DmyPoly2{ 0 };

    /**
     * @brief Per 11 Damipoli 2
     *
     * The position of another point on the capsule Damipoli. -1 makes it a
     * sphere
     */
    short hit11_DmyPoly2{ 0 };

    /**
     * @brief 12 per Damipoli 2
     *
     * The position of another point on the capsule Damipoli. -1 makes it a
     * sphere
     */
    short hit12_DmyPoly2{ 0 };

    /**
     * @brief Per 13 Damipoli 2
     *
     * The position of another point on the capsule Damipoli. -1 makes it a
     * sphere
     */
    short hit13_DmyPoly2{ 0 };

    /**
     * @brief Per 14 Damipoli 2
     *
     * The position of another point on the capsule Damipoli. -1 makes it a
     * sphere
     */
    short hit14_DmyPoly2{ 0 };

    /**
     * @brief 15 per Damipoli 2
     *
     * The position of another point on the capsule Damipoli. -1 makes it a
     * sphere
     */
    short hit15_DmyPoly2{ 0 };

    /**
     * @brief 4 parts per
     *
     * Hit part
     */
    unsigned char hit4_hitType{ 0 };

    /**
     * @brief 5 parts per
     *
     * Hit part
     */
    unsigned char hit5_hitType{ 0 };

    /**
     * @brief 6 parts per
     *
     * Hit part
     */
    unsigned char hit6_hitType{ 0 };

    /**
     * @brief 7 parts per
     *
     * Hit part
     */
    unsigned char hit7_hitType{ 0 };

    /**
     * @brief 8 parts per
     *
     * Hit part
     */
    unsigned char hit8_hitType{ 0 };

    /**
     * @brief 9 parts per
     *
     * Hit part
     */
    unsigned char hit9_hitType{ 0 };

    /**
     * @brief 10 parts per
     *
     * Hit part
     */
    unsigned char hit10_hitType{ 0 };

    /**
     * @brief 11 parts per
     *
     * Hit part
     */
    unsigned char hit11_hitType{ 0 };

    /**
     * @brief 12 parts per
     *
     * Hit part
     */
    unsigned char hit12_hitType{ 0 };

    /**
     * @brief 13 parts per
     *
     * Hit part
     */
    unsigned char hit13_hitType{ 0 };

    /**
     * @brief 14 parts per
     *
     * Hit part
     */
    unsigned char hit14_hitType{ 0 };

    /**
     * @brief 15 parts per
     *
     * Hit part
     */
    unsigned char hit15_hitType{ 0 };

    /**
     * @brief 4 priorities per
     *
     * priority. If there are two or more hits at the same time, the one with
     * the higher priority will be adopted.
     */
    unsigned char hti4_Priority{ 0 };

    /**
     * @brief 5 priorities per
     *
     * priority. If there are two or more hits at the same time, the one with
     * the higher priority will be adopted.
     */
    unsigned char hti5_Priority{ 0 };

    /**
     * @brief 6 priorities per
     *
     * priority. If there are two or more hits at the same time, the one with
     * the higher priority will be adopted.
     */
    unsigned char hti6_Priority{ 0 };

    /**
     * @brief 7 priorities per
     *
     * priority. If there are two or more hits at the same time, the one with
     * the higher priority will be adopted.
     */
    unsigned char hti7_Priority{ 0 };

    /**
     * @brief 8 priorities per
     *
     * priority. If there are two or more hits at the same time, the one with
     * the higher priority will be adopted.
     */
    unsigned char hti8_Priority{ 0 };

    /**
     * @brief 9 priorities per
     *
     * priority. If there are two or more hits at the same time, the one with
     * the higher priority will be adopted.
     */
    unsigned char hti9_Priority{ 0 };

    /**
     * @brief 10 priorities per
     *
     * priority. If there are two or more hits at the same time, the one with
     * the higher priority will be adopted.
     */
    unsigned char hti10_Priority{ 0 };

    /**
     * @brief 11 priorities per
     *
     * priority. If there are two or more hits at the same time, the one with
     * the higher priority will be adopted.
     */
    unsigned char hti11_Priority{ 0 };

    /**
     * @brief 12 priorities per
     *
     * priority. If there are two or more hits at the same time, the one with
     * the higher priority will be adopted.
     */
    unsigned char hti12_Priority{ 0 };

    /**
     * @brief 13 priorities per
     *
     * priority. If there are two or more hits at the same time, the one with
     * the higher priority will be adopted.
     */
    unsigned char hti13_Priority{ 0 };

    /**
     * @brief 14 priorities per
     *
     * priority. If there are two or more hits at the same time, the one with
     * the higher priority will be adopted.
     */
    unsigned char hti14_Priority{ 0 };

    /**
     * @brief 15 priorities per
     *
     * priority. If there are two or more hits at the same time, the one with
     * the higher priority will be adopted.
     */
    unsigned char hti15_Priority{ 0 };

    /**
     * @brief Defensive material 1 [SFX]
     *
     * Used for SFX when guarding. 1
     */
    unsigned short defSfxMaterial1{ 0 };

    /**
     * @brief Defensive material 2 [SE]
     *
     * Used for SE when guarding 2
     */
    unsigned short defSeMaterial2{ 0 };

    /**
     * @brief Defensive material 2 [SFX]
     *
     * Used for SFX when guarding. 2
     */
    unsigned short defSfxMaterial2{ 0 };

    /**
     * @brief Dark attack power correction value
     *
     * PC only. Multiply the dark attack power (in the case of a bow, correct
     * the missile)
     */
    unsigned short atkDarkCorrection{ 0 };

    /**
     * @brief Dark attack power
     *
     * NPCs only. Additional damage from dark attacks
     */
    unsigned short atkDark{ 0 };

    unsigned char pad5 : 1;

    /**
     * @brief Attack contact parry judgment invalid
     *
     * This is a flag to disable the new parry control. A process that
     * determines that the damage on the attacking side has been parried when it
     * comes into contact with a character in the parry state on the defending
     * side.
     */
    bool isDisableParry : 1 { true };

    /**
     * @brief Is the attack power bonus invalid when holding both hands?
     *
     * Avoid using the 1.5x growth status adaptation with both hands
     */
    bool isDisableBothHandsAtkBonus : 1 { false };

    /**
     * @brief Will it be disabled with limited invincibility (only in the air)?
     *
     * If "Do you want to penetrate invincibility" is ◯, this setting will be
     * ignored.
     */
    bool isInvalidatedByNoDamageInAir : 1 { false };

    unsigned char pad2 : 4;

    /**
     * @brief Damage level vs. player
     *
     * Damage level to the player. If it is "0 (default)", it is not used. The
     * meaning of the range other than "0 (default)" is the same as "Damage
     * level".
     */
    signed char dmgLevel_vsPlayer{ 0 };

    /**
     * @brief Abnormal state attack power magnification correction
     *
     * Magnification correction is performed for the abnormal state attack power
     * of special effects.
     */
    unsigned short statusAilmentAtkPowerCorrectRate{ 100 };

    /**
     * @brief Special effects attack power multiplier correction (attack power
     * points)
     *
     * Magnification correction is performed for the special effect ~ ~ attack
     * power [point].
     */
    unsigned short spEffectAtkPowerCorrectRate_byPoint{ 100 };

    /**
     * @brief Special effect attack power multiplier correction (attack power
     * multiplier)
     *
     * Magnification is corrected for the special effect's attack power
     * multiplier.
     */
    unsigned short spEffectAtkPowerCorrectRate_byRate{ 100 };

    /**
     * @brief Special effect attack power multiplier correction (final attack
     * power multiplier)
     *
     * Attack side of special effect: ~ ~ Performs magnification correction for
     * damage multiplier.
     */
    unsigned short spEffectAtkPowerCorrectRate_byDmg{ 100 };

    /**
     * @brief Behavior identification value 2
     *
     * Behavior identification value: Plays damage motion only at specific times
     */
    unsigned char atkBehaviorId_2{ 0 };

    /**
     * @brief Throw damage attribute
     *
     * Attribute of throw damage of attack judgment. Corresponding special
     * effects will be applied. It works only when the attack
     * ATK_PATAM_THROWFLAG_TYPE is "2: Throw".
     */
    unsigned char throwDamageAttribute{ 0 };

    /**
     * @brief Special effect status abnormality correction (attack power point)
     *
     * Magnification correction is performed for the special effect "Whether to
     * apply the abnormal state attack power magnification correction".
     */
    unsigned short statusAilmentAtkPowerCorrectRate_byPoint{ 100 };

    /**
     * @brief Attack attribute correction ID overwrite
     *
     * For overwriting the ID of the parameter that corrects the attack
     * attribute
     */
    int overwriteAttackElementCorrectId{ -1 };

    /**
     * @brief Decal identifier 1
     *
     * Decal identifier 1 (3 digits)
     */
    short decalBaseId1{ -1 };

    /**
     * @brief Decal identifier 2
     *
     * Decal identifier 2 (3 digits)
     */
    short decalBaseId2{ -1 };

    /**
     * @brief Weapon regain amount correction value
     */
    unsigned short wepRegainHpScale{ 100 };

    /**
     * @brief Amount of attack regain
     */
    unsigned short atkRegainHp{ 0 };

    /**
     * @brief Regainable time correction factor
     */
    float regainableTimeScale{ 1.f };

    /**
     * @brief Regainable rate correction factor
     */
    float regainableHpRateScale{ 1.f };

    /**
     * @brief Same attack judgment ID
     */
    signed char regainableSlotId{ -1 };

    /**
     * @brief Special attribute variation value
     *
     * Value for giving variation to SFX and SE generated by special attribute
     * in combination with "special attribute" (SEQ16473)
     */
    unsigned char spAttributeVariationValue{ 0 };

    /**
     * @brief Front angle offset of parry establishment condition
     *
     * Front angle offset of [collapsed side] of parry establishment condition
     */
    short parryForwardOffset{ 0 };

    /**
     * @brief SA attack power correction value
     *
     * PC only. Correction value to be applied to the [basic value] set for the
     * weapon
     */
    float atkSuperArmorCorrection{ 0.f };

    /**
     * @brief Defensive material variation value
     *
     * A value to have variations of damage SFX and SE in combination with
     * "defense material 1 or 2" used when guarding. (SEQ16473)
     */
    unsigned char defSfxMaterialVariationValue{ 0 };

    unsigned char pad4[3];

    /**
     * @brief finalDamageRateId
     */
    int finalDamageRateId{ 0 };

    /**
     * @brief subCategory3
     */
    unsigned char subCategory3{ 0 };

    /**
     * @brief subCategory4
     */
    unsigned char subCategory4{ 0 };

    unsigned char pad7[10];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::ATK_PARAM_ST) == 456,
    "ATK_PARAM_ST paramdef size does not match detected size");
