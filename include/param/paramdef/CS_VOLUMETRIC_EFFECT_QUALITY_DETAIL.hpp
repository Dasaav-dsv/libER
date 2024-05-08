/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct CS_VOLUMETRIC_EFFECT_QUALITY_DETAIL {
    bool fogEnabled{ true };
    bool fogShadowEnabled{ true };
    unsigned char dmy[2];
    int fogShadowSampleCountBias{ 0 };
    float fogLocalLightDistScale{ 0 };
    unsigned int fogVolueSizeScaler{ 1 };
    unsigned int fogVolueSizeDivider{ 1 };
    unsigned int fogVolumeDepthScaler{ 1 };
    unsigned int fogVolumeDepthDivider{ 1 };
    bool fogVolumeEnabled{ true };
    unsigned char fogVolumeUpScaleType{ 1 };
    unsigned char fogVolumeEdgeCorrectionLevel{ 2 };
    signed char fogVolumeRayMarcingSampleCountOffset{ 0 };
    bool fogVolumeShadowEnabled{ true };
    bool fogVolumeForceShadowing{ false };
    unsigned char fogVolumeResolution{ 0 };
    unsigned char pad2[1];
};

}; // namespace paramdefs
}; // namespace from
