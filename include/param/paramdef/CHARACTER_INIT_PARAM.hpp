/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct CHARACTER_INIT_PARAM {
    float baseRec_mp{ 0 };
    float baseRec_sp{ 0 };
    float red_Falldam{ 0 };
    int soul{ 0 };
    int equip_Wep_Right{ -1 };
    int equip_Subwep_Right{ -1 };
    int equip_Wep_Left{ -1 };
    int equip_Subwep_Left{ -1 };
    int equip_Helm{ -1 };
    int equip_Armer{ -1 };
    int equip_Gaunt{ -1 };
    int equip_Leg{ -1 };
    int equip_Arrow{ -1 };
    int equip_Bolt{ -1 };
    int equip_SubArrow{ -1 };
    int equip_SubBolt{ -1 };
    int equip_Accessory01{ -1 };
    int equip_Accessory02{ -1 };
    int equip_Accessory03{ -1 };
    int equip_Accessory04{ -1 };
    unsigned char pad8[4];
    int elixir_material00{ -1 };
    int elixir_material01{ -1 };
    int elixir_material02{ -1 };
    int equip_Spell_01{ -1 };
    int equip_Spell_02{ -1 };
    int equip_Spell_03{ -1 };
    int equip_Spell_04{ -1 };
    int equip_Spell_05{ -1 };
    int equip_Spell_06{ -1 };
    int equip_Spell_07{ -1 };
    int item_01{ -1 };
    int item_02{ -1 };
    int item_03{ -1 };
    int item_04{ -1 };
    int item_05{ -1 };
    int item_06{ -1 };
    int item_07{ -1 };
    int item_08{ -1 };
    int item_09{ -1 };
    int item_10{ -1 };
    int npcPlayerFaceGenId{ 0 };
    int npcPlayerThinkId{ 0 };
    unsigned short baseHp{ 0 };
    unsigned short baseMp{ 0 };
    unsigned short baseSp{ 0 };
    unsigned short arrowNum{ 0 };
    unsigned short boltNum{ 0 };
    unsigned short subArrowNum{ 0 };
    unsigned short subBoltNum{ 0 };
    unsigned char pad4[6];
    short soulLv{ 0 };
    unsigned char baseVit{ 0 };
    unsigned char baseWil{ 0 };
    unsigned char baseEnd{ 0 };
    unsigned char baseStr{ 0 };
    unsigned char baseDex{ 0 };
    unsigned char baseMag{ 0 };
    unsigned char baseFai{ 0 };
    unsigned char baseLuc{ 0 };
    unsigned char baseHeroPoint{ 0 };
    unsigned char baseDurability{ 0 };
    unsigned char itemNum_01{ 0 };
    unsigned char itemNum_02{ 0 };
    unsigned char itemNum_03{ 0 };
    unsigned char itemNum_04{ 0 };
    unsigned char itemNum_05{ 0 };
    unsigned char itemNum_06{ 0 };
    unsigned char itemNum_07{ 0 };
    unsigned char itemNum_08{ 0 };
    unsigned char itemNum_09{ 0 };
    unsigned char itemNum_10{ 0 };
    unsigned char pad5[5];
    signed char gestureId0{ -1 };
    signed char gestureId1{ -1 };
    signed char gestureId2{ -1 };
    signed char gestureId3{ -1 };
    signed char gestureId4{ -1 };
    signed char gestureId5{ -1 };
    signed char gestureId6{ -1 };
    unsigned char npcPlayerType{ 0 };
    signed char npcPlayerDrawType{ 0 };
    unsigned char npcPlayerSex{ 0 };
    unsigned char vowType : 4 { 0 };
    bool isSyncTarget : 1 { false };
    unsigned char pad : 3;
    unsigned char pad6[2];
    unsigned char wepParamType_Right1{ 0 };
    unsigned char wepParamType_Right2{ 0 };
    unsigned char wepParamType_Right3{ 0 };
    unsigned char wepParamType_Left1{ 0 };
    unsigned char wepParamType_Left2{ 0 };
    unsigned char wepParamType_Left3{ 0 };
    unsigned char pad2[26];
    int equip_Subwep_Right3{ -1 };
    int equip_Subwep_Left3{ -1 };
    unsigned char pad3[4];
    int secondaryItem_01{ -1 };
    int secondaryItem_02{ -1 };
    int secondaryItem_03{ -1 };
    int secondaryItem_04{ -1 };
    int secondaryItem_05{ -1 };
    int secondaryItem_06{ -1 };
    unsigned char secondaryItemNum_01{ 0 };
    unsigned char secondaryItemNum_02{ 0 };
    unsigned char secondaryItemNum_03{ 0 };
    unsigned char secondaryItemNum_04{ 0 };
    unsigned char secondaryItemNum_05{ 0 };
    unsigned char secondaryItemNum_06{ 0 };
    signed char HpEstMax{ -1 };
    signed char MpEstMax{ -1 };
    unsigned char pad7[5];
    unsigned char voiceType{ 0 };
    unsigned char reserve[6];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::CHARACTER_INIT_PARAM) == 320,
    "CHARACTER_INIT_PARAM paramdef size does not match detected size");
