/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct EQUIP_PARAM_ACCESSORY_ST {
    bool disableParam_NT : 1 { false };
    unsigned char disableParamReserve1 : 7;
    unsigned char disableParamReserve2[3];
    int refId{ -1 };
    int sfxVariationId{ -1 };
    float weight{ 1 };
    int behaviorId{ 0 };
    int basicPrice{ 0 };
    int sellValue{ 0 };
    int sortId{ 0 };
    int qwcId{ -1 };
    unsigned short equipModelId{ 0 };
    unsigned short iconId{ 0 };
    short shopLv{ 0 };
    short trophySGradeId{ -1 };
    short trophySeqId{ -1 };
    unsigned char equipModelCategory{ 0 };
    unsigned char equipModelGender{ 0 };
    unsigned char accessoryCategory{ 0 };
    unsigned char refCategory{ 0 };
    unsigned char spEffectCategory{ 0 };
    unsigned char sortGroupId{ 255 };
    int vagrantItemLotId{ 0 };
    int vagrantBonusEneDropItemLotId{ 0 };
    int vagrantItemEneDropItemLotId{ 0 };
    bool isDeposit : 1 { false };
    bool isEquipOutBrake : 1 { false };
    bool disableMultiDropShare : 1 { false };
    bool isDiscard : 1 { false };
    bool isDrop : 1 { false };
    bool showLogCondType : 1 { true };
    unsigned char showDialogCondType : 2 { 2 };
    unsigned char rarity{ 0 };
    unsigned char pad2[2];
    int saleValue{ -1 };
    short accessoryGroup{ -1 };
    unsigned char pad3[1];
    signed char compTrophySedId{ -1 };
    int residentSpEffectId1{ 0 };
    int residentSpEffectId2{ 0 };
    int residentSpEffectId3{ 0 };
    int residentSpEffectId4{ 0 };
    unsigned char pad1[4];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::EQUIP_PARAM_ACCESSORY_ST) == 96,
    "EQUIP_PARAM_ACCESSORY_ST paramdef size does not match detected size");
