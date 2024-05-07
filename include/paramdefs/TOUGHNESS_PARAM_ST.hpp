/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct TOUGHNESS_PARAM_ST {
    float correctionRate{ 1 };
    unsigned short minToughness{ 0 };
    bool isNonEffectiveCorrectionForMin{ false };
    unsigned char pad2[1];
    int spEffectId{ -1 };
    float proCorrectionRate{ 1 };
    float unk1{ 1 };
    float unk2{ 1 };
    unsigned char pad1[8];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::TOUGHNESS_PARAM_ST) == 32,
    "TOUGHNESS_PARAM_ST paramdef size does not match detected size");
