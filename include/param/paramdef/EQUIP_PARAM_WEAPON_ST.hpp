/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 *
 */
struct EQUIP_PARAM_WEAPON_ST {
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
     * @brief Behavior variation ID
     *
     * Used when determining the action parameter ID to be referenced during an
     * attack
     */
    int behaviorVariationId{ 0 };

    /**
     * @brief Sort ID
     *
     * Sort ID (-1: Do not collect) (7 digits is the limit in s32 to add the
     * enhancement level in the program)
     */
    int sortId{ 0 };

    /**
     * @brief Wandering equipment ID
     *
     * Replacement equipment ID for wandering ghosts.
     */
    unsigned int wanderingEquipId{ 0 };

    /**
     * @brief Weight [kg]
     *
     * Weight [kg].
     */
    float weight{ 1.f };

    /**
     * @brief Equipment weight ratio
     */
    float weaponWeightRate{ 0.f };

    /**
     * @brief Repair price
     *
     * Basic repair price
     */
    int fixPrice{ 0 };

    /**
     * @brief Enhanced price
     */
    int reinforcePrice{ 0 };

    /**
     * @brief Sale price
     *
     * Selling price
     */
    int sellValue{ 0 };

    /**
     * @brief Strength correction
     *
     * Charapara correction value.
     */
    float correctStrength{ 0.f };

    /**
     * @brief Agility correction
     *
     * Charapara correction value.
     */
    float correctAgility{ 0.f };

    /**
     * @brief Magic correction
     *
     * Charapara correction value.
     */
    float correctMagic{ 0.f };

    /**
     * @brief Faith correction
     *
     * Charapara correction value.
     */
    float correctFaith{ 0.f };

    /**
     * @brief Physical attack cut rate when guarding
     *
     * Set the damage cut rate when guarding for each attack
     */
    float physGuardCutRate{ 0.f };

    /**
     * @brief Magic attack cut rate when guarding
     *
     * If it is not a guard attack, enter 0
     */
    float magGuardCutRate{ 0.f };

    /**
     * @brief Flame attack power cut rate when guarding
     *
     * How much to cut the fire attack?
     */
    float fireGuardCutRate{ 0.f };

    /**
     * @brief Electric shock attack power cut rate when guarding
     *
     * How much to cut the electric shock attack?
     */
    float thunGuardCutRate{ 0.f };

    /**
     * @brief Special effect ID 0 on attack hit
     *
     * Register when adding special effects to weapons
     */
    int spEffectBehaviorId0{ -1 };

    /**
     * @brief Special effect ID1 on attack hit
     *
     * Register when adding special effects to weapons
     */
    int spEffectBehaviorId1{ -1 };

    /**
     * @brief Special effect ID2 on attack hit
     *
     * Register when adding special effects to weapons
     */
    int spEffectBehaviorId2{ -1 };

    /**
     * @brief Resident special effect ID
     *
     * Resident special effect ID0
     */
    int residentSpEffectId{ -1 };

    /**
     * @brief Resident special effect ID1
     */
    int residentSpEffectId1{ -1 };

    /**
     * @brief Resident special effect ID2
     */
    int residentSpEffectId2{ -1 };

    /**
     * @brief Material ID
     *
     * Material parameter ID required for weapon enhancement
     */
    int materialSetId{ -1 };

    /**
     * @brief Derivation source
     *
     * This weapon's enhancement source weapon ID
     */
    int originEquipWep{ -1 };

    /**
     * @brief Derivative source enhancement +1
     *
     * This weapon's enhancement source weapon ID1
     */
    int originEquipWep1{ -1 };

    /**
     * @brief Derivative source enhancement +2
     *
     * This weapon's enhancement source weapon ID2
     */
    int originEquipWep2{ -1 };

    /**
     * @brief Derivative source enhancement +3
     *
     * This weapon's enhancement source weapon ID3
     */
    int originEquipWep3{ -1 };

    /**
     * @brief Derivative source enhancement +4
     *
     * This weapon's enhancement source weapon ID 4
     */
    int originEquipWep4{ -1 };

    /**
     * @brief Derivative source enhancement +5
     *
     * This weapon's enhancement source weapon ID 5
     */
    int originEquipWep5{ -1 };

    /**
     * @brief Derivative source enhancement +6
     *
     * This weapon's enhancement source weapon ID 6
     */
    int originEquipWep6{ -1 };

    /**
     * @brief Derivative source enhancement +7
     *
     * This weapon's enhancement source weapon ID 7
     */
    int originEquipWep7{ -1 };

    /**
     * @brief Derivative source enhancement +8
     *
     * This weapon's enhancement source weapon ID8
     */
    int originEquipWep8{ -1 };

    /**
     * @brief Derivative source enhancement +9
     *
     * This weapon's enhancement source weapon ID 9
     */
    int originEquipWep9{ -1 };

    /**
     * @brief Derivative source enhancement +10
     *
     * This weapon's enhancement source weapon ID 10
     */
    int originEquipWep10{ -1 };

