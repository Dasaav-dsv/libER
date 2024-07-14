/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 *
 */
struct EQUIP_PARAM_GEM_ST {
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
     * @brief Icon ID
     *
     * Menu icon ID
     */
    unsigned short iconId{ 0 };

    /**
     * @brief Magic stone rank
     */
    signed char rank{ 0 };

    /**
     * @brief Sort item type ID
     *
     * Sort item type ID. In the sort "Item type order", the same ID is
     * displayed together as the same group.
     */
    unsigned char sortGroupId{ 255 };

    /**
     * @brief Resident special effect ID00
     *
     * Special effect ID00
     */
    int spEffectId0{ -1 };

    /**
     * @brief Resident special effect ID01
     *
     * Special effect ID01
     */
    int spEffectId1{ -1 };

    /**
     * @brief Resident special effect ID02
     *
     * Special effect ID02
     */
    int spEffectId2{ -1 };

    /**
     * @brief Item acquisition tutorial Judgment flag ID
     *
     * Event flag ID for the tutorial when you first get the item. Flag ON when
     * item is obtained.
     */
    unsigned int itemGetTutorialFlagId{ 0 };

    /**
     * @brief Change destination arts parameter ID
     *
     * ID of the destination arts parameter
     */
    int swordArtsParamId{ -1 };

    /**
     * @brief Installation price
     */
    int mountValue{ 0 };

    /**
     * @brief Sale price
     */
    int sellValue{ 0 };

    /**
     * @brief Selling price
     */
    int saleValue{ -1 };

    /**
     * @brief Sort ID
     *
     * Sort ID (-1: Do not collect)
     */
    int sortId{ 0 };

    /**
     * @brief Comptrophy SEQ number
     *
     * SEQ number of complete trophy
     */
    short compTrophySedId{ -1 };

    /**
     * @brief Trophy SEQ number
     */
    short trophySeqId{ -1 };

    /**
     * @brief 0
     *
     * Configurable weapon attribute ID 0
     */
    bool configurableWepAttr00 : 1 { false };

    /**
     * @brief 1
     *
     * Configurable Weapon Attribute ID 1
     */
    bool configurableWepAttr01 : 1 { false };

    /**
     * @brief 2
     *
     * Configurable Weapon Attribute ID 2
     */
    bool configurableWepAttr02 : 1 { false };

    /**
     * @brief 3
     *
     * Configurable Weapon Attribute ID 3
     */
    bool configurableWepAttr03 : 1 { false };

    /**
     * @brief Four
     *
     * Configurable Weapon Attribute ID 4
     */
    bool configurableWepAttr04 : 1 { false };

    /**
     * @brief Five
     *
     * Configurable Weapon Attribute ID 5
     */
    bool configurableWepAttr05 : 1 { false };

    /**
     * @brief 6
     *
     * Configurable Weapon Attribute ID 6
     */
    bool configurableWepAttr06 : 1 { false };

    /**
     * @brief 7
     *
     * Configurable Weapon Attribute ID 7
     */
    bool configurableWepAttr07 : 1 { false };

    /**
     * @brief 8
     *
     * Configurable Weapon Attribute ID 8
     */
    bool configurableWepAttr08 : 1 { false };

    /**
     * @brief 9
     *
     * Configurable Weapon Attribute ID 9
     */
    bool configurableWepAttr09 : 1 { false };

    /**
     * @brief Ten
     *
     * Configurable Weapon Attribute ID 10
     */
    bool configurableWepAttr10 : 1 { false };

    /**
     * @brief 11 11
     *
     * Configurable Weapon Attribute ID 11
     */
    bool configurableWepAttr11 : 1 { false };

    /**
     * @brief 12
     *
     * Configurable Weapon Attribute ID 12
     */
    bool configurableWepAttr12 : 1 { false };

    /**
     * @brief 13
     *
     * Configurable Weapon Attribute ID 13
     */
    bool configurableWepAttr13 : 1 { false };

    /**
     * @brief 14
     *
     * Configurable Weapon Attribute ID 14
     */
    bool configurableWepAttr14 : 1 { false };

    /**
     * @brief 15
     *
     * Configurable Weapon Attribute ID 15
     */
    bool configurableWepAttr15 : 1 { false };

    /**
     * @brief Rarity
     *
     * Rarity used in item acquisition logs
     */
    unsigned char rarity{ 0 };

    /**
     * @brief 16 16
     *
     * Configurable Weapon Attribute ID 16
     */
    bool configurableWepAttr16 : 1 { false };

    /**
     * @brief 17 17
     *
     * Configurable Weapon Attribute ID 17
     */
    bool configurableWepAttr17 : 1 { false };

    /**
     * @brief 18 18
     *
     * Configurable Weapon Attribute ID 18
     */
    bool configurableWepAttr18 : 1 { false };

    /**
     * @brief 19 19
     *
     * Configurable Weapon Attribute ID 19
     */
    bool configurableWepAttr19 : 1 { false };

    /**
     * @brief 20
     *
     * Configurable Weapon Attribute ID 20
     */
    bool configurableWepAttr20 : 1 { false };

