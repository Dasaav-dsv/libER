/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct HIT_EFFECT_SFX_CONCEPT_PARAM_ST {
    short atkIron_1{ 0 };
    short atkIron_2{ 0 };
    short atkLeather_1{ 0 };
    short atkLeather_2{ 0 };
    short atkWood_1{ 0 };
    short atkWood_2{ 0 };
    short atkBody_1{ 0 };
    short atkBody_2{ 0 };
    short atkStone_1{ 0 };
    short atkStone_2{ 0 };
    unsigned char pad[4];
    short atkNone_1{ 0 };
    short atkNone_2{ 0 };
    unsigned char reserve[52];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::HIT_EFFECT_SFX_CONCEPT_PARAM_ST) == 80,
    "HIT_EFFECT_SFX_CONCEPT_PARAM_ST paramdef size does not match detected "
    "size");