    /**
     * @brief Derivative source enhancement +11
     *
     * This weapon's enhancement source weapon ID 11
     */
    int originEquipWep11{ -1 };

    /**
     * @brief Derivative source enhancement +12
     *
     * This weapon's enhancement source weapon ID 12
     */
    int originEquipWep12{ -1 };

    /**
     * @brief Derivative source enhancement +13
     *
     * This weapon's enhancement source weapon ID 13
     */
    int originEquipWep13{ -1 };

    /**
     * @brief Derivative source enhancement +14
     *
     * This weapon's enhancement source weapon ID14
     */
    int originEquipWep14{ -1 };

    /**
     * @brief Derivative source enhancement +15
     *
     * This weapon's enhancement source weapon ID 15
     */
    int originEquipWep15{ -1 };

    /**
     * @brief Special attack A damage multiplier
     *
     * Damage multiplier for special attack A
     */
    float weakA_DamageRate{ 1.f };

    /**
     * @brief Special attack B damage multiplier
     *
     * Damage multiplier for special attack B
     */
    float weakB_DamageRate{ 1.f };

    /**
     * @brief Special attack C damage multiplier
     *
     * Damage multiplier for special attack C
     */
    float weakC_DamageRate{ 1.f };

    /**
     * @brief Special attack D damage multiplier
     *
     * Damage multiplier for special attack D
     */
    float weakD_DamageRate{ 1.f };

    /**
     * @brief Sleep tolerance cut rate_maximum correction value
     *
     * Maximum value of cut rate correction value for attack power against sleep
     * (set as special effect parameter)
     */
    float sleepGuardResist_MaxCorrect{ 0.f };

    /**
     * @brief Madness resistance cut rate_maximum correction value
     *
     * Maximum value of cut rate correction value for attack power against
     * madness (set as special effect parameter)
     */
    float madnessGuardResist_MaxCorrect{ 0.f };

    /**
     * @brief SA weapon attack power
     *
     * Super Armor Basic Attack Power
     */
    float saWeaponDamage{ 0.f };

    /**
     * @brief Equipment model number
     *
     * Equipment model number.
     */
    unsigned short equipModelId{ 0 };

    /**
     * @brief Icon ID
     *
     * Menu icon ID.
     */
    unsigned short iconId{ 0 };

    /**
     * @brief Durability
     *
     * Initial durability.
     */
    unsigned short durability{ 100 };

    /**
     * @brief Maximum durability
     *
     * New durability.
     */
    unsigned short durabilityMax{ 100 };

    /**
     * @brief Throw-through attack power basic value
     *
     * Basic value of throw-through attack power
     */
    unsigned short attackThrowEscape{ 0 };

    /**
     * @brief Parry occurrence time [frame]
     *
     * Limit the life of parry damage. It does not last longer than it is set in
     * TimeAct.
     */
    short parryDamageLife{ -1 };

    /**
     * @brief Physical attack power basic value
     *
     * Basic value of physical attribute attack that damages the enemy's HP
     */
    unsigned short attackBasePhysics{ 100 };

    /**
     * @brief Magic attack power basic value
     *
     * Basic value of magic attribute attack that damages the enemy's HP
     */
    unsigned short attackBaseMagic{ 100 };

    /**
     * @brief Fire attack power basic value
     *
     * Basic value of fire attribute attack that damages the enemy's HP
     */
    unsigned short attackBaseFire{ 100 };

    /**
     * @brief Electric shock attack power basic value
     *
     * Basic value of electric shock attribute attack that damages the enemy's
     * HP
     */
    unsigned short attackBaseThunder{ 100 };

    /**
     * @brief Stamina attack power
     *
     * Stamina attack power against the enemy
     */
    unsigned short attackBaseStamina{ 100 };

    /**
     * @brief Guard range [deg]
     *
     * Defense occurrence range angle when guarding weapons
     */
    short guardAngle{ 0 };

    /**
     * @brief SA durability value
     *
     * Additional SA durability used during attack motion
     */
    float saDurability{ 0.f };

    /**
     * @brief Stamina defense when guarding
     *
     * Defense against enemy stamina attacks when guarding successfully
     */
    short staminaGuardDef{ 0 };

    /**
     * @brief Enhanced type ID
     */
    short reinforceTypeId{ 0 };

    /**
     * @brief Trophy S grade ID
     *
     * Is it related to the trophy system?
     */
    short trophySGradeId{ -1 };

    /**
     * @brief Trophy SEQ number
     *
     * Trophy SEQ number (13-29)
     */
    short trophySeqId{ -1 };

    /**
     * @brief Throw attack power multiplier
     */
    short throwAtkRate{ 0 };

    /**
     * @brief Bow distance correction [%]
     *
     * Up% to extend the flight distance
     */
    short bowDistRate{ 0 };

    /**
     * @brief Equipment model type
     *
     * Equipment model type.
     */
    unsigned char equipModelCategory{ 7 };

    /**
     * @brief Equipment model gender
     *
     * Gender of equipment model.
     */
    unsigned char equipModelGender{ 0 };

    /**
     * @brief Weapon category
     *
     * Weapon category.
     */
    unsigned char weaponCategory{ 0 };

