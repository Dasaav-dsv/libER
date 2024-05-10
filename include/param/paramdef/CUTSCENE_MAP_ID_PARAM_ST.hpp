/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct CUTSCENE_MAP_ID_PARAM_ST {
    bool disableParam_NT : 1 { false };
    bool disableParam_Debug : 1 { false };
    unsigned char disableParamReserve1 : 6;
    unsigned char disableParamReserve2[3];
    unsigned int PlayMapId{ 0 };
    unsigned int RequireMapId0{ 0 };
    unsigned int RequireMapId1{ 0 };
    unsigned int RequireMapId2{ 0 };
    int RefCamPosHitPartsID{ -1 };
    unsigned char reserved_2[12];
    unsigned short ClientDisableViewTimeForProgress{ 0 };
    unsigned char reserved[2];
    int HitParts_0{ -1 };
    int HitParts_1{ -1 };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::CUTSCENE_MAP_ID_PARAM_ST) == 48,
    "CUTSCENE_MAP_ID_PARAM_ST paramdef size does not match detected size");
