/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct LOAD_BALANCER_NEW_DRAW_DIST_SCALE_PARAM_ST {
    unsigned char DrawDist_LvBegin{ 21 };
    unsigned char DrawDist_LvEnd{ 21 };
    unsigned char reserve0[2];
    float DrawDist_ScaleBegin{ 1 };
    float DrawDist_ScaleEnd{ 1 };
    unsigned char ShadwDrawDist_LvBegin{ 21 };
    unsigned char ShadwDrawDist_LvEnd{ 21 };
    unsigned char reserve1[2];
    float ShadwDrawDist_ScaleBegin{ 1 };
    float ShadwDrawDist_ScaleEnd{ 1 };
    unsigned char reserve2[24];
};

}; // namespace paramdefs
}; // namespace from

static_assert(
    sizeof(from::paramdefs::LOAD_BALANCER_NEW_DRAW_DIST_SCALE_PARAM_ST) == 48,
    "LOAD_BALANCER_NEW_DRAW_DIST_SCALE_PARAM_ST paramdef size does not match "
    "detected size");
