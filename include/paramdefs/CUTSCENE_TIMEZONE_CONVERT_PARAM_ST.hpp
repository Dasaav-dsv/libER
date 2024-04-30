/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct CUTSCENE_TIMEZONE_CONVERT_PARAM_ST {
    float SrcTimezoneStart{ 0 };
    float DstCutscenTime{ 0 };
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::CUTSCENE_TIMEZONE_CONVERT_PARAM_ST) == 8,
    "CUTSCENE_TIMEZONE_CONVERT_PARAM_ST paramdef size does not match detected "
    "size");
