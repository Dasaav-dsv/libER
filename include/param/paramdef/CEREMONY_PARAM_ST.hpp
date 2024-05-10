/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct CEREMONY_PARAM_ST {
    int eventLayerId{ 0 };
    int mapStudioLayerId{ 0 };
    int multiPlayAreaOffset{ 0 };
    int overrideMapPlaceNameId{ -1 };
    int overrideSaveMapNameId{ -1 };
    unsigned char pad2[16];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::CEREMONY_PARAM_ST) == 36,
    "CEREMONY_PARAM_ST paramdef size does not match detected size");