    /**
     * @brief twenty one
     *
     * Configurable Weapon Attribute ID 21
     */
    bool configurableWepAttr21 : 1 { false };

    /**
     * @brief twenty two
     *
     * Configurable Weapon Attribute ID 22
     */
    bool configurableWepAttr22 : 1 { false };

    /**
     * @brief twenty three
     *
     * Configurable Weapon Attribute ID 23
     */
    bool configurableWepAttr23 : 1 { false };

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
     * @brief Acquisition dialog display condition
     *
     * Whether to display it in the item acquisition dialog when acquiring an
     * item (not entered: new only)
     */
    unsigned char showDialogCondType : 2 { 2 };

    /**
     * @brief Acquisition log display condition
     *
     * Whether to display in the item acquisition log when acquiring the item
     * (not entered: ○)
     */
    bool showLogCondType : 1 { true };

    unsigned char pad : 1;

    /**
     * @brief Default weapon attribute ID
     *
     * Default weapon attribute ID. Can be installed even with unopened weapon
     * attributes
     */
    unsigned char defaultWepAttr{ 0 };

    /**
     * @brief isSpecialSwordArt
     */
    bool isSpecialSwordArt{ false };

    unsigned char pad2[1];
    /**
     * @brief dagger
     *
     * Can it be attached to "Weapon type: Dagger"? No input becomes x
     */
    bool canMountWep_Dagger : 1 { false };

    /**
     * @brief Straight sword
     *
     * Can it be attached to "Weapon type: Straight sword"? No input becomes x
     */
    bool canMountWep_SwordNormal : 1 { false };

    /**
     * @brief Large sword
     *
     * Can it be attached to "Weapon Type: Large Sword"? No input becomes x
     */
    bool canMountWep_SwordLarge : 1 { false };

    /**
     * @brief Oversized sword
     *
     * Can it be attached to "Weapon Type: Oversized Sword"? No input becomes x
     */
    bool canMountWep_SwordGigantic : 1 { false };

    /**
     * @brief Music sword
     *
     * Can it be attached to "Weapon Type: Curly Sword"? No input becomes x
     */
    bool canMountWep_SaberNormal : 1 { false };

    /**
     * @brief Omagari sword
     *
     * Can it be attached to "Weapon Type: Omagari Sword"? No input becomes x
     */
    bool canMountWep_SaberLarge : 1 { false };

    /**
     * @brief sword
     *
     * Can it be attached to "Weapon type: Sword"? No input becomes x
     */
    bool canMountWep_katana : 1 { false };

    /**
     * @brief Double-edged sword
     *
     * Can it be attached to "Weapon type: Double-edged sword"? No input becomes
     * x
     */
    bool canMountWep_SwordDoubleEdge : 1 { false };

    /**
     * @brief Sword
     *
     * Can it be attached to "Weapon type: Sword"? No input becomes x
     */
    bool canMountWep_SwordPierce : 1 { false };

    /**
     * @brief Large sword
     *
     * Can it be attached to "Weapon Type: Large Sword"? No input becomes x
     */
    bool canMountWep_RapierHeavy : 1 { false };

    /**
     * @brief axe
     *
     * Can it be attached to "Weapon Type: Ax"? No input becomes x
     */
    bool canMountWep_AxeNormal : 1 { false };

    /**
     * @brief Large ax
     *
     * Can it be attached to "Weapon Type: Large Ax"? No input becomes x
     */
    bool canMountWep_AxeLarge : 1 { false };

    /**
     * @brief Hammer
     *
     * Can it be attached to "Weapon type: Hammer"? No input becomes x
     */
    bool canMountWep_HammerNormal : 1 { false };

    /**
     * @brief Gavel
     *
     * Can it be attached to "Weapon Type: Gavel"? No input becomes x
     */
    bool canMountWep_HammerLarge : 1 { false };

    /**
     * @brief Frail
     *
     * Can it be attached to "Weapon Type: Frail"? No input becomes x
     */
    bool canMountWep_Flail : 1 { false };

    /**
     * @brief spear
     *
     * Can it be attached to "Weapon Type: Spear"? No input becomes x
     */
    bool canMountWep_SpearNormal : 1 { false };

    /**
     * @brief Long spear
     *
     * Can it be attached to "Weapon Type: Long Spear"? No input becomes x
     */
    bool canMountWep_SpearLarge : 1 { false };

    /**
     * @brief Large spear
     *
     * Can it be attached to "Weapon Type: Large Spear"? No input becomes x
     */
    bool canMountWep_SpearHeavy : 1 { false };

    /**
     * @brief Halberd
     *
     * Can it be attached to "Weapon Type: Halberd"? No input becomes x
     */
    bool canMountWep_SpearAxe : 1 { false };

    /**
     * @brief Sickle
     *
     * Can it be attached to "Weapon type: Sickle"? No input becomes x
     */
    bool canMountWep_Sickle : 1 { false };

    /**
     * @brief fist
     *
     * Can it be attached to "Weapon type: Fist"? No input becomes x
     */
    bool canMountWep_Knuckle : 1 { false };

    /**
     * @brief nail
     *
     * Can it be attached to "Weapon type: Claw"? No input becomes x
     */
    bool canMountWep_Claw : 1 { false };

