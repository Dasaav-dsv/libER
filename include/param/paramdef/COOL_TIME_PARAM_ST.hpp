/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct COOL_TIME_PARAM_ST {
    /**
     * @brief Time limit (0 cooperating spirits)
     *
     * Time limit [sec] (number of cooperating spirits 0)
     */
    float limitationTime_0{ 0.f };

    /**
     * @brief Monitoring time (0 number of cooperating spirits)
     *
     * Monitoring time [sec] (number of cooperating spirits 0)
     */
    float observeTime_0{ 0.f };

    /**
     * @brief Time limit (number of cooperating spirits 1)
     *
     * Time limit [sec] (number of cooperating spirits 1)
     */
    float limitationTime_1{ 0.f };

    /**
     * @brief Monitoring time (number of cooperating spirits 1)
     *
     * Monitoring time [sec] (number of cooperating spirits 1)
     */
    float observeTime_1{ 0.f };

    /**
     * @brief Time limit (2 cooperating spirits)
     *
     * Time limit [sec] (number of cooperating spirits 2)
     */
    float limitationTime_2{ 0.f };

    /**
     * @brief Monitoring time (2 cooperating spirits)
     *
     * Monitoring time [sec] (number of cooperating spirits 2)
     */
    float observeTime_2{ 0.f };

    /**
     * @brief Time limit (3 cooperating spirits)
     *
     * Time limit [sec] (number of cooperating spirits 3)
     */
    float limitationTime_3{ 0.f };

    /**
     * @brief Monitoring time (3 cooperating spirits)
     *
     * Monitoring time [sec] (number of cooperating spirits 3)
     */
    float observeTime_3{ 0.f };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::COOL_TIME_PARAM_ST) == 32,
    "COOL_TIME_PARAM_ST paramdef size does not match detected size");
