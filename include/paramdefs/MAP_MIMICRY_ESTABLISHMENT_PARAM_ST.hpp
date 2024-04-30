/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct MAP_MIMICRY_ESTABLISHMENT_PARAM_ST {
    float mimicryEstablishment0{ -1 };
    float mimicryEstablishment1{ -1 };
    float mimicryEstablishment2{ -1 };
    int mimicryBeginSfxId0{ -1 };
    int mimicrySfxId0{ -1 };
    int mimicryEndSfxId0{ -1 };
    int mimicryBeginSfxId1{ -1 };
    int mimicrySfxId1{ -1 };
    int mimicryEndSfxId1{ -1 };
    int mimicryBeginSfxId2{ -1 };
    int mimicrySfxId2{ -1 };
    int mimicryEndSfxId2{ -1 };
    unsigned char pad1[16];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::MAP_MIMICRY_ESTABLISHMENT_PARAM_ST) == 64,
    "MAP_MIMICRY_ESTABLISHMENT_PARAM_ST paramdef size does not match detected "
    "size");
