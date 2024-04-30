/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct BULLET_CREATE_LIMIT_PARAM_ST {
    unsigned char limitNum_byGroup{ 0 };
    bool isLimitEachOwner : 1 { false };
    unsigned char pad2 : 7;
    unsigned char pad[30];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::BULLET_CREATE_LIMIT_PARAM_ST) == 32,
    "BULLET_CREATE_LIMIT_PARAM_ST paramdef size does not match detected size");
