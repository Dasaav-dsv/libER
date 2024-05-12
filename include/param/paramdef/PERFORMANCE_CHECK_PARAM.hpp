/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct PERFORMANCE_CHECK_PARAM {
    /**
     * @brief Report destination_Job type tag
     */
    unsigned char workTag{ 0 };

    /**
     * @brief Report destination_category tag
     */
    unsigned char categoryTag{ 0 };

    /**
     * @brief Comparison symbol
     */
    unsigned char compareType{ 0 };

    /**
     * @brief Reservation 1
     */
    unsigned char dummy1[1];

    /**
     * @brief Comparison value
     */
    float compareValue{ 0.f };

    /**
     * @brief Reservation 2
     */
    unsigned char dummy2[8];

    /**
     * @brief Report destination_user tag
     *
     * Report to_Performance person tag
     */
    wchar_t userTag[16];
};

}; // namespace paramdef
}; // namespace from
