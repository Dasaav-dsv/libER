/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct RESIST_CORRECT_PARAM_ST {
    float addPoint1{ 0 };
    float addPoint2{ 0 };
    float addPoint3{ 0 };
    float addPoint4{ 0 };
    float addPoint5{ 0 };
    float addRate1{ 1 };
    float addRate2{ 1 };
    float addRate3{ 1 };
    float addRate4{ 1 };
    float addRate5{ 1 };
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::RESIST_CORRECT_PARAM_ST) == 40,
    "RESIST_CORRECT_PARAM_ST paramdef size does not match detected size");