    /**
     * @brief Weapon motion category
     *
     * Weapon motion category.
     */
    unsigned char wepmotionCategory{ 0 };

    /**
     * @brief Guard motion category
     */
    unsigned char guardmotionCategory{ 0 };

    /**
     * @brief Attack material
     *
     * Attack material used from attack para
     */
    unsigned char atkMaterial{ 0 };

    /**
     * @brief Defense SE Material 1
     *
     * Defense SE material used from attack para 1
     */
    unsigned short defSeMaterial1{ 0 };

    /**
     * @brief Correction type (physical attack power)
     *
     * Correcting physical attack power by primary parameters Determines the
     * type of graph
     */
    unsigned char correctType_Physics{ 0 };

    /**
     * @brief Special attributes
     *
     * Weapon special attribute value
     */
    unsigned char spAttribute{ 0 };

    /**
     * @brief Special attack category
     *
     * Special attack category (possible from 50 to 999)
     */
    unsigned short spAtkcategory{ 0 };

    /**
     * @brief Weapon motion one-handed ID
     *
     * Basic motion ID when equipped with one hand.
     */
    unsigned char wepmotionOneHandId{ 0 };

    /**
     * @brief Weapon motion two-handed ID
     *
     * Basic motion ID when equipped with both hands.
     */
    unsigned char wepmotionBothHandId{ 0 };

    /**
     * @brief Equipment proper strength
     *
     * Equipment appropriate value.
     */
    unsigned char properStrength{ 0 };

    /**
     * @brief Equipment proper agility
     *
     * Equipment appropriate value.
     */
    unsigned char properAgility{ 0 };

    /**
     * @brief Equipment proper magic power
     *
     * Equipment appropriate value.
     */
    unsigned char properMagic{ 0 };

    /**
     * @brief Equipment proper faith
     *
     * Equipment appropriate value.
     */
    unsigned char properFaith{ 0 };

    /**
     * @brief Strength over start value
     */
    unsigned char overStrength{ 0 };

    /**
     * @brief Parry attack base value
     *
     * Basic value to defeat the enemy's parry
     */
    unsigned char attackBaseParry{ 0 };

    /**
     * @brief Parry defense value
     *
     * Used to judge whether to be a parry or a guard at the time of parry
     * judgment
     */
    unsigned char defenseBaseParry{ 0 };

    /**
     * @brief Flick defense basic value
     *
     * Used to determine if it will pop when guarding an enemy attack
     */
    unsigned char guardBaseRepel{ 0 };

    /**
     * @brief Flick attack power basic value
     *
     * Guard Used to determine whether or not to be repelled when attacking an
     * enemy
     */
    unsigned char attackBaseRepel{ 0 };

    /**
     * @brief Guard cut invalidation magnification
     *
     * Magnification that invalidates the opponent's guard cut. -100 is
     * completely invalid. Double the defense effect of the opponent at 100.
     */
    signed char guardCutCancelRate{ 0 };

    /**
     * @brief Guard level
     *
     * When guarding, which guard motion will the enemy attack? Decide
     */
    signed char guardLevel{ 0 };

    /**
     * @brief Slash attack cut rate
     *
     * Looking at the attack type, what percentage of the damage of the slashing
     * attribute is cut? Specify
     */
    signed char slashGuardCutRate{ 0 };

    /**
     * @brief Batter attack cut rate
     *
     * Looking at the attack type, what percentage of the damage of the hit
     * attribute is cut? Specify
     */
    signed char blowGuardCutRate{ 0 };

    /**
     * @brief Puncture attack cut rate
     *
     * Looking at the attack type, what percentage of the damage of the piercing
     * attribute is cut? Specify
     */
    signed char thrustGuardCutRate{ 0 };

    /**
     * @brief Poison resistance cut rate
     *
     * How much to cut the attack power to poison (set to the special effect
     * parameter)
     */
    signed char poisonGuardResist{ 0 };

    /**
     * @brief Epidemic attack cut rate
     *
     * How much to cut the attack power (set as a special effect parameter) to
     * make it a plague
     */
    signed char diseaseGuardResist{ 0 };

    /**
     * @brief Bleeding attack cut rate
     *
     * How much to cut the attack power (set as a special effect parameter) to
     * make bleeding
     */
    signed char bloodGuardResist{ 0 };

    /**
     * @brief Curse attack cut rate
     *
     * How much to cut the attack power (set as a special effect parameter) to
     * curse
     */
    signed char curseGuardResist{ 0 };

    /**
     * @brief Physical attribute 1
     */
    unsigned char atkAttribute{ 0 };

    /**
     * @brief Right hand equipment
     *
     * Is it possible to equip it with the right hand?
     */
    bool rightHandEquipable : 1 { false };

    /**
     * @brief Left hand equipment
     *
     * Is it possible to equip it with the left hand?
     */
    bool leftHandEquipable : 1 { false };

    /**
     * @brief Two-handed equipment
     *
     * Is it possible to equip with both hands?
     */
    bool bothHandEquipable : 1 { false };

