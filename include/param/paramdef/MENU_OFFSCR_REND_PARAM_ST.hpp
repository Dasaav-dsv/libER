/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct MENU_OFFSCR_REND_PARAM_ST {
    float camAtPosX{ 0 };
    float camAtPosY{ 0 };
    float camAtPosZ{ 0 };
    float camDist{ 10 };
    float camRotX{ 0 };
    float camRotY{ 0 };
    float camFov{ 49 };
    float camDistMin{ 0 };
    float camDistMax{ 100 };
    float camRotXMin{ -89 };
    float camRotXMax{ 89 };
    unsigned int GparamID{ 10 };
    unsigned int envTexId{ 10 };
    unsigned int Grapm_ID_forPS4{ 10 };
    unsigned int Grapm_ID_forXB1{ 10 };
    unsigned char pad[4];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::MENU_OFFSCR_REND_PARAM_ST) == 64,
    "MENU_OFFSCR_REND_PARAM_ST paramdef size does not match detected size");
