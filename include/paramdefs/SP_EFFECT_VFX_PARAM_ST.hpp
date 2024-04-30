/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct SP_EFFECT_VFX_PARAM_ST {
    int midstSfxId{ -1 };
    int midstSeId{ -1 };
    int initSfxId{ -1 };
    int initSeId{ -1 };
    int finishSfxId{ -1 };
    int finishSeId{ -1 };
    float camouflageBeginDist{ -1 };
    float camouflageEndDist{ -1 };
    int transformProtectorId{ -1 };
    short midstDmyId{ -1 };
    short initDmyId{ -1 };
    short finishDmyId{ -1 };
    unsigned char effectType{ 0 };
    unsigned char soulParamIdForWepEnchant{ 0 };
    unsigned char playCategory{ 0 };
    unsigned char playPriority{ 0 };
    bool existEffectForLarge : 1 { false };
    bool existEffectForSoul : 1 { false };
    bool effectInvisibleAtCamouflage : 1 { false };
    bool useCamouflage : 1 { false };
    bool invisibleAtFriendCamouflage : 1 { false };
    bool isHideFootEffect_forCamouflage : 1 { false };
    bool halfCamouflage : 1 { false };
    bool isFullBodyTransformProtectorId : 1 { false };
    bool isInvisibleWeapon : 1 { false };
    bool isSilence : 1 { false };
    bool isMidstFullbody : 1 { false };
    bool isInitFullbody : 1 { false };
    bool isFinishFullbody : 1 { false };
    bool isVisibleDeadChr : 1 { false };
    bool isUseOffsetEnchantSfxSize : 1 { false };
    unsigned char pad_1 : 1;
    int decalId1{ -1 };
    int decalId2{ -1 };
    unsigned char footEffectPriority{ 0 };
    unsigned char footEffectOffset{ 0 };
    unsigned char traceSfxIdOffsetType{ 0 };
    unsigned char forceDeceasedType{ 0 };
    int enchantStartDmyId_0{ -1 };
    int enchantEndDmyId_0{ -1 };
    int enchantStartDmyId_1{ -1 };
    int enchantEndDmyId_1{ -1 };
    int enchantStartDmyId_2{ -1 };
    int enchantEndDmyId_2{ -1 };
    int enchantStartDmyId_3{ -1 };
    int enchantEndDmyId_3{ -1 };
    int enchantStartDmyId_4{ -1 };
    int enchantEndDmyId_4{ -1 };
    int enchantStartDmyId_5{ -1 };
    int enchantEndDmyId_5{ -1 };
    int enchantStartDmyId_6{ -1 };
    int enchantEndDmyId_6{ -1 };
    int enchantStartDmyId_7{ -1 };
    int enchantEndDmyId_7{ -1 };
    unsigned char SfxIdOffsetType{ 0 };
    unsigned char phantomParamOverwriteType{ 0 };
    unsigned char camouflageMinAlpha{ 0 };
    unsigned char wetAspectType{ 0 };
    int phantomParamOverwriteId{ 0 };
    int materialParamId{ -1 };
    float materialParamInitValue{ 0 };
    float materialParamTargetValue{ 0 };
    float materialParamFadeTime{ 0 };
    short footDecalMaterialOffsetOverwriteId{ -1 };
    unsigned char pad[14];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::SP_EFFECT_VFX_PARAM_ST) == 164,
    "SP_EFFECT_VFX_PARAM_ST paramdef size does not match detected size");
