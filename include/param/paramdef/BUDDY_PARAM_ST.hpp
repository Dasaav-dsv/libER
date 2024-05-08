/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct BUDDY_PARAM_ST {
    bool disableParam_NT : 1 { false };
    unsigned char disableParamReserve1 : 7;
    unsigned char disableParamReserve2[3];
    int triggerSpEffectId{ -1 };
    int npcParamId{ -1 };
    int npcThinkParamId{ -1 };
    int npcParamId_ridden{ -1 };
    int npcThinkParamId_ridden{ -1 };
    float x_offset{ 0 };
    float z_offset{ 0 };
    float y_angle{ 0 };
    bool appearOnAroundSekihi{ false };
    bool disablePCTargetShare{ false };
    unsigned char pcFollowType{ 0 };
    unsigned char Reserve[1];
    int dopingSpEffect_lv0{ -1 };
    int dopingSpEffect_lv1{ -1 };
    int dopingSpEffect_lv2{ -1 };
    int dopingSpEffect_lv3{ -1 };
    int dopingSpEffect_lv4{ -1 };
    int dopingSpEffect_lv5{ -1 };
    int dopingSpEffect_lv6{ -1 };
    int dopingSpEffect_lv7{ -1 };
    int dopingSpEffect_lv8{ -1 };
    int dopingSpEffect_lv9{ -1 };
    int dopingSpEffect_lv10{ -1 };
    int npcPlayerInitParamId{ -1 };
    int generateAnimId{ -1 };
    unsigned int Unk1{ 0 };
    unsigned int Unk2{ 0 };
    int Unk3{ 0 };
    int Unk4{ 0 };
    int Unk5{ 0 };
    int Unk6{ 0 };
    int Unk7{ 0 };
    int Unk8{ 0 };
    int Unk9{ 0 };
    int Unk10{ 0 };
    unsigned int Unk11{ 0 };
    int Unk12{ 0 };
    int Unk13{ 0 };
    int Unk14{ 0 };
    int Unk15{ 0 };
    int Unk16{ 0 };
    unsigned int Unk17{ 0 };
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::BUDDY_PARAM_ST) == 160,
    "BUDDY_PARAM_ST paramdef size does not match detected size");
