/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct CUTSCENE_TEXTURE_LOAD_PARAM_ST {
    bool disableParam_NT : 1 { false };
    bool disableParam_Debug : 1 { false };
    unsigned char disableParamReserve1 : 6;
    unsigned char disableParamReserve2[3];
    char texName_00[16];
    char texName_01[16];
    char texName_02[16];
    char texName_03[16];
    char texName_04[16];
    char texName_05[16];
    char texName_06[16];
    char texName_07[16];
    char texName_08[16];
    char texName_09[16];
    char texName_10[16];
    char texName_11[16];
    char texName_12[16];
    char texName_13[16];
    char texName_14[16];
    char texName_15[16];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::CUTSCENE_TEXTURE_LOAD_PARAM_ST) == 260,
    "CUTSCENE_TEXTURE_LOAD_PARAM_ST paramdef size does not match detected "
    "size");
