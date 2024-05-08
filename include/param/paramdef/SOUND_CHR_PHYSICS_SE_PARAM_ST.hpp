/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct SOUND_CHR_PHYSICS_SE_PARAM_ST {
    bool disableParam_NT : 1 { false };
    unsigned char disableParamReserve1 : 7;
    unsigned char disableParamReserve2[3];
    int ContactLandSeId{ -1 };
    int ContactLandAddSeId{ -1 };
    int ContactLandPlayNum{ 1 };
    bool IsEnablePlayCountPerRigid{ false };
    unsigned char pad[3];
    float ContactLandMinImpuse{ 20 };
    float ContactLandMinSpeed{ 0 };
    int ContactPlayerSeId{ -1 };
    float ContactPlayerMinImpuse{ 20 };
    float ContactPlayerMinSpeed{ 0 };
    signed char ContactCheckRigidIdx0{ -1 };
    signed char ContactCheckRigidIdx1{ -1 };
    signed char ContactCheckRigidIdx2{ -1 };
    signed char ContactCheckRigidIdx3{ -1 };
    signed char ContactCheckRigidIdx4{ -1 };
    signed char ContactCheckRigidIdx5{ -1 };
    signed char ContactCheckRigidIdx6{ -1 };
    signed char ContactCheckRigidIdx7{ -1 };
    signed char ContactCheckRigidIdx8{ -1 };
    signed char ContactCheckRigidIdx9{ -1 };
    signed char ContactCheckRigidIdx10{ -1 };
    signed char ContactCheckRigidIdx11{ -1 };
    signed char ContactCheckRigidIdx12{ -1 };
    signed char ContactCheckRigidIdx13{ -1 };
    signed char ContactCheckRigidIdx14{ -1 };
    signed char ContactCheckRigidIdx15{ -1 };
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::SOUND_CHR_PHYSICS_SE_PARAM_ST) == 56,
    "SOUND_CHR_PHYSICS_SE_PARAM_ST paramdef size does not match detected size");
