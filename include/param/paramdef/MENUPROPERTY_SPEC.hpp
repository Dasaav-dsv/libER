/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct MENUPROPERTY_SPEC {
    int CaptionTextID{ 0 };
    int IconID{ 0 };
    unsigned int RequiredPropertyID{ 0 };
    signed char CompareType{ 0 };
    unsigned char pad2[1];
    unsigned short FormatType{ 0 };
    unsigned char pad[16];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::MENUPROPERTY_SPEC) == 32,
    "MENUPROPERTY_SPEC paramdef size does not match detected size");
