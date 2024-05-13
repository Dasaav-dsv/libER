/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct LEGACY_DISTANT_VIEW_PARTS_REPLACE_PARAM {
    /**
     * @brief Map ID
     *
     * Specify the target map ID. Legacy only. (m12_34_56_78 → 12345678).
     * Initially it was only legacy, but it also supports open celestial sphere
     * maps
     */
    int TargetMapId{ -1 };

    /**
     * @brief Natural disaster event ID
     *
     * If you enter the target natural disaster event ID from "300, 310, 311 and
     * 312", it will be [natural disaster replacement data]. If it is 0 or
     * blank, it will be [Regional ID switching data] (SEQ16039).
     */
    unsigned int TargetEventId{ 0 };

    /**
     * @brief Replacement source asset ID
     *
     * Replacement source AssetId: AEG123_456_9999 → 123456
     */
    int SrcAssetId{ -1 };

    /**
     * @brief Replacement source asset part ID
     *
     * Replacement source PartsNo: AEG123_456_9999 → 9999
     */
    int SrcAssetPartsNo{ -1 };

    /**
     * @brief Replacement destination asset ID
     *
     * Replacement destination AssetId: AEG123_456_9999 → 123456
     */
    int DstAssetId{ -1 };

    /**
     * @brief Replacement destination asset part ID
     *
     * Replacement destination PartsNo: AEG123_456_9999 → 9999
     */
    int DstAssetPartsNo{ -1 };

    /**
     * @brief Replacement source asset ID range specification Min
     */
    int SrcAssetIdRangeMin{ -1 };

    /**
     * @brief Replacement source asset ID range specification Max
     */
    int SrcAssetIdRangeMax{ -1 };

    /**
     * @brief Replacement destination asset ID range specification Min
     */
    int DstAssetIdRangeMin{ -1 };

    /**
     * @brief Replacement destination asset ID range specification Max
     */
    int DstAssetIdRangeMax{ -1 };

    /**
     * @brief Local ID limit 0
     *
     * MapGD Local ID restriction 0: Valid only when "Natural disaster event ID"
     * is 0. The part is valid only with the MapGD local ID you set (SEQ16039).
     */
    signed char LimitedMapRegionId0{ -1 };

    /**
     * @brief Local ID limit 1
     *
     * MapGD Local ID Restriction 1: Valid only when "Natural Disaster Event ID"
     * is 0. The part is valid only with the MapGD local ID you set (SEQ16039).
     */
    signed char LimitedMapRegionId1{ -1 };

    /**
     * @brief Local ID limit 2
     *
     * MapGD Local ID restriction 2: Valid only when "Natural disaster event ID"
     * is 0. The part is valid only with the MapGD local ID you set (SEQ16039).
     */
    signed char LimitedMapRegionId2{ -1 };

    /**
     * @brief Local ID limit 3
     *
     * MapGD Local ID restriction 3: Valid only when "Natural disaster event ID"
     * is 0. The part is valid only with the MapGD local ID you set (SEQ16039).
     */
    signed char LimitedMapRegionId3{ -1 };

    unsigned char reserve[4];

    /**
     * @brief Local restricted asset ID
     *
     * MapGD Valid assets specified by local ID: AssetId: AEG123_456_9999 →
     * 123456
     */
    int LimitedMapRegionAssetId{ -1 };

    /**
     * @brief Local restriction asset part ID
     *
     * MapGD Valid assets specified by local ID: PartsNo: AEG123_456_9999 → 9999
     */
    int LimitedMapRegioAssetPartsNo{ -1 };

    /**
     * @brief Local restriction asset ID range specification Min
     *
     * MapGD Valid asset specification with local ID: Asset ID range
     * specification Min
     */
    int LimitedMapRegioAssetIdRangeMin{ -1 };

    /**
     * @brief Local limit asset ID range specification Max
     *
     * MapGD Valid asset specification for local ID: Asset ID range
     * specification Max
     */
    int LimitedMapRegioAssetIdRangeMax{ -1 };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::LEGACY_DISTANT_VIEW_PARTS_REPLACE_PARAM)
                  == 64,
    "LEGACY_DISTANT_VIEW_PARTS_REPLACE_PARAM paramdef size does not match "
    "detected size");
