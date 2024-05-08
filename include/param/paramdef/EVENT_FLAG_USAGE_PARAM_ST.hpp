/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct EVENT_FLAG_USAGE_PARAM_ST {
    unsigned char usageType{ 0 };
    unsigned char playlogCategory{ 0 };
    unsigned char padding1[2];
    int flagNum{ 1 };
    unsigned char padding2[24];
};

}; // namespace paramdefs
}; // namespace from
