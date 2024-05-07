/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct WORLD_MAP_POINT_PARAM_ST {
    bool disableParam_NT : 1 { false };
    unsigned char disableParamReserve1 : 7;
    unsigned char disableParamReserve2[3];
    unsigned int eventFlagId{ 0 };
    unsigned int distViewEventFlagId{ 0 };
    unsigned short iconId{ 0 };
    short bgmPlaceType{ 0 };
    bool isAreaIcon : 1 { false };
    bool isOverrideDistViewMarkPos : 1 { false };
    bool isEnableNoText : 1 { false };
    unsigned char pad3 : 5;
    unsigned char areaNo_forDistViewMark{ 0 };
    unsigned char gridXNo_forDistViewMark{ 0 };
    unsigned char gridZNo_forDistViewMark{ 0 };
    unsigned int clearedEventFlagId{ 0 };
    bool dispMask00 : 1 { false };
    bool dispMask01 : 1 { false };
    unsigned char pad2_0 : 6;
    unsigned char pad2[1];
    unsigned short distViewIconId{ 0 };
    float angle{ 0 };
    unsigned char areaNo{ 0 };
    unsigned char gridXNo{ 0 };
    unsigned char gridZNo{ 0 };
    unsigned char pad[1];
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
    int distViewId{ -1 };
    float posX_forDistViewMark{ 0 };
    float posY_forDistViewMark{ 0 };
    float posZ_forDistViewMark{ 0 };
    int distViewId1{ -1 };
    int distViewId2{ -1 };
    int distViewId3{ -1 };
    unsigned char dispMinZoomStep{ 0 };
    unsigned char selectMinZoomStep{ 0 };
    unsigned char entryFEType{ 0 };
    unsigned char pad4[9];
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
    int unkEC{ 0 };
    int unkF0{ 0 };
    int unkF4{ 0 };
    int unkF8{ 0 };
    int unkFC{ 0 };
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::WORLD_MAP_POINT_PARAM_ST) == 256,
    "WORLD_MAP_POINT_PARAM_ST paramdef size does not match detected size");
