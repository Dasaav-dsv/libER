/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct EQUIP_PARAM_ACCESSORY_ST {
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
     * @brief Call ID
     *
     * ID called from decorations
     */
    int refId{ -1 };

    /**
     * @brief SFX variation ID
     *
     * Specify SFX variation (used to identify SFX in combination with
     * TimeActEditor ID)
     */
    int sfxVariationId{ -1 };

    /**
     * @brief Weight [kg]
     */
    float weight{ 1.f };

    /**
     * @brief Action ID
     *
     * Action ID (= Skill)
     */
    int behaviorId{ 0 };

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
     * @brief sortID
     */
    int sortId{ 0 };

    /**
     * @brief QWCID
     */
    int qwcId{ -1 };

    /**
     * @brief Equipment model number
     */
    unsigned short equipModelId{ 0 };

    /**
     * @brief Icon ID
     *
     * Menu icon ID
     */
    unsigned short iconId{ 0 };

    /**
     * @brief Shop level
     *
     * Level that can be sold at the store
     */
    short shopLv{ 0 };

    /**
     * @brief Trophy
     */
    short trophySGradeId{ -1 };

    /**
     * @brief Trophy SEQ number
     */
    short trophySeqId{ -1 };

    /**
     * @brief Equipment model type
     */
    unsigned char equipModelCategory{ 0 };

    /**
     * @brief Equipment model gender
     *
     * Gender of equipment model
     */
    unsigned char equipModelGender{ 0 };

    /**
     * @brief Decoration category
     *
     * Armor category
     */
    unsigned char accessoryCategory{ 0 };

    /**
     * @brief ID category
     *
     * ↓ ID category [Attack, Projectile, Special]
     */
    unsigned char refCategory{ 0 };

    /**
     * @brief Special effects category
     *
     * Since there are effects (enchantment weapons, etc.) whose parameters
     fluctuate depending on skills, magic, items, etc., set each action so that
     the determined effect can correspond to the effect such as "power up only
     weapon attack". Set "None" for items that do not need to be set, such as
     varistor.

    */
    unsigned char spEffectCategory{ 0 };

    /**
     * @brief Sort item type ID
     *
     * Sort item type ID. In the sort "Item type order", the same ID is
     * displayed together as the same group.
     */
    unsigned char sortGroupId{ 255 };

    /**
     * @brief Item lottery ID_for map at the time of vagrant
     *
     * -1: No vagrant 0: No lottery 1 ~: With lottery
     */
    int vagrantItemLotId{ 0 };

    /**
     * @brief Vagrant Bonus Enemy Drop Item Lottery ID_Map
     *
     * -1: No drop 0: No lottery 1 ~: With lottery
     */
    int vagrantBonusEneDropItemLotId{ 0 };

    /**
     * @brief Vagrant item Enemy drop item Lottery ID_for map
     *
     * -1: No drop 0: No lottery 1 ~: With lottery
     */
    int vagrantItemEneDropItemLotId{ 0 };

    /**
     * @brief Can i deposit
     *
     * Can you deposit it in the warehouse?
     */
    bool isDeposit : 1 { false };

    /**
     * @brief Will it break if removed?
     *
     * Will it break when equipped and removed?
     */
    bool isEquipOutBrake : 1 { false };

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
     * @brief Acquisition dialog display condition
     *
     * Whether to display it in the item acquisition dialog when acquiring an
     * item (not entered: new only)
     */
    unsigned char showDialogCondType : 2 { 2 };

    /**
     * @brief Rarity
     *
     * Rarity used in item acquisition logs
     */
    unsigned char rarity{ 0 };

    unsigned char pad2[2];

    /**
     * @brief Selling price
     */
    int saleValue{ -1 };

    /**
     * @brief Wearing group ID
     *
     * Items of the same group cannot be equipped at the same time
     */
    short accessoryGroup{ -1 };

    unsigned char pad3[1];

    /**
     * @brief Comptrophy SEQ number
     *
     * SEQ number of complete trophy
     */
    signed char compTrophySedId{ -1 };

    /**
     * @brief Resident special effect ID1
     */
    int residentSpEffectId1{ 0 };

    /**
     * @brief Resident special effect ID2
     */
    int residentSpEffectId2{ 0 };

    /**
     * @brief Resident special effect ID3
     */
    int residentSpEffectId3{ 0 };

    /**
     * @brief Resident special effect ID4
     */
    int residentSpEffectId4{ 0 };

    unsigned char pad1[4];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::EQUIP_PARAM_ACCESSORY_ST) == 96,
    "EQUIP_PARAM_ACCESSORY_ST paramdef size does not match detected size");
