/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct BONFIRE_WARP_PARAM_ST {
    bool disableParam_NT : 1 { false };
    unsigned char disableParamReserve1 : 7;
    unsigned char disableParamReserve2[3];
    unsigned int eventflagId{ 0 };
    unsigned int bonfireEntityId{ 0 };
    unsigned char pad4[2];
    unsigned short bonfireSubCategorySortId{ 0 };
    unsigned short forbiddenIconId{ 0 };
    unsigned char dispMinZoomStep{ 0 };
    unsigned char selectMinZoomStep{ 0 };
    int bonfireSubCategoryId{ -1 };
    unsigned int clearedEventFlagId{ 0 };
    unsigned short iconId{ 0 };
    bool dispMask00 : 1 { false };
    bool dispMask01 : 1 { false };
    unsigned char pad1 : 6;
    unsigned char pad2[1];
    unsigned char areaNo{ 0 };
    unsigned char gridXNo{ 0 };
    unsigned char gridZNo{ 0 };
    unsigned char pad3[1];
    float posX{ 0 };
    float posY{ 0 };
    float posZ{ 0 };
    int textId1{ -1 };
    unsigned int textEnableFlagId1{ 0 };
    unsigned int textDisableFlagId1{ 0 };
    int textId2{ -1 };
    unsigned int textEnableFlagId2{ 0 };
    unsigned int textDisableFlagId2{ 0 };
    int textId3{ -1 };
    unsigned int textEnableFlagId3{ 0 };
    unsigned int textDisableFlagId3{ 0 };
    int textId4{ -1 };
    unsigned int textEnableFlagId4{ 0 };
    unsigned int textDisableFlagId4{ 0 };
    int textId5{ -1 };
    unsigned int textEnableFlagId5{ 0 };
    unsigned int textDisableFlagId5{ 0 };
    int textId6{ -1 };
    unsigned int textEnableFlagId6{ 0 };
    unsigned int textDisableFlagId6{ 0 };
    int textId7{ -1 };
    unsigned int textEnableFlagId7{ 0 };
    unsigned int textDisableFlagId7{ 0 };
    int textId8{ -1 };
    unsigned int textEnableFlagId8{ 0 };
    unsigned int textDisableFlagId8{ 0 };
    unsigned char textType1{ 0 };
    unsigned char textType2{ 0 };
    unsigned char textType3{ 0 };
    unsigned char textType4{ 0 };
    unsigned char textType5{ 0 };
    unsigned char textType6{ 0 };
    unsigned char textType7{ 0 };
    unsigned char textType8{ 0 };
    int noIgnitionSfxDmypolyId_0{ -1 };
    int noIgnitionSfxId_0{ -1 };
    int noIgnitionSfxDmypolyId_1{ -1 };
    int noIgnitionSfxId_1{ -1 };
    int unkA8{ 0 };
    int unkAC{ 0 };
    int unkB0{ 0 };
    int unkB4{ 0 };
    int unkB8{ 0 };
    int unkBC{ 0 };
    int unkC0{ 0 };
    int unkC4{ 0 };
    int unkC8{ 0 };
    int unkCC{ 0 };
    int unkD0{ 0 };
    int unkD4{ 0 };
    int unkD8{ 0 };
    int unkDC{ 0 };
    int unkE0{ 0 };
    int unkE4{ 0 };
    int unkE8{ 0 };
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::BONFIRE_WARP_PARAM_ST) == 236,
    "BONFIRE_WARP_PARAM_ST paramdef size does not match detected size");
