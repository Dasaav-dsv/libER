/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct GRASS_TYPE_PARAM_ST {
    /**
     * @brief LOD distance
     */
    unsigned short lodRange{ 0 };

    /**
     * @brief LOD0 cluster type
     */
    unsigned char lod0ClusterType{ 0 };

    /**
     * @brief LOD1 cluster type
     */
    unsigned char lod1ClusterType{ 0 };

    /**
     * @brief LOD2 cluster type
     */
    unsigned char lod2ClusterType{ 0 };

    unsigned char pad0[2];

    /**
     * @brief Placement method
     */
    unsigned char distributionType{ 0 };

    /**
     * @brief Basic density
     */
    float baseDensity{ 1.f };

    /**
     * @brief Model name (0)
     */
    wchar_t model0Name[16];

    /**
     * @brief Flat texture name
     */
    wchar_t flatTextureName[32];

    /**
     * @brief Billboard texture name
     */
    wchar_t billboardTextureName[32];

    /**
     * @brief Effect of tilt (%)
     */
    unsigned char normalInfluence{ 0 };

    /**
     * @brief Maximum tilt angle (degrees)
     */
    unsigned char inclinationMax{ 90 };

    /**
     * @brief Randomness of tilt angle (degrees)
     */
    unsigned char inclinationJitter{ 0 };

    /**
     * @brief Width scale range (min,%)
     */
    unsigned char scaleBaseMin{ 100 };

    /**
     * @brief Width scale range (max,%)
     */
    unsigned char scaleBaseMax{ 100 };

    /**
     * @brief Height scale range (min,%)
     */
    unsigned char scaleHeightMin{ 100 };

    /**
     * @brief Height scale range (max,%)
     */
    unsigned char scaleHeightMax{ 100 };

    /**
     * @brief Multiplication color 1 (red)
     */
    unsigned char colorShade1_r{ 255 };

    /**
     * @brief Multiplication color 1 (green)
     */
    unsigned char colorShade1_g{ 255 };

    /**
     * @brief Multiplication color 1 (blue)
     */
    unsigned char colorShade1_b{ 255 };

    /**
     * @brief Multiplication color 2 (red)
     */
    unsigned char colorShade2_r{ 255 };

    /**
     * @brief Multiplication color 2 (green)
     */
    unsigned char colorShade2_g{ 255 };

    /**
     * @brief Multiplication color 2 (blue)
     */
    unsigned char colorShade2_b{ 255 };

    /**
     * @brief Separation of planes
     */
    unsigned char flatSplitType{ 0 };

    /**
     * @brief Number of planes
     */
    unsigned char flatBladeCount{ 2 };

    /**
     * @brief Plane angle (degrees)
     */
    signed char flatSlant{ 0 };

    /**
     * @brief Plane distance
     */
    float flatRadius{ 0.f };

    /**
     * @brief Do you want to cast a shadow
     */
    unsigned char castShadow{ 1 };

    /**
     * @brief Amplitude (magnitude of shaking)
     */
    unsigned char windAmplitude{ 80 };

    unsigned char pad1[1];

    /**
     * @brief Cycle (speed)
     */
    unsigned char windCycle{ 40 };

    /**
     * @brief Direction (degree)
     *
     * Random for -1
     */
    float orientationAngle{ -1.f };

    /**
     * @brief Directional range (degrees)
     */
    float orientationRange{ -1.f };

    /**
     * @brief Model spacing
     */
    float spacing{ 0.f };

    /**
     * @brief Dithering
     */
    unsigned char dithering{ 0 };

    unsigned char pad[3];

    /**
     * @brief Simple model name
     */
    wchar_t simpleModelName[16];

    /**
     * @brief Model name (1)
     */
    wchar_t model1Name[16];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::GRASS_TYPE_PARAM_ST) == 276,
    "GRASS_TYPE_PARAM_ST paramdef size does not match detected size");