    /**
     * @brief Bow and arrow bullet equipment
     *
     * Is it possible to equip a bow bullet?
     */
    bool arrowSlotEquipable : 1 { false };

    /**
     * @brief Crossbow bullet equipment
     *
     * Is it possible to equip a crossbow bullet?
     */
    bool boltSlotEquipable : 1 { false };

    /**
     * @brief Can be guarded
     *
     * Guard with L1 when equipped with left hand
     */
    bool enableGuard : 1 { false };

    /**
     * @brief Parry possible
     *
     * Parry with L2 when equipped with left hand
     */
    bool enableParry : 1 { false };

    /**
     * @brief Magical possible
     *
     * Activates magic when attacking
     */
    bool enableMagic : 1 { false };

    /**
     * @brief Can be spelled
     *
     * Cast magic when attacking
     */
    bool enableSorcery : 1 { false };

    /**
     * @brief Miracle possible
     *
     * Miracle activated when attacking
     */
    bool enableMiracle : 1 { false };

    /**
     * @brief Pledge magic possible
     *
     * Activates pledge magic when attacking
     */
    bool enableVowMagic : 1 { false };

    /**
     * @brief Normal
     *
     * Attack type for menu display. Is it normal?
     */
    bool isNormalAttackType : 1 { false };

    /**
     * @brief Batter
     *
     * Attack type for menu display. Is it a blow?
     */
    bool isBlowAttackType : 1 { false };

    /**
     * @brief Slashing
     *
     * Attack type for menu display. Is it a slash?
     */
    bool isSlashAttackType : 1 { false };

    /**
     * @brief Piercing
     *
     * Attack type for menu display. Is it a piercing?
     */
    bool isThrustAttackType : 1 { false };

    /**
     * @brief Is it possible to enchant?
     *
     * Can it be strengthened with pine fat?
     */
    bool isEnhance : 1 { false };

    /**
     * @brief Is there a humanity correction?
     *
     * Is there an attack power correction by human nature?
     */
    bool isHeroPointCorrect : 1 { false };

    /**
     * @brief Can it be strengthened?
     *
     * Listed in the enhancement target list at the enhancement shop (may be
     * deleted due to specification changes?)
     */
    bool isCustom : 1 { false };

    /**
     * @brief Is job change reset prohibited?
     */
    bool disableBaseChangeReset : 1 { false };

    /**
     * @brief Is repair prohibited?
     */
    bool disableRepair : 1 { false };

    /**
     * @brief Is it a dark hand?
     */
    bool isDarkHand : 1 { false };

    /**
     * @brief Is there a simple model for DLC?
     */
    bool simpleModelForDlc : 1 { false };

    /**
     * @brief Lantern weapon
     *
     * Is it a lantern weapon?
     */
    bool lanternWep : 1 { false };

    /**
     * @brief Anti-spirit weapon
     *
     * NPC Para's "spirit body" will now hit the opponent of ○. Also, the attack
     * para "Is it a ghost attack?" Will be able to guard the attack of ○.
     */
    bool isVersusGhostWep : 1 { false };

    /**
     * @brief Weapon career change category
     *
     * Weapon career change category. Used to display the attribute icon.
     */
    unsigned char baseChangeCategory : 6 { 0 };

    /**
     * @brief Is it a dragon hunt?
     *
     * Is it a dragon hunting weapon?
     */
    bool isDragonSlayer : 1 { false };

    /**
     * @brief Can i deposit
     *
     * Can you leave it in the warehouse?
     */
    bool isDeposit : 1 { false };

    /**
     * @brief Is multi-drop sharing prohibited?
     */
    bool disableMultiDropShare : 1 { false };

    /**
     * @brief Can you throw it away
     *
     * Can you throw away the item? TRUE = thrown away
     */
    bool isDiscard : 1 { false };

    /**
     * @brief Can you put it on the spot
     *
     * Can I put the item on the spot? TRUE = can be placed
     */
    bool isDrop : 1 { false };

    /**
     * @brief Acquisition log display condition
     *
     * Whether to display in the item acquisition log when acquiring the item
     * (not entered: ○)
     */
    bool showLogCondType : 1 { true };

    /**
     * @brief Can be thrown
     *
     * Whether it is a throwable weapon
     */
    bool enableThrow : 1 { false };

    /**
     * @brief Acquisition dialog display condition
     *
     * Whether to display it in the item acquisition dialog when acquiring an
     * item (not entered: new only)
     */
    unsigned char showDialogCondType : 2 { 2 };

    /**
     * @brief Is it prohibited to change the magic stone attribute?
     */
    bool disableGemAttr : 1 { false };

    /**
     * @brief Defensive SFX Material 1
     *
     * Defensive SFX material used from attack para 1
     */
    unsigned short defSfxMaterial1{ 0 };

    /**
     * @brief Weapon collaborative setting
     */
    unsigned char wepCollidableType0{ 1 };

    /**
     * @brief Weapon 1 collaborative setting
     */
    unsigned char wepCollidableType1{ 1 };

