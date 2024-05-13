/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct RESIST_CORRECT_PARAM_ST {
    /**
     * @brief Addition after the first activation pt
     *
     * A value that is added to the resistance value after the abnormal
     * condition is activated once.
     */
    float addPoint1{ 0.f };

    /**
     * @brief Addition after the second activation pt
     *
     * A value that is added to the resistance value after the abnormal
     * condition is activated twice.
     */
    float addPoint2{ 0.f };

    /**
     * @brief Addition after the third activation pt
     *
     * A value that is added to the resistance value after the abnormal
     * condition is activated 3 times.
     */
    float addPoint3{ 0.f };

    /**
     * @brief Addition after the 4th activation pt
     *
     * A value that is added to the resistance value after the abnormal
     * condition is activated 4 times.
     */
    float addPoint4{ 0.f };

    /**
     * @brief Addition after the 5th activation pt
     *
     * A value that is added to the resistance value after the abnormal
     * condition is activated 5 times.
     */
    float addPoint5{ 0.f };

    /**
     * @brief Magnification after the first activation
     *
     * Magnification applied to the resistance value after the abnormal
     * condition is activated once
     */
    float addRate1{ 1.f };

    /**
     * @brief Magnification after the second activation
     *
     * Magnification applied to the resistance value after the abnormal
     * condition is activated twice
     */
    float addRate2{ 1.f };

    /**
     * @brief Magnification after the third activation
     *
     * Magnification applied to the resistance value after the abnormal
     * condition is activated 3 times
     */
    float addRate3{ 1.f };

    /**
     * @brief Magnification after the 4th activation
     *
     * Magnification applied to the resistance value after the abnormal
     * condition is activated 4 times
     */
    float addRate4{ 1.f };

    /**
     * @brief Magnification after the 5th activation
     *
     * Magnification applied to the resistance value after the abnormal
     * condition is activated 5 times
     */
    float addRate5{ 1.f };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::RESIST_CORRECT_PARAM_ST) == 40,
    "RESIST_CORRECT_PARAM_ST paramdef size does not match detected size");
