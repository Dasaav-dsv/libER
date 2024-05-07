/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct DECAL_PARAM_ST {
    int textureId{ -1 };
    int dmypolyId{ -1 };
    float pitchAngle{ 0 };
    float yawAngle{ 0 };
    float nearDistance{ 0 };
    float farDistance{ 0 };
    float nearSize{ 0 };
    float farSize{ 0 };
    int maskSpeffectId{ -1 };
    unsigned int pad_10 : 4 { 0 };
    unsigned int replaceTextureId_byMaterial : 1 { 0 };
    unsigned int dmypolyCategory : 2 { 0 };
    unsigned int pad_05 : 4 { 0 };
    unsigned int useDeferredDecal : 1 { 1 };
    unsigned int usePaintDecal : 1 { 1 };
    unsigned int bloodTypeEnable : 1 { 0 };
    unsigned int bUseNormal : 1 { 0 };
    unsigned int pad_08 : 1 { 0 };
    unsigned int pad_09 : 1 { 0 };
    unsigned int usePom : 1 { 0 };
    unsigned int useEmissive : 1 { 0 };
    unsigned int putVertical : 1 { 0 };
    short randomSizeMin{ 100 };
    short randomSizeMax{ 100 };
    float randomRollMin{ 0 };
    float randomRollMax{ 0 };
    float randomPitchMin{ 0 };
    float randomPitchMax{ 0 };
    float randomYawMin{ 0 };
    float randomYawMax{ 0 };
    float pomHightScale{ 1 };
    unsigned char pomSampleMin{ 8 };
    unsigned char pomSampleMax{ 64 };
    signed char blendMode{ 1 };
    signed char appearDirType{ 0 };
    float emissiveValueBegin{ 1 };
    float emissiveValueEnd{ 1 };
    float emissiveTime{ 0 };
    bool bIntpEnable{ false };
    unsigned char pad_01[3];
    float intpIntervalDist{ 0.1 };
    int beginIntpTextureId{ -1 };
    int endIntpTextureId{ -1 };
    int appearSfxId{ -1 };
    float appearSfxOffsetPos{ 0 };
    int maskTextureId{ -1 };
    int diffuseTextureId{ -1 };
    int reflecTextureId{ -1 };
    float maskScale{ 1 };
    int normalTextureId{ -1 };
    int heightTextureId{ -1 };
    int emissiveTextureId{ -1 };
    unsigned char diffuseColorR{ 255 };
    unsigned char diffuseColorG{ 255 };
    unsigned char diffuseColorB{ 255 };
    unsigned char pad_03[1];
    unsigned char reflecColorR{ 255 };
    unsigned char reflecColorG{ 255 };
    unsigned char reflecColorB{ 255 };
    bool bLifeEnable{ false };
    float siniScale{ 1 };
    float lifeTimeSec{ 0 };
    float fadeOutTimeSec{ 0 };
    short priority{ -1 };
    bool bDistThinOutEnable{ false };
    bool bAlignedTexRandomVariationEnable{ false };
    float distThinOutCheckDist{ 0 };
    float distThinOutCheckAngleDeg{ 0 };
    unsigned char distThinOutMaxNum{ 1 };
    unsigned char distThinOutCheckNum{ 1 };
    short delayAppearFrame{ 0 };
    unsigned int randVaria_Diffuse : 4 { 0 };
    unsigned int randVaria_Mask : 4 { 0 };
    unsigned int randVaria_Reflec : 4 { 0 };
    unsigned int pad_12 : 4 { 0 };
    unsigned int randVaria_Normal : 4 { 0 };
    unsigned int randVaria_Height : 4 { 0 };
    unsigned int randVaria_Emissive : 4 { 0 };
    unsigned int pad_11 : 4 { 0 };
    float fadeInTimeSec{ 0 };
    float thinOutOverlapMultiRadius{ 0 };
    float thinOutNeighborAddRadius{ 0 };
    unsigned int thinOutOverlapLimitNum{ 0 };
    unsigned int thinOutNeighborLimitNum{ 0 };
    signed char thinOutMode{ 0 };
    unsigned char emissiveColorR{ 255 };
    unsigned char emissiveColorG{ 255 };
    unsigned char emissiveColorB{ 255 };
    float maxDecalSfxCreatableSlopeAngleDeg{ -1 };
    unsigned char pad_02[40];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::DECAL_PARAM_ST) == 248,
    "DECAL_PARAM_ST paramdef size does not match detected size");