    /**
     * @brief Attitude control ID (right hand)
     */
    unsigned char postureControlId_Right{ 0 };

    /**
     * @brief Attitude control ID (left hand)
     */
    unsigned char postureControlId_Left{ 0 };

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
     * @brief Defensive SFX Material 2
     *
     * Defensive SFX material used from attack para 2
     */
    unsigned short defSfxMaterial2{ 0 };

    /**
     * @brief Defense SE Material 2
     *
     * Defense SE material used from attack para 2
     */
    unsigned short defSeMaterial2{ 0 };

    /**
     * @brief Suction position Id
     *
     * Weapon adsorption position parameter Id. This value determines the
     * position where the weapon is attracted (-1: Refer to the value written
     * directly in the old source code).
     */
    int absorpParamId{ -1 };

    /**
     * @brief Toughness correction factor
     *
     * It is a magnification that corrects the basic value of toughness.
     */
    float toughnessCorrectRate{ 0.f };

    /**
     * @brief Is the armor SA damage multiplier valid even at the initial value?
     *
     * Whether the toughness calculation is performed even if the armor SA is
     * the initial value. Check the toughness specification .xlsx for details
     */
    bool isValidTough_ProtSADmg : 1 { false };

    /**
     * @brief Is it a twin sword?
     *
     * Is this weapon a twin sword?
     */
    bool isDualBlade : 1 { false };

    /**
     * @brief Is it possible to load automatically?
     *
     * Only valid for arrows and bolts. Whether to automatically equip this
     * weapon if the target equipment slot is empty when picking up this weapon
     */
    bool isAutoEquip : 1 { false };

    /**
     * @brief Is emergency avoidance possible?
     *
     * Is it an emergency avoidable weapon? Pass it to the behavior script.
     */
    bool isEnableEmergencyStep : 1 { false };

    /**
     * @brief Is it hidden during cutscenes?
     */
    bool invisibleOnRemo : 1 { false };

	unsigned char unknown_0x17c_5: 1 { 0 };

	unsigned char unknown_0x17c_6: 1 { 0 };

	unsigned char unknown_0x17c_7: 1 { 0 };

    /**
     * @brief Correction type (magic attack power)
     *
     * Determining the type of magic attack power correction graph with primary
     * parameters
     */
    unsigned char correctType_Magic{ 0 };

    /**
     * @brief Correction type (flame attack power)
     *
     * Determine the type of flame attack power correction graph with primary
     * parameters
     */
    unsigned char correctType_Fire{ 0 };

    /**
     * @brief Correction type (lightning attack power)
     *
     * Determine the type of lightning attack power correction graph with
     * primary parameters
     */
    unsigned char correctType_Thunder{ 0 };

    /**
     * @brief Special attack E damage multiplier
     *
     * Damage multiplier for special attack E
     */
    float weakE_DamageRate{ 1.f };

    /**
     * @brief Special attack F damage multiplier
     *
     * Damage multiplier for special attack F
     */
    float weakF_DamageRate{ 1.f };

    /**
     * @brief Dark attack power cut rate when guarding
     *
     * How much to cut the dark attack?
     */
    float darkGuardCutRate{ 0.f };

    /**
     * @brief Dark attack power basic value
     *
     * Basic value of darkness attack that damages the enemy's HP
     */
    unsigned short attackBaseDark{ 0 };

    /**
     * @brief Correction type (dark attack power)
     *
     * Determine the type of darkness attack power correction graph with primary
     * parameters
     */
    unsigned char correctType_Dark{ 0 };

    /**
     * @brief Correction type (poison attack power)
     *
     * Determining the type of poison attack power correction graph with primary
     * parameters
     */
    unsigned char correctType_Poison{ 0 };

    /**
     * @brief Sort item type ID
     *
     * Sort item type ID. In the sort "Item type order", the same ID is
     * displayed together as the same group.
     */
    unsigned char sortGroupId{ 255 };

    /**
     * @brief Physical attribute 2
     */
    unsigned char atkAttribute2{ 0 };

    /**
     * @brief Sleep attack cut rate
     *
     * How much to cut the attack power (set as a special effect parameter) to
     * sleep
     */
    signed char sleepGuardResist{ 0 };

    /**
     * @brief Mad attack cut rate
     *
     * How much to cut the attack power (set to the special effect parameter)
     * that makes you go mad
     */
    signed char madnessGuardResist{ 0 };

    /**
     * @brief Correction type (bleeding attack power)
     *
     * Determine the type of bleeding attack power correction graph with primary
     * parameters
     */
    unsigned char correctType_Blood{ 0 };

    /**
     * @brief Equipment proper luck
     *
     * Equipment appropriate value.
     */
    unsigned char properLuck{ 0 };

    /**
     * @brief Cold attack cut rate
     *
     * How much to cut the attack power (set to the special effect parameter) to
     * cool down
     */
    signed char freezeGuardResist{ 0 };

    /**
     * @brief Automatic replenishment type
     *
     * Controls whether or not to automatically replenish and default settings
     */
    unsigned char autoReplenishType{ 0 };

    /**
     * @brief Arts parameter ID
     */
    int swordArtsParamId{ 0 };

