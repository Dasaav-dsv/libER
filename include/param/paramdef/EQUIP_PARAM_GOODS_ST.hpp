/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 *
 */
struct EQUIP_PARAM_GOODS_ST {
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
     * @brief Call ID 0 (default)
     *
     * ID0 called from the item (default)
     */
    int refId_default{ -1 };

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
     * @brief Action ID
     *
     * Set the effect that occurs when using a tool
     */
    int behaviorId{ 0 };

    /**
     * @brief Replacement item ID
     *
     * Item ID when replacing
     */
    int replaceItemId{ -1 };

    /**
     * @brief Sort ID
     *
     * Sort ID (-1: Do not collect)
     */
    int sortId{ 0 };

    /**
     * @brief Display replacement destination item ID
     *
     * Conditionally replace the display with another tool ID. The tool ID on
     * the game data side does not change
     */
    int appearanceReplaceItemId{ -1 };

    /**
     * @brief YES / NO message ID
     *
     * YesNo Message ID used when displaying the dialog
     */
    int yesNoDialogMessageId{ -1 };

    /**
     * @brief Usable condition_state change type
     *
     * Allow to use only when the special effect of the set state change type is
     * applied
     */
    unsigned short useEnableSpEffectType{ 0 };

    /**
     * @brief Vase group ID
     *
     * "Consumable items" for which 0 or more is set for the pot group ID can be
     * possessed by the number of "pots" with the same pot group ID.
     */
    signed char potGroupId{ -1 };

    unsigned char pad[1];

    /**
     * @brief Icon ID
     *
     * Menu icon ID
     */
    unsigned short iconId{ 0 };

    /**
     * @brief Model ID
     */
    unsigned short modelId{ 0 };

    /**
     * @brief Shop level
     *
     * Level that can be sold at the store
     */
    short shopLv{ 0 };

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
     * @brief Maximum number of possessions
     */
    short maxNum{ 0 };

    /**
     * @brief Consumer nature
     */
    unsigned char consumeHeroPoint{ 0 };

    /**
     * @brief Skill over start value
     */
    unsigned char overDexterity{ 0 };

    /**
     * @brief Tool type
     *
     * Types of tools
     */
    unsigned char goodsType{ 0 };

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

    unsigned char unknown_0x40{ 0 };

    /**
     * @brief Animation when using tools
     *
     * Set the animation to play when using the tool
     */
    unsigned char goodsUseAnim{ 0 };

    /**
     * @brief Do you want to open the menu
     *
     * Menu type that opens when using an item
     */
    unsigned char opmeMenuType{ 0 };

    /**
     * @brief Prohibition conditions_Special effects category
     *
     * Specified to control whether it can be used by the special effect applied
     */
    unsigned char useLimitCategory{ 0 };

    /**
     * @brief Replacement category
     *
     * Condition category to add to call ID
     */
    unsigned char replaceCategory{ 0 };

    unsigned char reserve4[2];

    /**
     * @brief Can be used alive
     *
     * Is it possible to use a surviving player?
     */
    bool enable_live : 1 { false };

    /**
     * @brief Gray available
     *
     * Can Gray Ghost be used?
     */
    bool enable_gray : 1 { false };

    /**
     * @brief White can be used
     *
     * Can white ghost be used?
     */
    bool enable_white : 1 { false };

    /**
     * @brief Black can be used
     *
     * Is it possible to do a black ghost?
     */
    bool enable_black : 1 { false };

    /**
     * @brief Multiplayer possible
     *
     * Can it be used during multiplayer?
     */
    bool enable_multi : 1 { false };

    /**
     * @brief Not available offline
     *
     * Is it unavailable while offline?
     */
    bool disable_offline : 1 { false };

    /**
     * @brief Can be equipped
     *
     * Whether it can be equipped
     */
    bool isEquip : 1 { false };

    /**
     * @brief Is it a consumable item?
     *
     * Will it be consumed when used (whether the number of possessions will
     * decrease)
     */
    bool isConsume : 1 { false };

    /**
     * @brief Is it automatically equipped?
     *
     * Will it be equipped automatically when picked up?
     */
    bool isAutoEquip : 1 { false };

    /**
     * @brief Is it a stationary item?
     */
    bool isEstablishment : 1 { false };

    /**
     * @brief Can i have only one
     *
     * Is it an item that you can only have one?
     */
    bool isOnlyOne : 1 { false };

    /**
     * @brief Can you throw it away
     *
     * Can you throw away the item? TRUE = thrown away
     */
    bool isDiscard : 1 { false };

