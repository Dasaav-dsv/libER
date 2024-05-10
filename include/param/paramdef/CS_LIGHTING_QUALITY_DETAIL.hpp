/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct CS_LIGHTING_QUALITY_DETAIL {
    float localLightDistFactor{ 0.75 };
    bool localLightShadowEnabled{ true };
    bool forwardPassLightingEnabled{ true };
    unsigned char localLightShadowSpecLevelMax{ 1 };
    unsigned char dmy[1];
};

}; // namespace paramdef
}; // namespace from
