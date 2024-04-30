/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct ASSET_MODEL_SFX_PARAM_ST {
    int sfxId_0{ -1 };
    int dmypolyId_0{ -1 };
    unsigned char reserve_0[8];
    int sfxId_1{ -1 };
    int dmypolyId_1{ -1 };
    unsigned char reserve_1[8];
    int sfxId_2{ -1 };
    int dmypolyId_2{ -1 };
    unsigned char reserve_2[8];
    int sfxId_3{ -1 };
    int dmypolyId_3{ -1 };
    unsigned char reserve_3[8];
    int sfxId_4{ -1 };
    int dmypolyId_4{ -1 };
    unsigned char reserve_4[8];
    int sfxId_5{ -1 };
    int dmypolyId_5{ -1 };
    unsigned char reserve_5[8];
    int sfxId_6{ -1 };
    int dmypolyId_6{ -1 };
    unsigned char reserve_6[8];
    int sfxId_7{ -1 };
    int dmypolyId_7{ -1 };
    bool isDisableIV{ false };
    unsigned char reserve_7[7];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::ASSET_MODEL_SFX_PARAM_ST) == 128,
    "ASSET_MODEL_SFX_PARAM_ST paramdef size does not match detected size");