    /**
     * @brief Can you deposit
     *
     * Can you leave it in the warehouse?
     */
    bool isDeposit : 1 { false };

    /**
     * @brief Can I use it with my right bare hand?
     *
     * Can't be used when the right-handed weapon is bare-handed?
     */
    bool isDisableHand : 1 { false };

    /**
     * @brief Whether to delete at the time of lap
     */
    bool isRemoveItem_forGameClear : 1 { false };

    /**
     * @brief Is it a replenishment item?
     *
     * Used to determine replenishable items
     */
    bool isSuppleItem : 1 { false };

    /**
     * @brief Is it a replenished item?
     *
     * Used to determine replenished items
     */
    bool isFullSuppleItem : 1 { false };

    /**
     * @brief Do you want to enchant?
     *
     * Do you want to enchant your weapon?
     */
    bool isEnhance : 1 { false };

    /**
     * @brief Is it a repair item?
     *
     * Is it an item to repair?
     */
    bool isFixItem : 1 { false };

    /**
     * @brief Is multi-drop sharing prohibited?
     */
    bool disableMultiDropShare : 1 { false };

    /**
     * @brief Is it prohibited to use in the arena?
     */
    bool disableUseAtColiseum : 1 { false };

    /**
     * @brief Is it prohibited to use outside the arena?
     */
    bool disableUseAtOutOfColiseum : 1 { false };

    /**
     * @brief Is it possible to cancel early?
     */
    bool isEnableFastUseItem : 1 { false };

    /**
     * @brief Does it reflect special effects?
     *
     * Whether to reflect special effects (such as ability value correction)
     */
    bool isApplySpecialEffect : 1 { false };

    /**
     * @brief ID that synchronizes the number increase / decrease
     *
     * When the number of items is changed, the items with the same ID will be
     * changed at the same time. 0: Not synchronized
     */
    unsigned char syncNumVaryId{ 0 };

    /**
     * @brief Call ID1
     *
     * ID1 called from the item
     */
    int refId_1{ -1 };

    /**
     * @brief Reference Virtual Weapon ID
     *
     * Weapon ID to refer to when using the tool
     */
    int refVirtualWepId{ -1 };

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
     * @brief Handheld SFXID
     *
     * SFXID until the effect is activated when you try to use the item
     */
    int castSfxId{ -1 };

    /**
     * @brief Activate SFXID
     *
     * SFX ID when the item is activated
     */
    int fireSfxId{ -1 };

    /**
     * @brief Effect SFXID
     *
     * After the item is activated, the SFX ID in effect
     */
    int effectSfxId{ -1 };

    /**
     * @brief Can be used while the Great Rune is active
     *
     * Can it be used with a large rune activated?
     */
    bool enable_ActiveBigRune : 1 { false };

    /**
     * @brief Is it a bonfire warp item?
     *
     * If the state change type "Warp Prohibition" is applied when TRUE, remove
     * the function to disable the item.
     */
    bool isBonfireWarpItem : 1 { false };

    /**
     * @brief Can it be used in a ladder?
     *
     * Check here for items available in the ladder
     */
    bool enable_Ladder : 1 { false };

    /**
     * @brief Preparing for multiplayer
     *
     * Whether items can be used between session probability and initial
     * synchronization
     */
    bool isUseMultiPlayPreparation : 1 { false };

    /**
     * @brief Can it be used together?
     */
    bool canMultiUse : 1 { false };

    /**
     * @brief Is it a shield enchantment?
     */
    bool isShieldEnchant : 1 { false };

    /**
     * @brief Is it subject to warp prohibition?
     *
     * When this is TRUE, disable the item if the state change type "Warp
     * Prohibition" is applied.
     */
    bool isWarpProhibited : 1 { false };

    /**
     * @brief Only available when there is a disconnect penalty
     *
     * A flag that allows you to determine if an item is only available when a
     * client disconnect penalty is incurred.
     */
    bool isUseMultiPenaltyOnly : 1 { false };

    /**
     * @brief Replenishment type
     *
     * Replenishment item / Replenishment type when replenishing a replenished
     * item.
     */
    unsigned char suppleType{ 0 };

    /**
     * @brief Automatic replenishment type
     *
     * Controls whether or not to automatically replenish and default settings
     */
    unsigned char autoReplenishType{ 0 };

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
     * @brief Is it a horse call item?
     *
     * Is it an item that summons a horse? Cannot be used if the horse died or
     * the PC is in a horse-prohibited area
     */
    bool isSummonHorse : 1 { false };