    /**
     * @brief Luck correction
     *
     * Charapara correction value.
     */
    float correctLuck{ 0.f };

    /**
     * @brief Equipment ID for quiver (magazine) display model
     *
     * Equipment number of the quiver (magazine) display model. In the case of a
     * bow, it is displayed as a quiver, and in the case of a crossbow, it is
     * displayed as a magazine.
     */
    unsigned int arrowBoltEquipId{ 0 };

    /**
     * @brief Level setting at the time of reduction
     *
     * Type of how to set the enhancement level when returning or deriving a
     * weapon
     */
    unsigned char DerivationLevelType{ 0 };

    /**
     * @brief Enchantment Sfx size
     *
     * Value offset to enchantment SfxId
     */
    unsigned char enchantSfxSize{ 0 };

    /**
     * @brief Weapon type
     *
     * Weapon type. Used for linking text and magic stones (* It is now used for
     * other than text)
     */
    unsigned short wepType{ 0 };

    /**
     * @brief Physical attack cut rate when guarding_maximum correction value
     *
     * Maximum damage physical cut rate correction value when guarding
     */
    float physGuardCutRate_MaxCorrect{ 0.f };

    /**
     * @brief Magic attack cut rate when guarding_maximum correction value
     *
     * Maximum value of correction value of damage magic cut rate when guarding
     */
    float magGuardCutRate_MaxCorrect{ 0.f };

    /**
     * @brief Flame attack power cut rate when guarding_maximum correction value
     *
     * Maximum value of correction value of damage flame cut rate when guarding
     */
    float fireGuardCutRate_MaxCorrect{ 0.f };

    /**
     * @brief Electric shock attack power cut rate when guarding_maximum
     * correction value
     *
     * Maximum value of correction value of damage electric shock cut rate when
     * guarding
     */
    float thunGuardCutRate_MaxCorrect{ 0.f };

    /**
     * @brief Darkness attack power cut rate when guarding_maximum correction
     * value
     *
     * Maximum value of correction value of damage darkness cut rate when
     * guarding
     */
    float darkGuardCutRate_MaxCorrect{ 0.f };

    /**
     * @brief Poison resistance cut rate_maximum correction value
     *
     * Maximum value of cut rate correction value for attack power against
     * poison (set as special effect parameter)
     */
    float poisonGuardResist_MaxCorrect{ 0.f };

    /**
     * @brief Epidemic resistance cut rate_maximum correction value
     *
     * Maximum value of cut rate correction value for attack power against
     * plague (set as special effect parameter)
     */
    float diseaseGuardResist_MaxCorrect{ 0.f };

    /**
     * @brief Bleeding resistance cut rate_maximum correction value
     *
     * Maximum value of cut rate correction value for attack power against
     * bleeding (set as special effect parameter)
     */
    float bloodGuardResist_MaxCorrect{ 0.f };

    /**
     * @brief Curse resistance cut rate_maximum correction value
     *
     * Maximum value of cut rate correction value for attack power against curse
     * (set as special effect parameter)
     */
    float curseGuardResist_MaxCorrect{ 0.f };

    /**
     * @brief Cold resistance cut rate_maximum correction value
     *
     * Maximum value of cut rate correction value for attack power against cold
     * air (set as special effect parameter)
     */
    float freezeGuardResist_MaxCorrect{ 0.f };

    /**
     * @brief Stamina defense when guarding_maximum correction value
     *
     * When the guard is successful, the maximum value of the defense power
     * correction value against the enemy's stamina attack
     */
    float staminaGuardDef_MaxCorrect{ 0.f };

    /**
     * @brief Resident SfxId1
     */
    int residentSfxId_1{ -1 };

    /**
     * @brief Resident SfxId2
     */
    int residentSfxId_2{ -1 };

    /**
     * @brief Resident SfxId3
     */
    int residentSfxId_3{ -1 };

    /**
     * @brief Resident SfxId4
     */
    int residentSfxId_4{ -1 };

    /**
     * @brief Resident Sfx Damipoli Id1
     */
    int residentSfx_DmyId_1{ -1 };

    /**
     * @brief Resident Sfx Damipoli Id2
     */
    int residentSfx_DmyId_2{ -1 };

    /**
     * @brief Resident Sfx Damipoli Id3
     */
    int residentSfx_DmyId_3{ -1 };

    /**
     * @brief Resident Sfx Damipoli Id4
     */
    int residentSfx_DmyId_4{ -1 };

    /**
     * @brief Stamina consumption ratio
     */
    float staminaConsumptionRate{ 1.f };

    /**
     * @brief Physical damage correction factor against player
     *
     * Only attacks on the player will correct the damage done.
     */
    float vsPlayerDmgCorrectRate_Physics{ 1.f };

    /**
     * @brief Anti-player magic damage correction factor
     *
     * Only attacks on the player will correct the damage done.
     */
    float vsPlayerDmgCorrectRate_Magic{ 1.f };

    /**
     * @brief Anti-player flame damage correction factor
     *
     * Only attacks on the player will correct the damage done.
     */
    float vsPlayerDmgCorrectRate_Fire{ 1.f };

