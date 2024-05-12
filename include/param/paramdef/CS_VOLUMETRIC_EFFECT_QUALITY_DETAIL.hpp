/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct CS_VOLUMETRIC_EFFECT_QUALITY_DETAIL {
    /**
     * @brief Fog enabled
     */
    bool fogEnabled{ true };

    /**
     * @brief Fog shadow permission
     */
    bool fogShadowEnabled{ true };

    /**
     * @brief dmy
     */
    unsigned char dmy[2];

    /**
     * @brief Shadow sample count offset.
     */
    int fogShadowSampleCountBias{ 0 };

    /**
     * @brief Local light calculation distance scale (0 does not calculate local
     * light)
     */
    float fogLocalLightDistScale{ 0.f };

    /**
     * @brief Fog volume size scaler
     */
    unsigned int fogVolueSizeScaler{ 1 };

    /**
     * @brief Fog volume size division
     */
    unsigned int fogVolueSizeDivider{ 1 };

    /**
     * @brief Fog Volume Depth Slice Scaler
     */
    unsigned int fogVolumeDepthScaler{ 1 };

    /**
     * @brief Fog volume depth slice division
     */
    unsigned int fogVolumeDepthDivider{ 1 };

    /**
     * @brief Arranged fog volume enabled
     */
    bool fogVolumeEnabled{ true };

    /**
     * @brief Upscale type
     *
     * Method type at the time of upscale
     */
    unsigned char fogVolumeUpScaleType{ 1 };

    /**
     * @brief Edge correction level performed only when bilateral
     *
     * Edge correction level performed only at bilateral (0: invalid, edge
     * redraw permission at 1: 1 / 2x1 / 2 resolution, edge redraw permission
     * with parameter reduction at 2: 1 / 2x1 / 2 + 1x1 resolution, 3 : 1 / 2x1
     * / 2 + 1x1 resolution edge redraw permission)
     */
    unsigned char fogVolumeEdgeCorrectionLevel{ 2 };

    /**
     * @brief Offset of sampling number during ray marching
     */
    signed char fogVolumeRayMarcingSampleCountOffset{ 0 };

    /**
     * @brief Shadow permission
     *
     * Shadow permission (refers to shadow processing due to density changes in
     * the area, where shadows are cast on the area)
     */
    bool fogVolumeShadowEnabled{ true };

    /**
     * @brief Forcibly casts a shadow on the area regardless of the setting when
     * shadow is allowed
     *
     * Forcibly casts a shadow on the area regardless of the setting when shadow
     * is permitted (shadow processing is not affected)
     */
    bool fogVolumeForceShadowing{ false };

    /**
     * @brief Fog volume upscale processing resolution
     */
    unsigned char fogVolumeResolution{ 0 };

    unsigned char pad2[1];
};

}; // namespace paramdef
}; // namespace from
