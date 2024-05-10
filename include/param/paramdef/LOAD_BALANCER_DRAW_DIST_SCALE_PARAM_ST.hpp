/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct LOAD_BALANCER_DRAW_DIST_SCALE_PARAM_ST {
    float Lv00{ 1 };
    float Lv01{ 1 };
    float Lv02{ 1 };
    float Lv03{ 1 };
    float Lv04{ 1 };
    float Lv05{ 1 };
    float Lv06{ 1 };
    float Lv07{ 1 };
    float Lv08{ 1 };
    float Lv09{ 1 };
    float Lv10{ 1 };
    float Lv11{ 1 };
    float Lv12{ 1 };
    float Lv13{ 1 };
    float Lv14{ 1 };
    float Lv15{ 1 };
    float Lv16{ 1 };
    float Lv17{ 1 };
    float Lv18{ 1 };
    float Lv19{ 1 };
    float Lv20{ 1 };
    unsigned char reserve[44];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::LOAD_BALANCER_DRAW_DIST_SCALE_PARAM_ST)
                  == 128,
    "LOAD_BALANCER_DRAW_DIST_SCALE_PARAM_ST paramdef size does not match "
    "detected size");