    /**
     * @brief Anti-player lightning damage correction factor
     *
     * Only attacks on the player will correct the damage done.
     */
    float vsPlayerDmgCorrectRate_Thunder{ 1.f };

    /**
     * @brief Against player darkness damage correction factor
     *
     * Only attacks on the player will correct the damage done.
     */
    float vsPlayerDmgCorrectRate_Dark{ 1.f };

    /**
     * @brief Anti-player poison damage correction factor
     *
     * Only attacks on the player will correct the damage done.
     */
    float vsPlayerDmgCorrectRate_Poison{ 1.f };

    /**
     * @brief Anti-player bleeding damage correction factor
     *
     * Only attacks on the player will correct the damage done.
     */
    float vsPlayerDmgCorrectRate_Blood{ 1.f };

    /**
     * @brief Anti-player cold damage correction factor
     *
     * Only attacks on the player will correct the damage done.
     */
    float vsPlayerDmgCorrectRate_Freeze{ 1.f };

    /**
     * @brief Weapon ability release status value: Strength
     *
     * To change the R2 attack into a special action when the status is X or
     * higher when using a specific weapon.
     */
    int attainmentWepStatusStr{ -1 };

    /**
     * @brief Weapon ability release status value: Skill
     *
     * To change the R2 attack into a special action when the status is X or
     * higher when using a specific weapon.
     */
    int attainmentWepStatusDex{ -1 };

    /**
     * @brief Weapon ability release status value: reason
     *
     * To change the R2 attack into a special action when the status is X or
     * higher when using a specific weapon.
     */
    int attainmentWepStatusMag{ -1 };

    /**
     * @brief Weapon ability release status value: Faith
     *
     * This is to change the R2 attack into a special action when the status is
     * X or higher when using a specific weapon.
     */
    int attainmentWepStatusFai{ -1 };

    /**
     * @brief Weapon ability release status value: Luck
     *
     * This is to change the R2 attack into a special action when the status is
     * X or higher when using a specific weapon.
     */
    int attainmentWepStatusLuc{ -1 };

    /**
     * @brief Attack attribute correction ID
     *
     * ID of the parameter that corrects the attack attribute
     */
    int attackElementCorrectId{ 0 };

    /**
     * @brief Selling price
     */
    int saleValue{ -1 };

    /**
     * @brief Enhanced shop category
     */
    unsigned char reinforceShopCategory{ 0 };

    /**
     * @brief Maximum number of arrows
     */
    unsigned char maxArrowQuantity{ 1 };

    /**
     * @brief Resident SFX1 Whether to display at the time of sword delivery
     *
     * If "Do you want to display when resident SFX1 is delivered?" Is true,
     * hide the SFX set to "resident SFX ID1" when the weapon is delivered.
     */
    bool residentSfx_1_IsVisibleForHang : 1 { false };

    /**
     * @brief Whether to display when resident SFX2 sword is delivered
     *
     * If "Do you want to display when resident SFX2 is delivered?" Is true,
     * hide the SFX set to "resident SFX ID2" when the weapon is delivered.
     */
    bool residentSfx_2_IsVisibleForHang : 1 { false };

    /**
     * @brief Whether to display when resident SFX3 sword is delivered
     *
     * If "Do you want to display when resident SFX3 is delivered?" Is true,
     * hide the SFX set to "resident SFX ID3" when the weapon is delivered.
     */
    bool residentSfx_3_IsVisibleForHang : 1 { false };

    /**
     * @brief Whether to display when resident SFX4 sword is delivered
     *
     * If "Do you want to display when resident SFX4 is delivered?" Is true,
     * hide the SFX set to "resident SFX ID 4" when the weapon is delivered.
     */
    bool residentSfx_4_IsVisibleForHang : 1 { false };

    /**
     * @brief Model_0 Is it possible to replace the Soul Param ID?
     *
     * Whether the vfx parameter "Soul Param ID for Weapon Enchantment" and
     * "Invisible Weapon for Weapon Enchantment" settings are applied
     */
    bool isSoulParamIdChange_model0 : 1 { true };

    /**
     * @brief Is it possible to replace the model _1 Soul Param ID?
     *
     * Whether the vfx parameter "Soul Param ID for Weapon Enchantment" and
     * "Invisible Weapon for Weapon Enchantment" settings are applied
     */
    bool isSoulParamIdChange_model1 : 1 { true };

    /**
     * @brief Model_2 Soul Param ID can be replaced?
     *
     * Whether the vfx parameter "Soul Param ID for Weapon Enchantment" and
     * "Invisible Weapon for Weapon Enchantment" settings are applied
     */
    bool isSoulParamIdChange_model2 : 1 { true };

    /**
     * @brief Model_3 Is it possible to replace the Soul Param ID?
     *
     * Whether the vfx parameter "Soul Param ID for Weapon Enchantment" and
     * "Invisible Weapon for Weapon Enchantment" settings are applied
     */
    bool isSoulParamIdChange_model3 : 1 { true };

