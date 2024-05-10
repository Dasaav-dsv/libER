/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct EQUIP_PARAM_GEM_ST {
    bool disableParam_NT : 1 { false };
    unsigned char disableParamReserve1 : 7;
    unsigned char disableParamReserve2[3];
    unsigned short iconId{ 0 };
    signed char rank{ 0 };
    unsigned char sortGroupId{ 255 };
    int spEffectId0{ -1 };
    int spEffectId1{ -1 };
    int spEffectId2{ -1 };
    unsigned int itemGetTutorialFlagId{ 0 };
    int swordArtsParamId{ -1 };
    int mountValue{ 0 };
    int sellValue{ 0 };
    int saleValue{ -1 };
    int sortId{ 0 };
    short compTrophySedId{ -1 };
    short trophySeqId{ -1 };
    bool configurableWepAttr00 : 1 { false };
    bool configurableWepAttr01 : 1 { false };
    bool configurableWepAttr02 : 1 { false };
    bool configurableWepAttr03 : 1 { false };
    bool configurableWepAttr04 : 1 { false };
    bool configurableWepAttr05 : 1 { false };
    bool configurableWepAttr06 : 1 { false };
    bool configurableWepAttr07 : 1 { false };
    bool configurableWepAttr08 : 1 { false };
    bool configurableWepAttr09 : 1 { false };
    bool configurableWepAttr10 : 1 { false };
    bool configurableWepAttr11 : 1 { false };
    bool configurableWepAttr12 : 1 { false };
    bool configurableWepAttr13 : 1 { false };
    bool configurableWepAttr14 : 1 { false };
    bool configurableWepAttr15 : 1 { false };
    unsigned char rarity{ 0 };
    bool configurableWepAttr16 : 1 { false };
    bool configurableWepAttr17 : 1 { false };
    bool configurableWepAttr18 : 1 { false };
    bool configurableWepAttr19 : 1 { false };
    bool configurableWepAttr20 : 1 { false };
    bool configurableWepAttr21 : 1 { false };
    bool configurableWepAttr22 : 1 { false };
    bool configurableWepAttr23 : 1 { false };
    bool isDiscard : 1 { false };
    bool isDrop : 1 { false };
    bool isDeposit : 1 { false };
    bool disableMultiDropShare : 1 { false };
    unsigned char showDialogCondType : 2 { 2 };
    bool showLogCondType : 1 { true };
    unsigned char pad : 1;
    unsigned char defaultWepAttr{ 0 };
    unsigned char pad2[2];
    bool canMountWep_Dagger : 1 { false };
    bool canMountWep_SwordNormal : 1 { false };
    bool canMountWep_SwordLarge : 1 { false };
    bool canMountWep_SwordGigantic : 1 { false };
    bool canMountWep_SaberNormal : 1 { false };
    bool canMountWep_SaberLarge : 1 { false };
    bool canMountWep_katana : 1 { false };
    bool canMountWep_SwordDoubleEdge : 1 { false };
    bool canMountWep_SwordPierce : 1 { false };
    bool canMountWep_RapierHeavy : 1 { false };
    bool canMountWep_AxeNormal : 1 { false };
    bool canMountWep_AxeLarge : 1 { false };
    bool canMountWep_HammerNormal : 1 { false };
    bool canMountWep_HammerLarge : 1 { false };
    bool canMountWep_Flail : 1 { false };
    bool canMountWep_SpearNormal : 1 { false };
    bool canMountWep_SpearLarge : 1 { false };
    bool canMountWep_SpearHeavy : 1 { false };
    bool canMountWep_SpearAxe : 1 { false };
    bool canMountWep_Sickle : 1 { false };
    bool canMountWep_Knuckle : 1 { false };
    bool canMountWep_Claw : 1 { false };
    bool canMountWep_Whip : 1 { false };
    bool canMountWep_AxhammerLarge : 1 { false };
    bool canMountWep_BowSmall : 1 { false };
    bool canMountWep_BowNormal : 1 { false };
    bool canMountWep_BowLarge : 1 { false };
    bool canMountWep_ClossBow : 1 { false };
    bool canMountWep_Ballista : 1 { false };
    bool canMountWep_Staff : 1 { false };
    bool canMountWep_Sorcery : 1 { false };
    bool canMountWep_Talisman : 1 { false };
    bool canMountWep_ShieldSmall : 1 { false };
    bool canMountWep_ShieldNormal : 1 { false };
    bool canMountWep_ShieldLarge : 1 { false };
    bool canMountWep_Torch : 1 { false };
    unsigned char reserved_canMountWep : 4;
    unsigned char reserved2_canMountWep[3];
    int spEffectMsgId0{ -1 };
    int spEffectMsgId1{ -1 };
    int spEffectId_forAtk0{ -1 };
    int spEffectId_forAtk1{ -1 };
    int spEffectId_forAtk2{ -1 };
    int mountWepTextId{ -1 };
    unsigned char pad6[8];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::EQUIP_PARAM_GEM_ST) == 96,
    "EQUIP_PARAM_GEM_ST paramdef size does not match detected size");
