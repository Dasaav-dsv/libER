/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct WHITE_SIGN_COOL_TIME_PARAM_ST {
    /**
     * @brief Time limit (normal, no finger)
     *
     * Time limit [sec] (normal, dry fingerless)
     */
    float limitationTime_Normal{ 0.f };

    /**
     * @brief Time limit (normal, with fingers)
     *
     * Time limit [sec] (normal / dry finger)
     */
    float limitationTime_NormalDriedFinger{ 0.f };

    /**
     * @brief Time limit (map protection, no fingers)
     *
     * Time limit [sec] (Map guardian, dry fingerless)
     */
    float limitationTime_Guardian{ 0.f };

    /**
     * @brief Time limit (map protection, with fingers)
     *
     * Time limit [sec] (Map guardian / dry finger)
     */
    float limitationTime_GuardianDriedFinger{ 0.f };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::WHITE_SIGN_COOL_TIME_PARAM_ST) == 16,
    "WHITE_SIGN_COOL_TIME_PARAM_ST paramdef size does not match detected size");
