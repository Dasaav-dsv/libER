/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct PERFORMANCE_CHECK_PARAM {
    unsigned char workTag{ 0 };
    unsigned char categoryTag{ 0 };
    unsigned char compareType{ 0 };
    unsigned char dummy1[1];
    float compareValue{ 0 };
    unsigned char dummy2[8];
    wchar_t userTag[16];
};

}; // namespace paramdef
}; // namespace from
