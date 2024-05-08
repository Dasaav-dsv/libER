/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct PARTS_DRAW_PARAM_ST {
    float lv01_BorderDist{ 5 };
    float lv01_PlayDist{ 1 };
    float lv12_BorderDist{ 20 };
    float lv12_PlayDist{ 2 };
    float lv23_BorderDist{ 30 };
    float lv23_PlayDist{ 0 };
    float lv34_BorderDist{ 9999 };
    float lv34_PlayDist{ 0 };
    float lv45_BorderDist{ 9999 };
    float lv45_PlayDist{ 0 };
    float tex_lv01_BorderDist{ 30 };
    float tex_lv01_PlayDist{ 1 };
    unsigned int enableCrossFade : 1 { 0 };
    float drawDist{ 9999 };
    float drawFadeRange{ 0 };
    float shadowDrawDist{ 9999 };
    float shadowFadeRange{ 0 };
    float motionBlur_BorderDist{ 20 };
    bool isPointLightShadowSrc{ false };
    bool isDirLightShadowSrc{ false };
    bool isShadowDst{ false };
    bool isShadowOnly{ false };
    signed char drawByReflectCam{ 0 };
    signed char drawOnlyReflectCam{ 0 };
    signed char IncludeLodMapLv{ -1 };
    bool isNoFarClipDraw{ false };
    unsigned char lodType{ 0 };
    signed char shadowDrawLodOffset{ 0 };
    bool isTraceCameraXZ{ false };
    bool isSkydomeDrawPhase{ false };
    float DistantViewModel_BorderDist{ 30 };
    float DistantViewModel_PlayDist{ 5 };
    float LimtedActivate_BorderDist_forGrid{ -1 };
    float LimtedActivate_PlayDist_forGrid{ 10 };
    float zSortOffsetForNoFarClipDraw{ 0 };
    float shadowDrawAlphaTestDist{ 9999 };
    unsigned char fowardDrawEnvmapBlendType{ 0 };
    unsigned char LBDrawDistScaleParamID{ 0 };
    unsigned char resereve[34];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::PARTS_DRAW_PARAM_ST) == 144,
    "PARTS_DRAW_PARAM_ST paramdef size does not match detected size");
