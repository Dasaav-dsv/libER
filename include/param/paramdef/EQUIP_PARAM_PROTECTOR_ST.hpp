/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

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
    float saDurability{ 0 };

    /**
     * @brief Toughness correction factor
     *
     * It is a magnification that corrects the basic value of toughness.
     */
    float toughnessCorrectRate{ 0 };

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
    float weight{ 1 };

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
    float partsDamageRate{ 1 };

    /**
     * @brief SA recovery time correction value
     *
     * Super Armor Recovery Time Correction Value
     */
    float corectSARecover{ 0 };

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
    float faceScaleM_ScaleX{ 1 };

    /**
     * @brief Male face enlargement scale
     */
    float faceScaleM_ScaleZ{ 1 };

    /**
     * @brief Maximum magnification for male profile enlargement
     */
    float faceScaleM_MaxX{ 1 };

    /**
     * @brief Maximum magnification for man's face enlargement
     */
    float faceScaleM_MaxZ{ 1 };

    /**
     * @brief Female profile enlargement scale
     */
    float faceScaleF_ScaleX{ 1 };

    /**
     * @brief Female face enlargement scale
     */
    float faceScaleF_ScaleZ{ 1 };

    /**
     * @brief Female profile enlargement maximum magnification
     */
    float faceScaleF_MaxX{ 1 };

    /**
     * @brief Maximum magnification for female face enlargement
     */
    float faceScaleF_MaxZ{ 1 };

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
    float neutralDamageCutRate{ 1 };

    /**
     * @brief Slash damage multiplier
     */
    float slashDamageCutRate{ 1 };

    /**
     * @brief Batter damage multiplier
     */
    float blowDamageCutRate{ 1 };

    /**
     * @brief Puncture damage ratio
     */
    float thrustDamageCutRate{ 1 };

    /**
     * @brief Magic damage multiplier
     */
    float magicDamageCutRate{ 1 };

    /**
     * @brief Flame damage multiplier
     */
    float fireDamageCutRate{ 1 };

    /**
     * @brief Electric shock damage ratio
     */
    float thunderDamageCutRate{ 1 };

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
    float toughnessDamageCutRate{ 1 };

    /**
     * @brief Toughness recovery time correction value
     *
     * Correction value for toughness recovery time
     */
    float toughnessRecoverCorrection{ 0 };

    /**
     * @brief Dark damage multiplier
     */
    float darkDamageCutRate{ 1 };

    /**
     * @brief Dark defense
     *
     * Dark attack damage protection.
     */
    unsigned short defenseDark{ 100 };

    /**
     * @brief PAD_original_ # 48 # hidden
     *
     * Original _ # 48 # hidden
     */
    unsigned char invisibleFlag48 : 1;

    /**
     * @brief PAD_original_ # 49 # hidden
     *
     * Original _ # 49 # hidden
     */
    unsigned char invisibleFlag49 : 1;

    /**
     * @brief PAD_original_ # 50 # hidden
     *
     * Original _ # 50 # hidden
     */
    unsigned char invisibleFlag50 : 1;

    /**
     * @brief PAD_original_ # 51 # hidden
     *
     * Original _ # 51 # hidden
     */
    unsigned char invisibleFlag51 : 1;

    /**
     * @brief PAD_original_ # 52 # hidden
     *
     * Original _ # 52 # hidden
     */
    unsigned char invisibleFlag52 : 1;

    /**
     * @brief PAD_original_ # 53 # hidden
     *
     * Original _ # 53 # hidden
     */
    unsigned char invisibleFlag53 : 1;

    /**
     * @brief PAD_original_ # 54 # hidden
     *
     * Original _ # 54 # hidden
     */
    unsigned char invisibleFlag54 : 1;

    /**
     * @brief PAD_original_ # 55 # hidden
     *
     * Original _ # 55 # hidden
     */
    unsigned char invisibleFlag55 : 1;

    /**
     * @brief PAD_original_ # 56 # hidden
     *
     * Original _ # 56 # hidden
     */
    unsigned char invisibleFlag56 : 1;

    /**
     * @brief PAD_original_ # 57 # hidden
     *
     * Original _ # 57 # hidden
     */
    unsigned char invisibleFlag57 : 1;

    /**
     * @brief PAD_original_ # 58 # hidden
     *
     * Original _ # 58 # hidden
     */
    unsigned char invisibleFlag58 : 1;

    /**
     * @brief PAD_original_ # 59 # hidden
     *
     * Original _ # 59 # hidden
     */
    unsigned char invisibleFlag59 : 1;

    /**
     * @brief PAD_original_ # 60 # hidden
     *
     * Original _ # 60 # hidden
     */
    unsigned char invisibleFlag60 : 1;

    /**
     * @brief PAD_original_ # 61 # hidden
     *
     * Original _ # 61 # Hidden
     */
    unsigned char invisibleFlag61 : 1;

    /**
     * @brief PAD_original_ # 62 # hidden
     *
     * Original _ # 62 # hidden
     */
    unsigned char invisibleFlag62 : 1;

    /**
     * @brief PAD_original_ # 63 # hidden
     *
     * Original _ # 63 # hidden
     */
    unsigned char invisibleFlag63 : 1;

    /**
     * @brief PAD_original_ # 64 # hidden
     *
     * Original _ # 64 # hidden
     */
    unsigned char invisibleFlag64 : 1;

    /**
     * @brief PAD_original_ # 65 # hidden
     *
     * Original _ # 65 # hidden
     */
    unsigned char invisibleFlag65 : 1;

    /**
     * @brief PAD_original_ # 66 # hidden
     *
     * Original _ # 66 # hidden
     */
    unsigned char invisibleFlag66 : 1;

    /**
     * @brief PAD_original_ # 67 # hidden
     *
     * Original _ # 67 # hidden
     */
    unsigned char invisibleFlag67 : 1;

    /**
     * @brief PAD_original_ # 68 # hidden
     *
     * Original _ # 68 # hidden
     */
    unsigned char invisibleFlag68 : 1;

    /**
     * @brief PAD_original_ # 69 # hidden
     *
     * Original _ # 69 # hidden
     */
    unsigned char invisibleFlag69 : 1;

    /**
     * @brief PAD_original_ # 70 # hidden
     *
     * Original _ # 70 # hidden
     */
    unsigned char invisibleFlag70 : 1;

    /**
     * @brief PAD_original_ # 71 # hidden
     *
     * Original _ # 71 # hidden
     */
    unsigned char invisibleFlag71 : 1;

    /**
     * @brief PAD_original_ # 72 # hidden
     *
     * Original _ # 72 # hidden
     */
    unsigned char invisibleFlag72 : 1;

    /**
     * @brief PAD_original_ # 73 # hidden
     *
     * Original _ # 73 # hidden
     */
    unsigned char invisibleFlag73 : 1;

    /**
     * @brief PAD_original_ # 74 # hidden
     *
     * Original _ # 74 # hidden
     */
    unsigned char invisibleFlag74 : 1;

    /**
     * @brief PAD_original_ # 75 # hidden
     *
     * Original _ # 75 # hidden
     */
    unsigned char invisibleFlag75 : 1;

    /**
     * @brief PAD_original_ # 76 # hidden
     *
     * Original _ # 76 # hidden
     */
    unsigned char invisibleFlag76 : 1;

    /**
     * @brief PAD_original_ # 77 # hidden
     *
     * Original _ # 77 # hidden
     */
    unsigned char invisibleFlag77 : 1;

    /**
     * @brief PAD_original_ # 78 # hidden
     *
     * Original _ # 78 # hidden
     */
    unsigned char invisibleFlag78 : 1;

    /**
     * @brief PAD_original_ # 79 # hidden
     *
     * Original _ # 79 # hidden
     */
    unsigned char invisibleFlag79 : 1;

    /**
     * @brief PAD_original_ # 80 # hidden
     *
     * Original _ # 80 # hidden
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
     * @brief # 00 #Hidden (Gender designation)
     *
     * Bangs tip
     */
    unsigned char invisibleFlag_SexVer00{ 0 };

    /**
     * @brief # 01 #Hidden (Gender designation)
     *
     * Bangs root
     */
    unsigned char invisibleFlag_SexVer01{ 0 };

    /**
     * @brief # 02 #Hidden (Gender designation)
     *
     * Sideburns
     */
    unsigned char invisibleFlag_SexVer02{ 0 };

    /**
     * @brief # 03 #Hidden (Gender designation)
     *
     * Top of the head
     */
    unsigned char invisibleFlag_SexVer03{ 0 };

    /**
     * @brief # 04 #Hidden (Gender designation)
     *
     * Top of the head
     */
    unsigned char invisibleFlag_SexVer04{ 0 };

    /**
     * @brief # 05 #Hidden (Gender designation)
     *
     * Back hair
     */
    unsigned char invisibleFlag_SexVer05{ 0 };

    /**
     * @brief # 06 #Hidden (Gender designation)
     *
     * The tip of the back hair
     */
    unsigned char invisibleFlag_SexVer06{ 0 };

    /**
     * @brief # 07 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer07{ 0 };

    /**
     * @brief # 08 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer08{ 0 };

    /**
     * @brief # 09 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer09{ 0 };

    /**
     * @brief # 10 #Hidden (Gender designation)
     *
     * collar
     */
    unsigned char invisibleFlag_SexVer10{ 0 };

    /**
     * @brief # 11 #Hidden (Gender designation)
     *
     * Around the collar
     */
    unsigned char invisibleFlag_SexVer11{ 0 };

    /**
     * @brief # 12 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer12{ 0 };

    /**
     * @brief # 13 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer13{ 0 };

    /**
     * @brief # 14 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer14{ 0 };

    /**
     * @brief # 15 #Hidden (Gender designation)
     *
     * Hood hem
     */
    unsigned char invisibleFlag_SexVer15{ 0 };

    /**
     * @brief # 16 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer16{ 0 };

    /**
     * @brief # 17 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer17{ 0 };

    /**
     * @brief # 18 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer18{ 0 };

    /**
     * @brief # 19 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer19{ 0 };

    /**
     * @brief # 20 #Hidden (Gender designation)
     *
     * Sleeve A
     */
    unsigned char invisibleFlag_SexVer20{ 0 };

    /**
     * @brief # 21 #Hidden (Gender designation)
     *
     * Sleeve B
     */
    unsigned char invisibleFlag_SexVer21{ 0 };

    /**
     * @brief # 22 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer22{ 0 };

    /**
     * @brief # 23 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer23{ 0 };

    /**
     * @brief # 24 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer24{ 0 };

    /**
     * @brief # 25 #Hidden (Gender designation)
     *
     * arm
     */
    unsigned char invisibleFlag_SexVer25{ 0 };

    /**
     * @brief # 26 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer26{ 0 };

    /**
     * @brief # 27 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer27{ 0 };

    /**
     * @brief # 28 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer28{ 0 };

    /**
     * @brief # 29 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer29{ 0 };

    /**
     * @brief # 30 #Hidden (Gender designation)
     *
     * belt
     */
    unsigned char invisibleFlag_SexVer30{ 0 };

    /**
     * @brief # 31 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer31{ 0 };

    /**
     * @brief # 32 #Hidden (Men and women specified)
     */
    unsigned char invisibleFlag_SexVer32{ 0 };

    /**
     * @brief # 33 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer33{ 0 };

    /**
     * @brief # 34 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer34{ 0 };

    /**
     * @brief # 35 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer35{ 0 };

    /**
     * @brief # 36 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer36{ 0 };

    /**
     * @brief # 37 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer37{ 0 };

    /**
     * @brief # 38 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer38{ 0 };

    /**
     * @brief # 39 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer39{ 0 };

    /**
     * @brief # 40 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer40{ 0 };

    /**
     * @brief # 41 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer41{ 0 };

    /**
     * @brief # 42 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer42{ 0 };

    /**
     * @brief # 43 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer43{ 0 };

    /**
     * @brief # 44 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer44{ 0 };

    /**
     * @brief # 45 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer45{ 0 };

    /**
     * @brief # 46 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer46{ 0 };

    /**
     * @brief # 47 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer47{ 0 };

    /**
     * @brief # 48 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer48{ 0 };

    /**
     * @brief # 49 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer49{ 0 };

    /**
     * @brief # 50 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer50{ 0 };

    /**
     * @brief # 51 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer51{ 0 };

    /**
     * @brief # 52 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer52{ 0 };

    /**
     * @brief # 53 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer53{ 0 };

    /**
     * @brief # 54 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer54{ 0 };

    /**
     * @brief # 55 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer55{ 0 };

    /**
     * @brief # 56 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer56{ 0 };

    /**
     * @brief # 57 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer57{ 0 };

    /**
     * @brief # 58 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer58{ 0 };

    /**
     * @brief # 59 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer59{ 0 };

    /**
     * @brief # 60 #Hidden (Men and women specified)
     */
    unsigned char invisibleFlag_SexVer60{ 0 };

    /**
     * @brief # 61 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer61{ 0 };

    /**
     * @brief # 62 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer62{ 0 };

    /**
     * @brief # 63 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer63{ 0 };

    /**
     * @brief # 64 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer64{ 0 };

    /**
     * @brief # 65 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer65{ 0 };

    /**
     * @brief # 66 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer66{ 0 };

    /**
     * @brief # 67 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer67{ 0 };

    /**
     * @brief # 68 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer68{ 0 };

    /**
     * @brief # 69 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer69{ 0 };

    /**
     * @brief # 70 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer70{ 0 };

    /**
     * @brief # 71 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer71{ 0 };

    /**
     * @brief # 72 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer72{ 0 };

    /**
     * @brief # 73 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer73{ 0 };

    /**
     * @brief # 74 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer74{ 0 };

    /**
     * @brief # 75 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer75{ 0 };

    /**
     * @brief # 76 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer76{ 0 };

    /**
     * @brief # 77 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer77{ 0 };

    /**
     * @brief # 78 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer78{ 0 };

    /**
     * @brief # 79 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer79{ 0 };

    /**
     * @brief # 80 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer80{ 0 };

    /**
     * @brief # 81 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer81{ 0 };

    /**
     * @brief # 82 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer82{ 0 };

    /**
     * @brief # 83 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer83{ 0 };

    /**
     * @brief # 84 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer84{ 0 };

    /**
     * @brief # 85 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer85{ 0 };

    /**
     * @brief # 86 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer86{ 0 };

    /**
     * @brief # 87 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer87{ 0 };

    /**
     * @brief # 88 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer88{ 0 };

    /**
     * @brief # 89 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer89{ 0 };

    /**
     * @brief # 90 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer90{ 0 };

    /**
     * @brief # 91 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer91{ 0 };

    /**
     * @brief # 92 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer92{ 0 };

    /**
     * @brief # 93 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer93{ 0 };

    /**
     * @brief # 94 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer94{ 0 };

    /**
     * @brief # 95 #Hidden (Gender designation)
     */
    unsigned char invisibleFlag_SexVer95{ 0 };

    unsigned char pad404[14];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::EQUIP_PARAM_PROTECTOR_ST) == 416,
    "EQUIP_PARAM_PROTECTOR_ST paramdef size does not match detected size");
