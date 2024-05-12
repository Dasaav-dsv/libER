/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct EQUIP_PARAM_PROTECTOR_ST {
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
     * @brief Sort ID
     *
     * Sort ID (7 digits is the limit for s32 because the enhancement level is
     * added in the program)
     */
    int sortId{ 0 };

    /**
     * @brief Wandering equipment ID
     *
     * Replacement equipment ID for wandering ghosts.
     */
    unsigned int wanderingEquipId{ 0 };

    /**
     * @brief Sleep tolerance
     *
     * Difficulty in getting sleep abnormalities
     */
    unsigned short resistSleep{ 0 };

    /**
     * @brief Madness resistance
     *
     * Difficulty in getting mad
     */
    unsigned short resistMadness{ 0 };

    /**
     * @brief SA durability value
     *
     * Super armor endurance
     */
    float saDurability{ 0.f };

    /**
     * @brief Toughness correction factor
     *
     * It is a magnification that corrects the basic value of toughness.
     */
    float toughnessCorrectRate{ 0.f };

    /**
     * @brief Repair price
     *
     * Basic repair price
     */
    int fixPrice{ 0 };

    /**
     * @brief Basic price
     */
    int basicPrice{ 0 };

    /**
     * @brief Sale price
     *
     * Selling price
     */
    int sellValue{ 0 };

    /**
     * @brief Weight [kg]
     *
     * Weight [kg].
     */
    float weight{ 1.f };

    /**
     * @brief Resident special effect ID1
     */
    int residentSpEffectId{ 0 };

    /**
     * @brief Resident special effect ID2
     */
    int residentSpEffectId2{ 0 };

    /**
     * @brief Resident special effect ID3
     */
    int residentSpEffectId3{ 0 };

    /**
     * @brief Material ID
     *
     * Material parameter ID required for weapon enhancement
     */
    int materialSetId{ -1 };

    /**
     * @brief Part damage rate
     */
    float partsDamageRate{ 1.f };

    /**
     * @brief SA recovery time correction value
     *
     * Super Armor Recovery Time Correction Value
     */
    float corectSARecover{ 0.f };

    /**
     * @brief Derivation source
     *
     * Strengthening of this armor Original armor ID
     */
    int originEquipPro{ -1 };

    /**
     * @brief Derivative source enhancement +1
     *
     * Strengthening this armor Original armor ID1
     */
    int originEquipPro1{ -1 };

    /**
     * @brief Derivative source enhancement +2
     *
     * Strengthening this armor Original armor ID2
     */
    int originEquipPro2{ -1 };

    /**
     * @brief Derivative source enhancement +3
     *
     * Strengthening this armor Original armor ID3
     */
    int originEquipPro3{ -1 };

    /**
     * @brief Derivative source enhancement +4
     *
     * Strengthening this armor Original armor ID4
     */
    int originEquipPro4{ -1 };

    /**
     * @brief Derivative source enhancement +5
     *
     * Strengthening this armor Original armor ID5
     */
    int originEquipPro5{ -1 };

    /**
     * @brief Derivative source enhancement +6
     *
     * Strengthening this armor Original armor ID6
     */
    int originEquipPro6{ -1 };

    /**
     * @brief Derivative source enhancement +7
     *
     * Strengthening this armor Original armor ID7
     */
    int originEquipPro7{ -1 };

    /**
     * @brief Derivative source enhancement +8
     *
     * Strengthening this armor Original armor ID8
     */
    int originEquipPro8{ -1 };

    /**
     * @brief Derivative source enhancement +9
     *
     * Strengthening this armor Original armor ID9
     */
    int originEquipPro9{ -1 };

    /**
     * @brief Derivative source enhancement +10
     *
     * Strengthening this armor Original armor ID10
     */
    int originEquipPro10{ -1 };

    /**
     * @brief Derivative source enhancement +11
     *
     * Strengthening this armor Original armor ID11
     */
    int originEquipPro11{ -1 };

    /**
     * @brief Derivative source enhancement +12
     *
     * Strengthening this armor Original armor ID12
     */
    int originEquipPro12{ -1 };

    /**
     * @brief Derivative source enhancement +13
     *
     * Strengthening this armor Original armor ID13
     */
    int originEquipPro13{ -1 };

    /**
     * @brief Derivative source enhancement +14
     *
     * Strengthening this armor Original armor ID14
     */
    int originEquipPro14{ -1 };

    /**
     * @brief Derivative source enhancement +15
     *
     * Strengthening this armor Original armor ID15
     */
    int originEquipPro15{ -1 };

    /**
     * @brief Man profile enlargement scale
     */
    float faceScaleM_ScaleX{ 1.f };

    /**
     * @brief Male face enlargement scale
     */
    float faceScaleM_ScaleZ{ 1.f };

    /**
     * @brief Maximum magnification for male profile enlargement
     */
    float faceScaleM_MaxX{ 1.f };

    /**
     * @brief Maximum magnification for man's face enlargement
     */
    float faceScaleM_MaxZ{ 1.f };

    /**
     * @brief Female profile enlargement scale
     */
    float faceScaleF_ScaleX{ 1.f };

    /**
     * @brief Female face enlargement scale
     */
    float faceScaleF_ScaleZ{ 1.f };

    /**
     * @brief Female profile enlargement maximum magnification
     */
    float faceScaleF_MaxX{ 1.f };

    /**
     * @brief Maximum magnification for female face enlargement
     */
    float faceScaleF_MaxZ{ 1.f };

    /**
     * @brief QWCID
     *
     * QWC parameter ID
     */
    int qwcId{ -1 };

    /**
     * @brief Equipment model number
     *
     * Equipment model number.
     */
    unsigned short equipModelId{ 0 };

    /**
     * @brief Icon ID for men
     *
     * Men's menu icon ID.
     */
    unsigned short iconIdM{ 0 };

    /**
     * @brief Female icon ID
     *
     * Women's menu icon ID.
     */
    unsigned short iconIdF{ 0 };

    /**
     * @brief Knockback cut rate
     *
     * Knockback reduction value.
     */
    unsigned short knockBack{ 0 };

    /**
     * @brief Knockback repulsion rate
     *
     * Knockback repulsion rate.
     */
    unsigned short knockbackBounceRate{ 0 };

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

    unsigned char pad03[2];

    /**
     * @brief Repellent defense
     *
     * Used to determine the repulsion of enemy attacks.
     */
    unsigned short defFlickPower{ 0 };

    /**
     * @brief Physical defense
     *
     * Physical attack damage protection.
     */
    unsigned short defensePhysics{ 100 };

    /**
     * @brief Magic defense
     *
     * Magic attack damage protection.
     */
    unsigned short defenseMagic{ 100 };

    /**
     * @brief Fire defense
     *
     * Fire attack damage protection.
     */
    unsigned short defenseFire{ 100 };

    /**
     * @brief Electric shock defense
     *
     * Damage protection for electric shock attacks.
     */
    unsigned short defenseThunder{ 100 };

    /**
     * @brief Slash defense
     *
     * Look at the attack type, and if it is a slashing attribute, reduce the
     * defense power
     */
    short defenseSlash{ 0 };

    /**
     * @brief Strike defense
     *
     * Look at the attack attribute, and if it is a hit attribute, reduce the
     * defense power.
     */
    short defenseBlow{ 0 };

    /**
     * @brief Puncture defense
     *
     * Look at the attack attribute, and if it is a hit attribute, reduce the
     * defense power.
     */
    short defenseThrust{ 0 };

    /**
     * @brief Poison resistance
     *
     * Difficulty in getting poisonous
     */
    unsigned short resistPoison{ 100 };

    /**
     * @brief Epidemic resistance
     *
     * Difficulty in getting sick
     */
    unsigned short resistDisease{ 100 };

    /**
     * @brief Bleeding resistance
     *
     * Difficulty in getting bleeding abnormalities
     */
    unsigned short resistBlood{ 100 };

    /**
     * @brief Curse resistance
     *
     * Difficulty in getting a curse condition
     */
    unsigned short resistCurse{ 100 };

    /**
     * @brief Enhanced type ID
     */
    short reinforceTypeId{ 0 };

    /**
     * @brief Trophy
     *
     * Is it related to the trophy system?
     */
    short trophySGradeId{ -1 };

    /**
     * @brief Shop level
     *
     * Level that can be sold at the store
     */
    short shopLv{ 0 };

    /**
     * @brief Knockback parameter ID
     *
     * ID of the parameter used for knockback
     */
    unsigned char knockbackParamId{ 0 };

    /**
     * @brief Damage attenuation rate when repelling [%]
     *
     * Used for damage attenuation rate when repelling
     */
    unsigned char flickDamageCutRate{ 0 };

    /**
     * @brief Equipment model type
     *
     * Equipment model type.
     */
    unsigned char equipModelCategory{ 1 };

    /**
     * @brief Equipment model gender
     *
     * Gender of equipment model.
     */
    unsigned char equipModelGender{ 0 };

    /**
     * @brief Armor category
     *
     * Armor category.
     */
    unsigned char protectorCategory{ 0 };

    /**
     * @brief Rarity
     *
     * Rarity used in item acquisition logs
     */
    unsigned char rarity{ 0 };

    /**
     * @brief Sort item type ID
     *
     * Sort item type ID. In the sort "Item type order", the same ID is
     * displayed together as the same group.
     */
    unsigned char sortGroupId{ 255 };

    /**
     * @brief Part damage application attack
     *
     * Set the attack type to judge the part damage
     */
    unsigned char partsDmgType{ 0 };

    unsigned char pad04[2];

    /**
     * @brief Can i deposit
     *
     * Can you leave it in the warehouse?
     */
    bool isDeposit : 1 { false };

    /**
     * @brief Head equipment
     *
     * Is it head equipment?
     */
    bool headEquip : 1 { false };

    /**
     * @brief Torso equipment
     *
     * Is it torso equipment?
     */
    bool bodyEquip : 1 { false };

    /**
     * @brief Arm equipment
     *
     * Is it arm equipment?
     */
    bool armEquip : 1 { false };

    /**
     * @brief Leg equipment
     *
     * Is it leg equipment?
     */
    bool legEquip : 1 { false };

    /**
     * @brief Whether to use a face scale
     */
    bool useFaceScale : 1 { false };

    /**
     * @brief Do you want to skip the weakness animation?
     *
     * Weakness damage Whether to skip animation playback. "Part damage rate"
     * and "defense material" are treated as weak points just by not playing the
     * animation.
     */
    bool isSkipWeakDamageAnim : 1 { false };

    unsigned char pad06 : 1;

    /**
     * @brief Weakness defense material variation value
     *
     * It is a value used for variation of abnormal condition, damage SFX, SE in
     * combination with weak point defense material. SEQ16473
     */
    unsigned char defenseMaterialVariationValue_Weak{ 0 };

    /**
     * @brief Foot decal identifier 2
     *
     * Decal ID for automatic foot effects. Floor material is also considered.
     * Only used when the "armor category" is "legs".
     */
    short autoFootEffectDecalBaseId2{ -1 };

    /**
     * @brief Foot decal identifier 3
     *
     * Decal ID for automatic foot effects. Floor material is also considered.
     * Only used when the "armor category" is "legs".
     */
    short autoFootEffectDecalBaseId3{ -1 };

    /**
     * @brief Defensive material variation value
     *
     * It is a value used in combination with the defense material to classify
     * abnormal conditions, damage SFX, and SE. SEQ16473
     */
    unsigned char defenseMaterialVariationValue{ 0 };

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
     * @brief Is multi-drop sharing prohibited?
     */
    bool disableMultiDropShare : 1 { false };

    /**
     * @brief Is there a simple model for DLC?
     */
    bool simpleModelForDlc : 1 { false };

    /**
     * @brief Acquisition log display condition
     *
     * Whether to display in the item acquisition log when acquiring the item
     * (not entered: ○)
     */
    bool showLogCondType : 1 { true };

    /**
     * @brief Acquisition dialog display condition
     *
     * Whether to display it in the item acquisition dialog when acquiring an
     * item (not entered: new only)
     */
    unsigned char showDialogCondType : 2 { 2 };

    unsigned char pad : 1;

    /**
     * @brief Non-attribute damage multiplier
     */
    float neutralDamageCutRate{ 1.f };

    /**
     * @brief Slash damage multiplier
     */
    float slashDamageCutRate{ 1.f };

    /**
     * @brief Batter damage multiplier
     */
    float blowDamageCutRate{ 1.f };

    /**
     * @brief Puncture damage ratio
     */
    float thrustDamageCutRate{ 1.f };

    /**
     * @brief Magic damage multiplier
     */
    float magicDamageCutRate{ 1.f };

    /**
     * @brief Flame damage multiplier
     */
    float fireDamageCutRate{ 1.f };

    /**
     * @brief Electric shock damage ratio
     */
    float thunderDamageCutRate{ 1.f };

    /**
     * @brief Defensive material 1 [SFX]
     *
     * For SFX when moving / defending. 1
     */
    unsigned short defenseMaterialSfx1{ 50 };

    /**
     * @brief Weakness protection material 1 [SFX]
     *
     * For SFX when weak points are damaged 1
     */
    unsigned short defenseMaterialSfx_Weak1{ 50 };

    /**
     * @brief Defensive material 1 [SE]
     *
     * For SE when moving / defending. 1
     */
    unsigned short defenseMaterial1{ 50 };

    /**
     * @brief Weakness defense material 1 [SE]
     *
     * For SE when weak points are damaged 1
     */
    unsigned short defenseMaterial_Weak1{ 50 };

    /**
     * @brief Defensive material 2 [SFX]
     *
     * For SFX when moving / defending. 2
     */
    unsigned short defenseMaterialSfx2{ 50 };

    /**
     * @brief Weakness protection material 2 [SFX]
     *
     * 2 for SFX when weak points are damaged
     */
    unsigned short defenseMaterialSfx_Weak2{ 50 };

    /**
     * @brief Foot equipment material [SE]
     *
     * Material for foot equipment SE. Only foot equipment is referenced. ([GR]
     * SEQ10061) In the case of "139: None", the defense material 1 [SE] is
     * referred to.
     */
    unsigned short footMaterialSe{ 139 };

    /**
     * @brief Weakness defense material 2 [SE]
     *
     * 2 for SE when weak points are damaged
     */
    unsigned short defenseMaterial_Weak2{ 50 };

    /**
     * @brief Foot decal identifier 1
     *
     * Decal ID for automatic foot effects. Floor material is also considered.
     * Only used when the "armor category" is "legs".
     */
    int autoFootEffectDecalBaseId1{ -1 };

    /**
     * @brief Toughness Damage multiplier
     *
     * Toughness version cut rate
     */
    float toughnessDamageCutRate{ 1.f };

    /**
     * @brief Toughness recovery time correction value
     *
     * Correction value for toughness recovery time
     */
    float toughnessRecoverCorrection{ 0.f };

    /**
     * @brief Dark damage multiplier
     */
    float darkDamageCutRate{ 1.f };

    /**
     * @brief Dark defense
     *
     * Dark attack damage protection.
     */
    unsigned short defenseDark{ 100 };

    /**
     * @brief PAD_original_ num. 48 num. hidden
     *
     * Original _ num. 48 num. hidden
     */
    unsigned char invisibleFlag48 : 1;

    /**
     * @brief PAD_original_ num. 49 num. hidden
     *
     * Original _ num. 49 num. hidden
     */
    unsigned char invisibleFlag49 : 1;

    /**
     * @brief PAD_original_ num. 50 num. hidden
     *
     * Original _ num. 50 num. hidden
     */
    unsigned char invisibleFlag50 : 1;

    /**
     * @brief PAD_original_ num. 51 num. hidden
     *
     * Original _ num. 51 num. hidden
     */
    unsigned char invisibleFlag51 : 1;

    /**
     * @brief PAD_original_ num. 52 num. hidden
     *
     * Original _ num. 52 num. hidden
     */
    unsigned char invisibleFlag52 : 1;

    /**
     * @brief PAD_original_ num. 53 num. hidden
     *
     * Original _ num. 53 num. hidden
     */
    unsigned char invisibleFlag53 : 1;

    /**
     * @brief PAD_original_ num. 54 num. hidden
     *
     * Original _ num. 54 num. hidden
     */
    unsigned char invisibleFlag54 : 1;

    /**
     * @brief PAD_original_ num. 55 num. hidden
     *
     * Original _ num. 55 num. hidden
     */
    unsigned char invisibleFlag55 : 1;

    /**
     * @brief PAD_original_ num. 56 num. hidden
     *
     * Original _ num. 56 num. hidden
     */
    unsigned char invisibleFlag56 : 1;

    /**
     * @brief PAD_original_ num. 57 num. hidden
     *
     * Original _ num. 57 num. hidden
     */
    unsigned char invisibleFlag57 : 1;

    /**
     * @brief PAD_original_ num. 58 num. hidden
     *
     * Original _ num. 58 num. hidden
     */
    unsigned char invisibleFlag58 : 1;

    /**
     * @brief PAD_original_ num. 59 num. hidden
     *
     * Original _ num. 59 num. hidden
     */
    unsigned char invisibleFlag59 : 1;

    /**
     * @brief PAD_original_ num. 60 num. hidden
     *
     * Original _ num. 60 num. hidden
     */
    unsigned char invisibleFlag60 : 1;

    /**
     * @brief PAD_original_ num. 61 num. hidden
     *
     * Original _ num. 61 num. Hidden
     */
    unsigned char invisibleFlag61 : 1;

    /**
     * @brief PAD_original_ num. 62 num. hidden
     *
     * Original _ num. 62 num. hidden
     */
    unsigned char invisibleFlag62 : 1;

    /**
     * @brief PAD_original_ num. 63 num. hidden
     *
     * Original _ num. 63 num. hidden
     */
    unsigned char invisibleFlag63 : 1;

    /**
     * @brief PAD_original_ num. 64 num. hidden
     *
     * Original _ num. 64 num. hidden
     */
    unsigned char invisibleFlag64 : 1;

    /**
     * @brief PAD_original_ num. 65 num. hidden
     *
     * Original _ num. 65 num. hidden
     */
    unsigned char invisibleFlag65 : 1;

    /**
     * @brief PAD_original_ num. 66 num. hidden
     *
     * Original _ num. 66 num. hidden
     */
    unsigned char invisibleFlag66 : 1;

    /**
     * @brief PAD_original_ num. 67 num. hidden
     *
     * Original _ num. 67 num. hidden
     */
    unsigned char invisibleFlag67 : 1;

    /**
     * @brief PAD_original_ num. 68 num. hidden
     *
     * Original _ num. 68 num. hidden
     */
    unsigned char invisibleFlag68 : 1;

    /**
     * @brief PAD_original_ num. 69 num. hidden
     *
     * Original _ num. 69 num. hidden
     */
    unsigned char invisibleFlag69 : 1;

    /**
     * @brief PAD_original_ num. 70 num. hidden
     *
     * Original _ num. 70 num. hidden
     */
    unsigned char invisibleFlag70 : 1;

    /**
     * @brief PAD_original_ num. 71 num. hidden
     *
     * Original _ num. 71 num. hidden
     */
    unsigned char invisibleFlag71 : 1;

    /**
     * @brief PAD_original_ num. 72 num. hidden
     *
     * Original _ num. 72 num. hidden
     */
    unsigned char invisibleFlag72 : 1;

    /**
     * @brief PAD_original_ num. 73 num. hidden
     *
     * Original _ num. 73 num. hidden
     */
    unsigned char invisibleFlag73 : 1;

    /**
     * @brief PAD_original_ num. 74 num. hidden
     *
     * Original _ num. 74 num. hidden
     */
    unsigned char invisibleFlag74 : 1;

    /**
     * @brief PAD_original_ num. 75 num. hidden
     *
     * Original _ num. 75 num. hidden
     */
    unsigned char invisibleFlag75 : 1;

    /**
     * @brief PAD_original_ num. 76 num. hidden
     *
     * Original _ num. 76 num. hidden
     */
    unsigned char invisibleFlag76 : 1;

    /**
     * @brief PAD_original_ num. 77 num. hidden
     *
     * Original _ num. 77 num. hidden
     */
    unsigned char invisibleFlag77 : 1;

    /**
     * @brief PAD_original_ num. 78 num. hidden
     *
     * Original _ num. 78 num. hidden
     */
    unsigned char invisibleFlag78 : 1;

    /**
     * @brief PAD_original_ num. 79 num. hidden
     *
     * Original _ num. 79 num. hidden
     */
    unsigned char invisibleFlag79 : 1;

    /**
     * @brief PAD_original_ num. 80 num. hidden
     *
     * Original _ num. 80 num. hidden
     */
    unsigned char invisibleFlag80 : 1;

    unsigned char padbit : 7;

    /**
     * @brief Attitude control ID (torso)
     */
    unsigned char postureControlId{ 0 };

    unsigned char pad2[4];

    /**
     * @brief Selling price
     */
    int saleValue{ -1 };

    /**
     * @brief Cold resistance
     *
     * Difficulty in getting cold air condition abnormal
     */
    unsigned short resistFreeze{ 0 };

    /**
     * @brief num. 00 num.Hidden (Gender designation)
     *
     * Bangs tip
     */
    unsigned char invisibleFlag_SexVer00{ 0 };

    /**
     * @brief num. 01 num.Hidden (Gender designation)
     *
     * Bangs root
     */
    unsigned char invisibleFlag_SexVer01{ 0 };

    /**
     * @brief num. 02 num.Hidden (Gender designation)
     *
     * Sideburns
     */
    unsigned char invisibleFlag_SexVer02{ 0 };

    /**
     * @brief num. 03 num.Hidden (Gender designation)
     *
     * Top of the head
     */
    unsigned char invisibleFlag_SexVer03{ 0 };

    /**
     * @brief num. 04 num.Hidden (Gender designation)
     *
     * Top of the head
     */
    unsigned char invisibleFlag_SexVer04{ 0 };

    /**
     * @brief num. 05 num.Hidden (Gender designation)
     *
     * Back hair
     */
    unsigned char invisibleFlag_SexVer05{ 0 };

    /**
     * @brief num. 06 num.Hidden (Gender designation)
     *
     * The tip of the back hair
     */
    unsigned char invisibleFlag_SexVer06{ 0 };

    /**
     * @brief num. 07 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer07{ 0 };

    /**
     * @brief num. 08 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer08{ 0 };

    /**
     * @brief num. 09 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer09{ 0 };

    /**
     * @brief num. 10 num.Hidden (Gender designation)
     *
     * collar
     */
    unsigned char invisibleFlag_SexVer10{ 0 };

    /**
     * @brief num. 11 num.Hidden (Gender designation)
     *
     * Around the collar
     */
    unsigned char invisibleFlag_SexVer11{ 0 };

    /**
     * @brief num. 12 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer12{ 0 };

    /**
     * @brief num. 13 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer13{ 0 };

    /**
     * @brief num. 14 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer14{ 0 };

    /**
     * @brief num. 15 num.Hidden (Gender designation)
     *
     * Hood hem
     */
    unsigned char invisibleFlag_SexVer15{ 0 };

    /**
     * @brief num. 16 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer16{ 0 };

    /**
     * @brief num. 17 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer17{ 0 };

    /**
     * @brief num. 18 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer18{ 0 };

    /**
     * @brief num. 19 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer19{ 0 };

    /**
     * @brief num. 20 num.Hidden (Gender designation)
     *
     * Sleeve A
     */
    unsigned char invisibleFlag_SexVer20{ 0 };

    /**
     * @brief num. 21 num.Hidden (Gender designation)
     *
     * Sleeve B
     */
    unsigned char invisibleFlag_SexVer21{ 0 };

    /**
     * @brief num. 22 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer22{ 0 };

    /**
     * @brief num. 23 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer23{ 0 };

    /**
     * @brief num. 24 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer24{ 0 };

    /**
     * @brief num. 25 num.Hidden (Gender designation)
     *
     * arm
     */
    unsigned char invisibleFlag_SexVer25{ 0 };

    /**
     * @brief num. 26 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer26{ 0 };

    /**
     * @brief num. 27 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer27{ 0 };

    /**
     * @brief num. 28 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer28{ 0 };

    /**
     * @brief num. 29 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer29{ 0 };

    /**
     * @brief num. 30 num.Hidden (Gender designation)
     *
     * belt
     */
    unsigned char invisibleFlag_SexVer30{ 0 };

    /**
     * @brief num. 31 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer31{ 0 };

    /**
     * @brief num. 32 num.Hidden (Men and women specified)
     */
    unsigned char invisibleFlag_SexVer32{ 0 };

    /**
     * @brief num. 33 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer33{ 0 };

    /**
     * @brief num. 34 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer34{ 0 };

    /**
     * @brief num. 35 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer35{ 0 };

    /**
     * @brief num. 36 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer36{ 0 };

    /**
     * @brief num. 37 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer37{ 0 };

    /**
     * @brief num. 38 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer38{ 0 };

    /**
     * @brief num. 39 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer39{ 0 };

    /**
     * @brief num. 40 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer40{ 0 };

    /**
     * @brief num. 41 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer41{ 0 };

    /**
     * @brief num. 42 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer42{ 0 };

    /**
     * @brief num. 43 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer43{ 0 };

    /**
     * @brief num. 44 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer44{ 0 };

    /**
     * @brief num. 45 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer45{ 0 };

    /**
     * @brief num. 46 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer46{ 0 };

    /**
     * @brief num. 47 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer47{ 0 };

    /**
     * @brief num. 48 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer48{ 0 };

    /**
     * @brief num. 49 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer49{ 0 };

    /**
     * @brief num. 50 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer50{ 0 };

    /**
     * @brief num. 51 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer51{ 0 };

    /**
     * @brief num. 52 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer52{ 0 };

    /**
     * @brief num. 53 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer53{ 0 };

    /**
     * @brief num. 54 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer54{ 0 };

    /**
     * @brief num. 55 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer55{ 0 };

    /**
     * @brief num. 56 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer56{ 0 };

    /**
     * @brief num. 57 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer57{ 0 };

    /**
     * @brief num. 58 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer58{ 0 };

    /**
     * @brief num. 59 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer59{ 0 };

    /**
     * @brief num. 60 num.Hidden (Men and women specified)
     */
    unsigned char invisibleFlag_SexVer60{ 0 };

    /**
     * @brief num. 61 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer61{ 0 };

    /**
     * @brief num. 62 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer62{ 0 };

    /**
     * @brief num. 63 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer63{ 0 };

    /**
     * @brief num. 64 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer64{ 0 };

    /**
     * @brief num. 65 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer65{ 0 };

    /**
     * @brief num. 66 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer66{ 0 };

    /**
     * @brief num. 67 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer67{ 0 };

    /**
     * @brief num. 68 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer68{ 0 };

    /**
     * @brief num. 69 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer69{ 0 };

    /**
     * @brief num. 70 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer70{ 0 };

    /**
     * @brief num. 71 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer71{ 0 };

    /**
     * @brief num. 72 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer72{ 0 };

    /**
     * @brief num. 73 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer73{ 0 };

    /**
     * @brief num. 74 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer74{ 0 };

    /**
     * @brief num. 75 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer75{ 0 };

    /**
     * @brief num. 76 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer76{ 0 };

    /**
     * @brief num. 77 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer77{ 0 };

    /**
     * @brief num. 78 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer78{ 0 };

    /**
     * @brief num. 79 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer79{ 0 };

    /**
     * @brief num. 80 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer80{ 0 };

    /**
     * @brief num. 81 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer81{ 0 };

    /**
     * @brief num. 82 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer82{ 0 };

    /**
     * @brief num. 83 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer83{ 0 };

    /**
     * @brief num. 84 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer84{ 0 };

    /**
     * @brief num. 85 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer85{ 0 };

    /**
     * @brief num. 86 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer86{ 0 };

    /**
     * @brief num. 87 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer87{ 0 };

    /**
     * @brief num. 88 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer88{ 0 };

    /**
     * @brief num. 89 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer89{ 0 };

    /**
     * @brief num. 90 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer90{ 0 };

    /**
     * @brief num. 91 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer91{ 0 };

    /**
     * @brief num. 92 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer92{ 0 };

    /**
     * @brief num. 93 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer93{ 0 };

    /**
     * @brief num. 94 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer94{ 0 };

    /**
     * @brief num. 95 num.Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer95{ 0 };

    unsigned char pad404[14];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::EQUIP_PARAM_PROTECTOR_ST) == 416,
    "EQUIP_PARAM_PROTECTOR_ST paramdef size does not match detected size");
