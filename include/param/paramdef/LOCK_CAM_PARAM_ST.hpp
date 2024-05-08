/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct LOCK_CAM_PARAM_ST {
    float camDistTarget{ 4 };
    float rotRangeMinX{ -40 };
    float lockRotXShiftRatio{ 0.6 };
    float chrOrgOffset_Y{ 1.42 };
    float chrLockRangeMaxRadius{ 15 };
    float camFovY{ 43 };
    float chrLockRangeMaxRadius_forD{ -1 };
    float chrLockRangeMaxRadius_forPD{ -1 };
    float closeMaxHeight{ 0 };
    float closeMinHeight{ 0 };
    float closeAngRange{ 0 };
    float closeMaxRadius{ 0 };
    float closeMaxRadius_forD{ 0 };
    float closeMaxRadius_forPD{ 0 };
    float bulletMaxRadius{ 0 };
    float bulletMaxRadius_forD{ 0 };
    float bulletMaxRadius_forPD{ 0 };
    float bulletAngRange{ 0 };
    float lockTgtKeepTime{ 2 };
    float chrTransChaseRateForNormal{ -1 };
    unsigned char pad[48];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::LOCK_CAM_PARAM_ST) == 128,
    "LOCK_CAM_PARAM_ST paramdef size does not match detected size");
