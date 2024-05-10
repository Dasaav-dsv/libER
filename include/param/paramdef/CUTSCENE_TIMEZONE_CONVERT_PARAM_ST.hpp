/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct CUTSCENE_TIMEZONE_CONVERT_PARAM_ST {
    float SrcTimezoneStart{ 0 };
    float DstCutscenTime{ 0 };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::CUTSCENE_TIMEZONE_CONVERT_PARAM_ST) == 8,
    "CUTSCENE_TIMEZONE_CONVERT_PARAM_ST paramdef size does not match detected "
    "size");
