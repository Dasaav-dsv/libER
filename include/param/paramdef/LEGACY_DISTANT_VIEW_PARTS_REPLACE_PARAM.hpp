/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct LEGACY_DISTANT_VIEW_PARTS_REPLACE_PARAM {
    int TargetMapId{ -1 };
    unsigned int TargetEventId{ 0 };
    int SrcAssetId{ -1 };
    int SrcAssetPartsNo{ -1 };
    int DstAssetId{ -1 };
    int DstAssetPartsNo{ -1 };
    int SrcAssetIdRangeMin{ -1 };
    int SrcAssetIdRangeMax{ -1 };
    int DstAssetIdRangeMin{ -1 };
    int DstAssetIdRangeMax{ -1 };
    signed char LimitedMapRegionId0{ -1 };
    signed char LimitedMapRegionId1{ -1 };
    signed char LimitedMapRegionId2{ -1 };
    signed char LimitedMapRegionId3{ -1 };
    unsigned char reserve[4];
    int LimitedMapRegionAssetId{ -1 };
    int LimitedMapRegioAssetPartsNo{ -1 };
    int LimitedMapRegioAssetIdRangeMin{ -1 };
    int LimitedMapRegioAssetIdRangeMax{ -1 };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::LEGACY_DISTANT_VIEW_PARTS_REPLACE_PARAM)
                  == 64,
    "LEGACY_DISTANT_VIEW_PARTS_REPLACE_PARAM paramdef size does not match "
    "detected size");
