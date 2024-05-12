/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct CS_RAYTRACING_QUALITY_DETAIL {
    /**
     * @brief Enable ray traced ambient occlusion.
     */
    unsigned char enableRaytraceAO{ 0 };

    /**
     * @brief Enable ray traced shadows.
     */
    unsigned char enableRaytraceShadows{ 0 };
    unsigned char Unk0x02{ 0 };
    unsigned char Unk0x03{ 0 };
    float UnkFloat0x04{ 0.f };
    int Unk0x08{ 0 };
    float UnkFloat0x0C{ 0.f };
    int Unk0x10{ 0 };
    float UnkFloat0x14{ 0.f };
    float UnkFloat0x18{ 0.f };
};

}; // namespace paramdef
}; // namespace from
