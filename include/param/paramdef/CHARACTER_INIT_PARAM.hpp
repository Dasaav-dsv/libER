/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct CHARACTER_INIT_PARAM {
    /**
     * @brief MP recovery speed basic value [s]
     *
     * Time until MP recovers 1 point (first decimal place)
     */
    float baseRec_mp{ 0.f };

    /**
     * @brief Stamina recovery speed basic value [s]
     *
     * Time to recover 1 point of stamina (first decimal place)
     */
    float baseRec_sp{ 0.f };

    /**
     * @brief Fall damage reduction correction [%]
     *
     * Damage reduction amount (%) that can be a cushion when scolded by another
     * character from above (first decimal place)
     */
    float red_Falldam{ 0.f };

    /**
     * @brief Early soul
     *
     * The amount of soul you have at the beginning
     */
    int soul{ 0 };

    /**
     * @brief Right-handed weapon slot 1
     *
     * Weapon ID of equipment parameter (right hand slot 1)
     */
    int equip_Wep_Right{ -1 };

    /**
     * @brief Right-handed weapon slot 2
     *
     * Weapon ID of equipment parameter (right hand slot 2)
     */
    int equip_Subwep_Right{ -1 };

    /**
     * @brief Left-handed weapon slot 1
     *
     * Weapon ID of equipment parameter (left hand slot 1)
     */
    int equip_Wep_Left{ -1 };

    /**
     * @brief Left-handed weapon slot 2
     *
     * Weapon ID of equipment parameter (left hand slot 2)
     */
    int equip_Subwep_Left{ -1 };

    /**
     * @brief Head armor
     *
     * Equipment parameter armor ID (head armor)
     */
    int equip_Helm{ -1 };

    /**
     * @brief Torso armor
     *
     * Equipment parameter armor ID (torso armor)
     */
    int equip_Armer{ -1 };

    /**
     * @brief Arm armor
     *
     * Equipment parameter armor ID (arm armor)
     */
    int equip_Gaunt{ -1 };

    /**
     * @brief Leg armor
     *
     * Equipment parameter armor ID (leg armor)
     */
    int equip_Leg{ -1 };

    /**
     * @brief arrow
     *
     * Weapon ID (arrow) of equipment parameter
     */
    int equip_Arrow{ -1 };

    /**
     * @brief bolt
     *
     * Weapon ID (bolt) of equipment parameter
     */
    int equip_Bolt{ -1 };

    /**
     * @brief Spare arrow
     *
     * Weapon ID of equipment parameter (arrow reserve)
     */
    int equip_SubArrow{ -1 };

    /**
     * @brief Spare bolt
     *
     * Weapon ID of equipment parameter (spare bolt)
     */
    int equip_SubBolt{ -1 };

    /**
     * @brief Ornaments 1
     *
     * Equipment parameter decoration ID01
     */
    int equip_Accessory01{ -1 };

    /**
     * @brief Ornament 2
     *
     * Equipment parameter decoration ID02
     */
    int equip_Accessory02{ -1 };

    /**
     * @brief Ornaments 3
     *
     * Equipment parameter decoration ID03
     */
    int equip_Accessory03{ -1 };

    /**
     * @brief Ornament 4
     *
     * Equipment parameter decoration ID04
     */
    int equip_Accessory04{ -1 };

	unsigned char unknown_0x50 { 0 };

	unsigned char unknown_0x51 { 0 };

	unsigned char pad8[2];

    /**
     * @brief Material ID1 for Elixir
     */
    int elixir_material00{ -1 };

    /**
     * @brief Material ID2 for Elixir
     */
    int elixir_material01{ -1 };

    /**
     * @brief Material ID3 for Elixir
     */
    int elixir_material02{ -1 };

    /**
     * @brief Magic / miracle 1
     *
     * Initial placement magic / miracle ID01
     */
    int equip_Spell_01{ -1 };

    /**
     * @brief Magic / miracle 2
     *
     * Initial placement magic / miracle ID02
     */
    int equip_Spell_02{ -1 };

    /**
     * @brief Magic / miracle 3
     *
     * Initial placement magic / miracle ID03
     */
    int equip_Spell_03{ -1 };

    /**
     * @brief Magic / miracle 4
     *
     * Initial placement magic / miracle ID04
     */
    int equip_Spell_04{ -1 };

    /**
     * @brief Magic / miracle 5
     *
     * Initial placement magic / miracle ID05
     */
    int equip_Spell_05{ -1 };

    /**
     * @brief Magic / miracle 6
     *
     * Initial placement magic / miracle ID06
     */
    int equip_Spell_06{ -1 };

    /**
     * @brief Magic / miracle 7
     *
     * Initial placement magic / miracle ID07
     */
    int equip_Spell_07{ -1 };

    /**
     * @brief Item 01
     *
     * Initial possession item ID 01
     */
    int item_01{ -1 };

    /**
     * @brief Item 02
     *
     * Initial possession item ID 02
     */
    int item_02{ -1 };

    /**
     * @brief Item 03
     *
     * Initial possession item ID 03
     */
    int item_03{ -1 };

    /**
     * @brief Item 04
     *
     * Initial possession item ID 04
     */
    int item_04{ -1 };

    /**
     * @brief Item 05
     *
     * Initial possession item ID 05
     */
    int item_05{ -1 };

    /**
     * @brief Item 06
     *
     * Initial possession item ID 06
     */
    int item_06{ -1 };

    /**
     * @brief Item 07
     *
     * Initial possession item ID 07
     */
    int item_07{ -1 };

    /**
     * @brief Item 08
     *
     * Initial possession item ID 08
     */
    int item_08{ -1 };

    /**
     * @brief Item 09
     *
     * Initial possession item ID 09
     */
    int item_09{ -1 };

    /**
     * @brief Item 10
     *
     * Initial possession item ID 10
     */
    int item_10{ -1 };

    /**
     * @brief Facegen Parameter ID
     *
     * Facegen parameter ID used by NPC players. Not used by normal players.
     */
    int npcPlayerFaceGenId{ 0 };

    /**
     * @brief NPC player thinking ID
     *
     * NPC Thinking Parameter ID used by NPC players. Not used by normal
     * players.
     */
    int npcPlayerThinkId{ 0 };

    /**
     * @brief HP basic value
     *
     * Basic value of HP (actually, it is corrected by the calculation formula)
     */
    unsigned short baseHp{ 0 };

    /**
     * @brief MP basic value
     *
     * Basic value of MP (actually, it is corrected by the calculation formula)
     */
    unsigned short baseMp{ 0 };

    /**
     * @brief Stamina base value
     *
     * Basic value of stamina (actually, it is corrected by the formula)
     */
    unsigned short baseSp{ 0 };

    /**
     * @brief Number of arrows possessed
     *
     * Initial number of arrows
     */
    unsigned short arrowNum{ 0 };

    /**
     * @brief Number of bolts
     *
     * Initial number of bolts
     */
    unsigned short boltNum{ 0 };

    /**
     * @brief Number of spare arrows possessed
     *
     * Initial number of arrows
     */
    unsigned short subArrowNum{ 0 };

    /**
     * @brief Number of spare bolts
     *
     * Initial number of bolts
     */
    unsigned short subBoltNum{ 0 };

    unsigned char pad4[6];

    /**
     * @brief Soul Lv
     *
     * Initial Lv
     */
    short soulLv{ 0 };

    /**
     * @brief Physical fitness
     *
     * Basic value of physical fitness
     */
    unsigned char baseVit{ 0 };

    /**
     * @brief spirit
     *
     * Basic value of spirit
     */
    unsigned char baseWil{ 0 };

    /**
     * @brief Robust
     *
     * Robust base value
     */
    unsigned char baseEnd{ 0 };

    /**
     * @brief Strength
     *
     * Basic value of muscle strength
     */
    unsigned char baseStr{ 0 };

    /**
     * @brief Agility
     *
     * Basic value of agility
     */
    unsigned char baseDex{ 0 };

    /**
     * @brief Magical power
     *
     * Basic value of magic power
     */
    unsigned char baseMag{ 0 };

    /**
     * @brief faith
     *
     * Basic value of faith
     */
    unsigned char baseFai{ 0 };

    /**
     * @brief luck
     *
     * Basic value of luck
     */
    unsigned char baseLuc{ 0 };

    /**
     * @brief Human nature
     *
     * Basic value of human nature
     */
    unsigned char baseHeroPoint{ 0 };

    /**
     * @brief Endurance
     *
     * Basic value of endurance
     */
    unsigned char baseDurability{ 0 };

    /**
     * @brief Number of possession of item 01
     *
     * Initial possession number of items 01
     */
    unsigned char itemNum_01{ 0 };

    /**
     * @brief Number of possession of item 02
     *
     * Initial possession number of items 02
     */
    unsigned char itemNum_02{ 0 };

    /**
     * @brief Number of items 03
     *
     * Initial possession number of items 03
     */
    unsigned char itemNum_03{ 0 };

    /**
     * @brief Item quantity 04
     *
     * Initial possession number of items 04
     */
    unsigned char itemNum_04{ 0 };

    /**
     * @brief Item quantity 05
     *
     * Initial possession number of items 05
     */
    unsigned char itemNum_05{ 0 };

    /**
     * @brief Item quantity 06
     *
     * Initial possession number of items 06
     */
    unsigned char itemNum_06{ 0 };

    /**
     * @brief Item quantity 07
     *
     * Initial possession number of items 07
     */
    unsigned char itemNum_07{ 0 };

    /**
     * @brief Item quantity 08
     *
     * Initial possession number of items 08
     */
    unsigned char itemNum_08{ 0 };

    /**
     * @brief Item quantity 09
     *
     * Initial possession number of items 09
     */
    unsigned char itemNum_09{ 0 };

    /**
     * @brief Item quantity 10
     *
     * Initial possession number of items 10
     */
    unsigned char itemNum_10{ 0 };

    unsigned char pad5[5];

    /**
     * @brief Gesture ID 0
     *
     * Gesture 0th (0 if you want to play EzState gesture 0)
     */
    signed char gestureId0{ -1 };

    /**
     * @brief Gesture ID1
     *
     * Gesture 1st (0 if you want to play EzState gesture 0)
     */
    signed char gestureId1{ -1 };

    /**
     * @brief Gesture ID 2
     *
     * Gesture 2nd (0 if you want to play EzState's gesture 0)
     */
    signed char gestureId2{ -1 };

    /**
     * @brief Gesture ID 3
     *
     * Gesture 3rd (0 if you want to play EzState gesture 0)
     */
    signed char gestureId3{ -1 };

    /**
     * @brief Gesture ID 4
     *
     * Gesture 4th (0 if you want to play EzState's gesture 0)
     */
    signed char gestureId4{ -1 };

    /**
     * @brief Gesture ID 5
     *
     * Gesture 5th (0 if you want to play EzState gesture 0)
     */
    signed char gestureId5{ -1 };

    /**
     * @brief Gesture ID 6
     *
     * Gesture 6th (0 if you want to play EzState gesture 0)
     */
    signed char gestureId6{ -1 };

    /**
     * @brief NPC type of NPC player
     *
     * NPC type used by NPC players. Not used by normal players.
     */
    unsigned char npcPlayerType{ 0 };

    /**
     * @brief NPC player drawing type
     *
     * Drawing type used by NPC players. Not used by normal players.
     */
    signed char npcPlayerDrawType{ 0 };

    /**
     * @brief Gender of NPC players
     *
     * The gender used by NPC players. It is not reflected to normal players.
     */
    unsigned char npcPlayerSex{ 0 };

    /**
     * @brief Pledge
     *
     * Pledge type (None: 0)
     */
    unsigned char vowType : 4 { 0 };

    /**
     * @brief Is it a transmission / reception target?
     *
     * Is it a send / receive target (for copy NPCs)?
     */
    bool isSyncTarget : 1 { false };

    unsigned char pad : 3;

    unsigned char pad6[2];

    /**
     * @brief Right-handed weapon slot 1 equipment type
     *
     * Right-handed weapon slot 1 parameter reference
     */
    unsigned char wepParamType_Right1{ 0 };

    /**
     * @brief Right-handed weapon slot 2 equipment type
     *
     * Right-handed weapon slot 2 parameter reference
     */
    unsigned char wepParamType_Right2{ 0 };

    /**
     * @brief Right-handed weapon slot 3 equipment type
     *
     * Right-handed weapon slot 3 parameter reference
     */
    unsigned char wepParamType_Right3{ 0 };

    /**
     * @brief Left-handed weapon slot 1 equipment type
     *
     * Parameter reference for left-handed weapon slot 1
     */
    unsigned char wepParamType_Left1{ 0 };

    /**
     * @brief Left-handed weapon slot 2 equipment type
     *
     * Parameter reference for left-handed weapon slot 2
     */
    unsigned char wepParamType_Left2{ 0 };

    /**
     * @brief Left-handed weapon slot 3 equipment type
     *
     * Parameter reference for left-handed weapon slot 3
     */
    unsigned char wepParamType_Left3{ 0 };

    unsigned char pad2[26];

    /**
     * @brief Right-handed weapon slot 3
     *
     * Weapon ID of equipment parameter (right hand slot 3)
     */
    int equip_Subwep_Right3{ -1 };

    /**
     * @brief Left-handed weapon slot 3
     *
     * Weapon ID of equipment parameter (left hand slot 3)
     */
    int equip_Subwep_Left3{ -1 };

    unsigned char pad3[4];

    /**
     * @brief Second item 01
     *
     * Item ID 01 of the second shortcut initial possession
     */
    int secondaryItem_01{ -1 };

    /**
     * @brief Second item 02
     *
     * Item ID 02 of the second shortcut initial possession
     */
    int secondaryItem_02{ -1 };

    /**
     * @brief Second item 03
     *
     * Item ID 03 of the second shortcut initial possession
     */
    int secondaryItem_03{ -1 };

    /**
     * @brief Second item 04
     *
     * Item ID 04 of the second shortcut initial possession
     */
    int secondaryItem_04{ -1 };

    /**
     * @brief Second item 05
     *
     * Item ID 05 of the second shortcut initial possession
     */
    int secondaryItem_05{ -1 };

    /**
     * @brief Second item 06
     *
     * Item ID 06 of the second shortcut initial possession
     */
    int secondaryItem_06{ -1 };

    /**
     * @brief Number of possessions of the second item 01
     *
     * 2nd Shortcut Initial possession number of items 01
     */
    unsigned char secondaryItemNum_01{ 0 };

    /**
     * @brief Number of possessions of the second item 02
     *
     * 2nd Shortcut Initial possession number of items 02
     */
    unsigned char secondaryItemNum_02{ 0 };

    /**
     * @brief Number of possessions of the second item 03
     *
     * 2nd Shortcut Initial possession number of items 03
     */
    unsigned char secondaryItemNum_03{ 0 };

    /**
     * @brief Number of possessions of the second item 04
     *
     * 2nd Shortcut Initial possession number of items 04
     */
    unsigned char secondaryItemNum_04{ 0 };

    /**
     * @brief Number of possessions of the second item 05
     *
     * 2nd Shortcut Initial possession number of items 05
     */
    unsigned char secondaryItemNum_05{ 0 };

    /**
     * @brief Number of possessions of the second item 06
     *
     * 2nd Shortcut Initial possession number of items 06
     */
    unsigned char secondaryItemNum_06{ 0 };

    /**
     * @brief HP Est Bottle Possession Limit
     */
    signed char HpEstMax{ -1 };

    /**
     * @brief MP Est Bottle Possession Limit
     */
    signed char MpEstMax{ -1 };

    unsigned char pad7[5];

    /**
     * @brief Voice type
     */
    unsigned char voiceType{ 0 };

    unsigned char reserve[6];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::CHARACTER_INIT_PARAM) == 320,
    "CHARACTER_INIT_PARAM paramdef size does not match detected size");
