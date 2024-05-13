/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct PARTS_DRAW_PARAM_ST {
    /**
     * @brief LOD level 0-1 boundary distance [m]
     *
     * Switching center
     */
    float lv01_BorderDist{ 5.f };

    /**
     * @brief LOD level 0-1 play distance [m]
     *
     * ± play at the center of the boundary
     */
    float lv01_PlayDist{ 1.f };

    /**
     * @brief LOD level 1-2 boundary distance [m]
     *
     * Switching center
     */
    float lv12_BorderDist{ 20.f };

    /**
     * @brief LOD level 1-2 play distance [m]
     *
     * ± play at the center of the boundary
     */
    float lv12_PlayDist{ 2.f };

    /**
     * @brief LOD level 2-3 Boundary distance [m]
     *
     * Switching center
     */
    float lv23_BorderDist{ 30.f };

    /**
     * @brief LOD level 2-3 play distance [m]
     *
     * ± play at the center of the boundary
     */
    float lv23_PlayDist{ 0.f };

    /**
     * @brief LOD level 3-4 Boundary distance [m]
     *
     * Switching center
     */
    float lv34_BorderDist{ 9999.f };

    /**
     * @brief LOD level 3-4 play distance [m]
     *
     * ± play at the center of the boundary
     */
    float lv34_PlayDist{ 0.f };

    /**
     * @brief LOD level 4-5 Boundary distance [m]
     *
     * Switching center
     */
    float lv45_BorderDist{ 9999.f };

    /**
     * @brief LOD level 4-5 play distance [m]
     *
     * ± play at the center of the boundary
     */
    float lv45_PlayDist{ 0.f };

    /**
     * @brief Texture LOD Level 0-1 Boundary distance [m]
     *
     * Texture switching center (Texure LOD disabled at 0)
     */
    float tex_lv01_BorderDist{ 30.f };

    /**
     * @brief Texture LOD Level 0-1 Play distance [m]
     *
     * Texture Play around the boundary
     */
    float tex_lv01_PlayDist{ 1.f };

    /**
     * @brief Crossfade enabled
     *
     * Is crossfade enabled (0: disabled, 1: enabled)?
     */
    unsigned int enableCrossFade : 1 { 0 };

    /**
     * @brief Drawing distance [m]
     *
     * Maximum drawing distance. In the open, it will be used for the activation
     * distance
     */
    float drawDist{ 9999.f };

    /**
     * @brief Fade range [m]
     *
     * Fade distance from the maximum drawing distance to the actual
     * disappearance
     */
    float drawFadeRange{ 0.f };

    /**
     * @brief Shadow drawing distance [m]
     *
     * Maximum shadow drawing distance
     */
    float shadowDrawDist{ 9999.f };

    /**
     * @brief Shadow fade range [m]
     *
     * Fade distance from the maximum shadow drawing distance to the actual
     * disappearance
     */
    float shadowFadeRange{ 0.f };

    /**
     * @brief Motion blur drawing boundary distance [m]
     *
     * Distance at which motion blur is enabled
     */
    float motionBlur_BorderDist{ 20.f };

    /**
     * @brief Cast the shadow of a point light source
     */
    bool isPointLightShadowSrc{ false };

    /**
     * @brief Cast the shadow of a parallel light source
     */
    bool isDirLightShadowSrc{ false };

    /**
     * @brief Receive a shadow
     */
    bool isShadowDst{ false };

    /**
     * @brief Shadow drawing only
     */
    bool isShadowOnly{ false };

    /**
     * @brief Reflected
     */
    signed char drawByReflectCam{ 0 };

    /**
     * @brief Reflection drawing only
     */
    signed char drawOnlyReflectCam{ 0 };

    /**
     * @brief What level of LodMap to include
     */
    signed char IncludeLodMapLv{ -1 };

    /**
     * @brief Don't FarClip
     *
     * Disable fur clips and always draw at the innermost depth of the clip
     * space. Mainly for celestial sphere
     */
    bool isNoFarClipDraw{ false };

    /**
     * @brief LOD type
     *
     * Type and size of LOD target
     */
    unsigned char lodType{ 0 };

    /**
     * @brief Shadow drawing LOD level offset
     *
     * LOD level offset value when drawing shadows
     */
    signed char shadowDrawLodOffset{ 0 };

    /**
     * @brief Follow the camera on the XZ plane
     *
     * Follow the camera on the XZ plane (GR SEQ09242)
     */
    bool isTraceCameraXZ{ false };

    /**
     * @brief Switch to the celestial sphere drawing phase
     *
     * Set the drawing phase to the celestial sphere (GR SEQ09242)
     */
    bool isSkydomeDrawPhase{ false };

    /**
     * @brief Distance switching distance [m]
     */
    float DistantViewModel_BorderDist{ 30.f };

    /**
     * @brief Distant view switching play distance [m]
     */
    float DistantViewModel_PlayDist{ 5.f };

    /**
     * @brief Construction limit distance for open [m]
     *
     * Construction limit distance for open [m]. If the distance to the camera
     * is less than this distance in the open, it will not be built. This is a
     * function for distant view assets. -1: Function disabled (default)
     */
    float LimtedActivate_BorderDist_forGrid{ -1.f };

    /**
     * @brief Construction limit play distance for open [m]
     *
     * Open construction limit play distance [m]
     */
    float LimtedActivate_PlayDist_forGrid{ 10.f };

    /**
     * @brief Z sort offset
     *
     * If the distance from the camera is the same in the same drawing phase,
     * the smaller translucent system is drawn in the foreground, and the opaque
     * system is drawn in the larger value. The base point of the offset is the
     * origin in the celestial sphere drawing phase. Other than that, it is
     * mainly Model AABB. (GR SEQ09242)
     */
    float zSortOffsetForNoFarClipDraw{ 0.f };

    /**
     * @brief Shadow drawing alpha test effective distance [m]
     *
     * Distance to perform alpha test when drawing shadow [m]
     */
    float shadowDrawAlphaTestDist{ 9999.f };

    /**
     * @brief Forward Drawing environment map Blend type
     */
    unsigned char fowardDrawEnvmapBlendType{ 0 };

    /**
     * @brief Drawing distance scale parameter ID
     *
     * Load balancer drawing distance scale parameter ID
     */
    unsigned char LBDrawDistScaleParamID{ 0 };

    /**
     * @brief reserve
     */
    unsigned char resereve[34];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::PARTS_DRAW_PARAM_ST) == 144,
    "PARTS_DRAW_PARAM_ST paramdef size does not match detected size");
