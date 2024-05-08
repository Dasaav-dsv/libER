/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct CS_SHADOW_QUALITY_DETAIL {
    bool enabled{ true };
    unsigned char maxFilterLevel{ 1 };
    unsigned char dmy[2];
    unsigned int textureSizeScaler{ 1 };
    unsigned int textureSizeDivider{ 2 };
    unsigned int textureMinSize{ 128 };
    unsigned int textureMaxSize{ 1024 };
    int blurCountBias{ -1 };
};

}; // namespace paramdefs
}; // namespace from