    /**
     * @brief Acquisition dialog display condition
     *
     * Whether to display it in the item acquisition dialog when acquiring an
     * item (not entered: new only)
     */
    unsigned char showDialogCondType : 2 { 2 };

    /**
     * @brief Is it a Nemuri collection item?
     */
    bool isSleepCollectionItem : 1 { false };

    /**
     * @brief Can it be used while riding?
     */
    bool enableRiding : 1 { false };

    /**
     * @brief Is it prohibited to use while not riding?
     */
    bool disableRiding : 1 { false };

    /**
     * @brief Number of warehouses
     */
    short maxRepositoryNum{ 0 };

    /**
     * @brief Sort item type ID
     *
     * Sort item type ID. In the sort "Item type order", the same ID is
     * displayed together as the same group.
     */
    unsigned char sortGroupId{ 255 };

    /**
     * @brief Can it be used in an attack-prohibited area?
     */
    bool isUseNoAttackRegion : 1 { true };

    unsigned char unknown_0x73_1 : 1 { 0 };

    unsigned char unknown_0x73_2 : 1 { 0 };

    unsigned char pad1 : 5;

    /**
     * @brief Selling price
     */
    int saleValue{ -1 };

    /**
     * @brief Rarity
     *
     * Rarity used in item acquisition logs
     */
    unsigned char rarity{ 0 };

    /**
     * @brief Is it a buddy item?
     *
     * Whether there are item usage restrictions for buddy items
     */
    unsigned char useLimitSummonBuddy{ 0 };

    /**
     * @brief Use prohibition condition_state change type
     *
     * Specified to control whether it can be used depending on the state change
     * type of the special effect applied
     */
    unsigned short useLimitSpEffectType{ 0 };

    /**
     * @brief AI usage judgment ID
     */
    int aiUseJudgeId{ -1 };

    /**
     * @brief MP consumption
     */
    short consumeMP{ 0 };

    /**
     * @brief HP consumed
     */
    short consumeHP{ -1 };

    /**
     * @brief Strengthening tool ID
     */
    int reinforceGoodsId{ -1 };

    /**
     * @brief Material ID at the time of strengthening
     */
    int reinforceMaterialId{ -1 };

    /**
     * @brief Enhanced price
     */
    int reinforcePrice{ 0 };

    /**
     * @brief Pledge 0 usage level
     */
    signed char useLevel_vowType0{ 0 };

    /**
     * @brief Pledge 1 usage level
     */
    signed char useLevel_vowType1{ 0 };

    /**
     * @brief Pledge 2 usage level
     */
    signed char useLevel_vowType2{ 0 };

    /**
     * @brief Pledge 3 usage level
     */
    signed char useLevel_vowType3{ 0 };

    /**
     * @brief Pledge 4 usage level
     */
    signed char useLevel_vowType4{ 0 };

    /**
     * @brief Pledge 5 usage level
     */
    signed char useLevel_vowType5{ 0 };

    /**
     * @brief Pledge 6 usage level
     */
    signed char useLevel_vowType6{ 0 };

    /**
     * @brief Pledge 7 usage level
     */
    signed char useLevel_vowType7{ 0 };

    /**
     * @brief Pledge 8 usage level
     */
    signed char useLevel_vowType8{ 0 };

    /**
     * @brief Pledge 9 usage level
     */
    signed char useLevel_vowType9{ 0 };

    /**
     * @brief Pledge 10 usage level
     */
    signed char useLevel_vowType10{ 0 };

    /**
     * @brief Pledge 11 usage level
     */
    signed char useLevel_vowType11{ 0 };

    /**
     * @brief Pledge 12 usage level
     */
    signed char useLevel_vowType12{ 0 };

    /**
     * @brief Pledge 13 usage level
     */
    signed char useLevel_vowType13{ 0 };

    /**
     * @brief Pledge 14 usage level
     */
    signed char useLevel_vowType14{ 0 };

    /**
     * @brief Pledge 15 usage level
     */
    signed char useLevel_vowType15{ 0 };

    /**
     * @brief Appropriate level of use
     */
    unsigned short useLevel{ 0 };

    unsigned char reserve5[2];

    /**
     * @brief Item acquisition tutorial Judgment flag ID
     *
     * Event flag ID for the tutorial when you first get the item. Flag ON when
     * item is obtained.
     */
    unsigned int itemGetTutorialFlagId{ 0 };

    unsigned char reserve3[8];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::EQUIP_PARAM_GOODS_ST) == 176,
    "EQUIP_PARAM_GOODS_ST paramdef size does not match detected size");