    /**
     * @brief Whip
     *
     * Can it be attached to "Weapon type: Whip"? No input becomes x
     */
    bool canMountWep_Whip : 1 { false };

    /**
     * @brief Oversized ax mallet
     *
     * Can it be attached to "Weapon type: Oversized ax mallet"? No input
     * becomes x
     */
    bool canMountWep_AxhammerLarge : 1 { false };

    /**
     * @brief Small bow
     *
     * Can it be attached to "Weapon type: Small bow"? No input becomes x
     */
    bool canMountWep_BowSmall : 1 { false };

    /**
     * @brief bow
     *
     * Can it be attached to "Weapon Type: Bow"? No input becomes x
     */
    bool canMountWep_BowNormal : 1 { false };

    /**
     * @brief Large bow
     *
     * Can it be attached to "Weapon Type: Large Bow"? No input becomes x
     */
    bool canMountWep_BowLarge : 1 { false };

    /**
     * @brief Crossbow
     *
     * Can it be attached to "Weapon Type: Crossbow"? No input becomes x
     */
    bool canMountWep_ClossBow : 1 { false };

    /**
     * @brief Varistor
     *
     * Can it be attached to "Weapon Type: Varistor"? No input becomes x
     */
    bool canMountWep_Ballista : 1 { false };

    /**
     * @brief Wand
     *
     * Can it be attached to "Weapon type: Wand"? No input becomes x
     */
    bool canMountWep_Staff : 1 { false };

    /**
     * @brief tattoo
     *
     * Can it be attached to "Weapon type: Tattoo"? No input becomes x
     */
    bool canMountWep_Sorcery : 1 { false };

    /**
     * @brief Holy mark
     *
     * Can it be attached to "Weapon Type: Holy Mark"? No input becomes x
     */
    bool canMountWep_Talisman : 1 { false };

    /**
     * @brief Small shield
     *
     * Can it be attached to "Weapon Type: Small Shield"? No input becomes x
     */
    bool canMountWep_ShieldSmall : 1 { false };

    /**
     * @brief Middle shield
     *
     * Can it be attached to "Weapon Type: Middle Shield"? No input becomes x
     */
    bool canMountWep_ShieldNormal : 1 { false };

    /**
     * @brief Pavise
     *
     * Can it be attached to "Weapon Type: Large Shield"? No input becomes x
     */
    bool canMountWep_ShieldLarge : 1 { false };

    /**
     * @brief torch
     *
     * Can it be attached to "Weapon type: Torch"? No input becomes x
     */
    bool canMountWep_Torch : 1 { false };

    /**
     * @brief canMountWep_HandToHand
     */
    unsigned char canMountWep_HandToHand : 1 { 0 };

    /**
     * @brief canMountWep_PerfumeBottle
     */
    unsigned char canMountWep_PerfumeBottle : 1 { 0 };

    /**
     * @brief canMountWep_ThrustingShield
     */
    unsigned char canMountWep_ThrustingShield : 1 { 0 };

    /**
     * @brief canMountWep_ThrowingWeapon
     */
    unsigned char canMountWep_ThrowingWeapon : 1 { 0 };

    /**
     * @brief canMountWep_ReverseHandSword
     */
    unsigned char canMountWep_ReverseHandSword : 1 { 0 };

    /**
     * @brief canMountWep_LightGreatsword
     */
    unsigned char canMountWep_LightGreatsword : 1 { 0 };

    /**
     * @brief canMountWep_GreatKatana
     */
    unsigned char canMountWep_GreatKatana : 1 { 0 };

    /**
     * @brief canMountWep_BeastClaw
     */
    unsigned char canMountWep_BeastClaw : 1 { 0 };

    unsigned char reserved_canMountWep_0x3d_4 : 4;

    unsigned char reserved2_canMountWep[2];

    /**
     * @brief Effect text ID 00
     *
     * Effect text ID 00 (Gem_Effect). Magic stone effect text to display in
     * status
     */
    int spEffectMsgId0{ -1 };

    /**
     * @brief Effect text ID 01
     *
     * Effect text ID 01 (Gem_Effect). Magic stone effect text to display in
     * status
     */
    int spEffectMsgId1{ -1 };

    /**
     * @brief Special effect ID00 on attack hit
     *
     * Special effect parameter ID for attack hit
     */
    int spEffectId_forAtk0{ -1 };

    /**
     * @brief Special effect ID01 on attack hit
     *
     * Special effect parameter ID for attack hit
     */
    int spEffectId_forAtk1{ -1 };

    /**
     * @brief Special effect ID02 on attack hit
     *
     * Special effect parameter ID for attack hit
     */
    int spEffectId_forAtk2{ -1 };

    /**
     * @brief Corresponding weapon type overwrite text ID
     *
     * Corresponding Weapon Type Overwrite Text ID (-1: Do not overwrite) [Menu
     * Text]
     */
    int mountWepTextId{ -1 };

    unsigned char pad6[8];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::EQUIP_PARAM_GEM_ST) == 96,
    "EQUIP_PARAM_GEM_ST paramdef size does not match detected size");
