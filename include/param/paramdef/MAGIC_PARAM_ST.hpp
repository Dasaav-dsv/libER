/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct MAGIC_PARAM_ST {
    bool disableParam_NT : 1 { false };
    unsigned char disableParamReserve1 : 7;
    unsigned char disableParamReserve2[3];
    int yesNoDialogMessageId{ 0 };
    int limitCancelSpEffectId{ -1 };
    short sortId{ 0 };
    unsigned char requirementLuck{ 0 };
    unsigned char aiNotifyType{ 0 };
    short mp{ 0 };
    short stamina{ 0 };
    short iconId{ 0 };
    short behaviorId{ 0 };
    short mtrlItemId{ -1 };
    short replaceMagicId{ -1 };
    short maxQuantity{ 0 };
    unsigned char refCategory1{ 0 };
    unsigned char overDexterity{ 0 };
    unsigned char refCategory2{ 0 };
    unsigned char slotLength{ 0 };
    unsigned char requirementIntellect{ 0 };
    unsigned char requirementFaith{ 0 };
    unsigned char analogDexterityMin{ 0 };
    unsigned char analogDexterityMax{ 0 };
    unsigned char ezStateBehaviorType{ 0 };
    unsigned char refCategory3{ 0 };
    unsigned char spEffectCategory{ 0 };
    unsigned char refType{ 0 };
    unsigned char opmeMenuType{ 0 };
    unsigned char refCategory4{ 0 };
    unsigned short hasSpEffectType{ 0 };
    unsigned char replaceCategory{ 0 };
    unsigned char useLimitCategory{ 0 };
    bool vowType0 : 1 { false };
    bool vowType1 : 1 { false };
    bool vowType2 : 1 { false };
    bool vowType3 : 1 { false };
    bool vowType4 : 1 { false };
    bool vowType5 : 1 { false };
    bool vowType6 : 1 { false };
    bool vowType7 : 1 { false };
    bool enable_multi : 1 { false };
    bool enable_multi_only : 1 { false };
    bool isEnchant : 1 { false };
    bool isShieldEnchant : 1 { false };
    bool enable_live : 1 { false };
    bool enable_gray : 1 { false };
    bool enable_white : 1 { false };
    bool enable_black : 1 { false };
    bool disableOffline : 1 { false };
    bool castResonanceMagic : 1 { false };
    bool isValidTough_ProtSADmg : 1 { false };
    bool isWarpMagic : 1 { false };
    bool enableRiding : 1 { false };
    bool disableRiding : 1 { false };
    bool isUseNoAttackRegion : 1 { false };
    unsigned char pad_1 : 1;
    bool vowType8 : 1 { false };
    bool vowType9 : 1 { false };
    bool vowType10 : 1 { false };
    bool vowType11 : 1 { false };
    bool vowType12 : 1 { false };
    bool vowType13 : 1 { false };
    bool vowType14 : 1 { false };
    bool vowType15 : 1 { false };
    int castSfxId{ -1 };
    int fireSfxId{ -1 };
    int effectSfxId{ -1 };
    float toughnessCorrectRate{ 0 };
    unsigned char ReplacementStatusType{ 0 };
    signed char ReplacementStatus1{ -1 };
    signed char ReplacementStatus2{ -1 };
    signed char ReplacementStatus3{ -1 };
    signed char ReplacementStatus4{ -1 };
    unsigned char refCategory5{ 0 };
    short consumeSA{ 0 };
    int ReplacementMagic1{ -1 };
    int ReplacementMagic2{ -1 };
    int ReplacementMagic3{ -1 };
    int ReplacementMagic4{ -1 };
    short mp_charge{ 0 };
    short stamina_charge{ 0 };
    unsigned char createLimitGroupId{ 0 };
    unsigned char refCategory6{ 0 };
    unsigned char subCategory1{ 0 };
    unsigned char subCategory2{ 0 };
    unsigned char refCategory7{ 0 };
    unsigned char refCategory8{ 0 };
    unsigned char refCategory9{ 0 };
    unsigned char refCategory10{ 0 };
    int refId1{ -1 };
    int refId2{ -1 };
    int refId3{ -1 };
    int aiUseJudgeId{ -1 };
    int refId4{ -1 };
    int refId5{ -1 };
    int refId6{ -1 };
    int refId7{ -1 };
    int refId8{ -1 };
    int refId9{ -1 };
    int refId10{ -1 };
    unsigned char consumeType1{ 0 };
    unsigned char consumeType2{ 0 };
    unsigned char consumeType3{ 0 };
    unsigned char consumeType4{ 0 };
    unsigned char consumeType5{ 0 };
    unsigned char consumeType6{ 0 };
    unsigned char consumeType7{ 0 };
    unsigned char consumeType8{ 0 };
    unsigned char consumeType9{ 0 };
    unsigned char consumeType10{ 0 };
    short consumeLoopMP_forMenu{ -1 };
    unsigned char pad[8];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::MAGIC_PARAM_ST) == 168,
    "MAGIC_PARAM_ST paramdef size does not match detected size");
