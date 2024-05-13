/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct CS_SHADER_QUALITY_DETAIL {
    /**
     * @brief SSS enabled
     */
    bool sssEnabled{ true };

    /**
     * @brief Tessellation enabled
     */
    bool tessellationEnabled{ false };

    /**
     * @brief High precision normal effective
     *
     * High precision normal valid (setting the accuracy of the normal stored in
     * G-Buffer)
     */
    bool highPrecisionNormalEnabled{ false };

    /**
     * @brief dmy
     */
    char dmy[1];
};

}; // namespace paramdef
}; // namespace from