    /**
     * @brief Weapon SEID offset value
     *
     * SEID offset value
     */
    signed char wepSeIdOffset{ 0 };

    /**
     * @brief Evolution price
     */
    int baseChangePrice{ 0 };

    /**
     * @brief Level sync correction ID
     */
    short levelSyncCorrectId{ -1 };

    /**
     * @brief Correction type (sleep attack power)
     *
     * Determine the type of sleep attack correction graph with primary
     * parameters
     */
    unsigned char correctType_Sleep{ 0 };

    /**
     * @brief Correction type (mad attack power)
     *
     * Determining the type of mad attack power correction graph with primary
     * parameters
     */
    unsigned char correctType_Madness{ 0 };

    /**
     * @brief Rarity
     *
     * Rarity used in item acquisition logs
     */
    unsigned char rarity{ 0 };

    /**
     * @brief Is it possible to attach magic stones?
     */
    unsigned char gemMountType{ 0 };

    /**
     * @brief Weapon regain amount
     */
    unsigned short wepRegainHp{ 0 };

    /**
     * @brief Effect text ID 00
     *
     * Effect text ID 00 (Weapon_Effect). Weapon-specific effect text to display
     * in status
     */
    int spEffectMsgId0{ -1 };

    /**
     * @brief Effect text ID 01
     *
     * Effect text ID 01 (Weapon_Effect). Weapon-specific effect text to display
     * in status
     */
    int spEffectMsgId1{ -1 };

    /**
     * @brief Effect text ID 02
     *
     * Effect text ID 02 (Weapon_Effect). Weapon-specific effect text to display
     * in status
     */
    int spEffectMsgId2{ -1 };

    /**
     * @brief Derivative source enhancement +16
     *
     * This weapon's enhancement source weapon ID 16
     */
    int originEquipWep16{ -1 };

    /**
     * @brief Derivative source enhancement +17
     *
     * This weapon's enhancement source weapon ID 17
     */
    int originEquipWep17{ -1 };

    /**
     * @brief Derivative source enhancement +18
     *
     * This weapon's enhancement source weapon ID18
     */
    int originEquipWep18{ -1 };

    /**
     * @brief Derivative source enhancement +19
     *
     * This weapon's enhancement source weapon ID 19
     */
    int originEquipWep19{ -1 };

    /**
     * @brief Derivative source enhancement +20
     *
     * This weapon's enhancement source weapon ID 20
     */
    int originEquipWep20{ -1 };

    /**
     * @brief Derivative source enhancement +21
     *
     * This weapon's enhancement source weapon ID21
     */
    int originEquipWep21{ -1 };

    /**
     * @brief Derivative source enhancement +22
     *
     * This weapon's enhancement source weapon ID 22
     */
    int originEquipWep22{ -1 };

    /**
     * @brief Derivative source enhancement +23
     *
     * This weapon's enhancement source weapon ID 23
     */
    int originEquipWep23{ -1 };

    /**
     * @brief Derivative source enhancement +24
     *
     * This weapon's enhancement source weapon ID 24
     */
    int originEquipWep24{ -1 };

    /**
     * @brief Derivative source enhancement +25
     *
     * This weapon's enhancement source weapon ID 25
     */
    int originEquipWep25{ -1 };

    /**
     * @brief Anti-player sleep damage correction factor
     *
     * Only attacks on the player will correct the damage done.
     */
    float vsPlayerDmgCorrectRate_Sleep{ 1.f };

    /**
     * @brief Anti-player mad damage correction factor
     *
     * Only attacks on the player will correct the damage done.
     */
    float vsPlayerDmgCorrectRate_Madness{ 1.f };

    /**
     * @brief SA attack cut rate when guarding
     *
     * SA damage cut rate when guard is successful
     */
    float saGuardCutRate{ 0.f };

    /**
     * @brief Defensive material variation value
     *
     * It is a value used to divide the damage SFX and SE into variations in
     * combination with the defense material used when guarding. SEQ16473
     */
    unsigned char defMaterialVariationValue{ 0 };

    /**
     * @brief Special attribute variation value
     *
     * It is a value used to give variation to abnormal state SFX, SE, etc. in
     * combination with the special attribute of the weapon. SEQ16473
     */
    unsigned char spAttributeVariationValue{ 0 };

    /**
     * @brief Stealth attack power multiplier
     */
    short stealthAtkRate{ 0 };

    /**
     * @brief Anti-player plague damage correction factor
     *
     * Only attacks on the player will correct the damage done.
     */
    float vsPlayerDmgCorrectRate_Disease{ 1.f };

    /**
     * @brief Anti-player curse damage correction factor
     *
     * Only attacks on the player will correct the damage done.
     */
    float vsPlayerDmgCorrectRate_Curse{ 1.f };

    /**
     * @brief restrictSpecialSwordArt
     */
    unsigned char restrictSpecialSwordArt{ 0 };

    unsigned char pad[7];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::EQUIP_PARAM_WEAPON_ST) == 664,
    "EQUIP_PARAM_WEAPON_ST paramdef size does not match detected size");
