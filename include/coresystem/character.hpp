/**
 * @file character.hpp
 * @brief Character instance and data interfaces
 * 
 * Copyright 2024 libER ELDEN RING API library
 * 
 */
#pragma once

#include <detail/preprocessor.hpp>
#include <coresystem/field.hpp>

namespace from {
namespace CS {
class ChrIns : public FieldInsBase {
public:
    FD4_RUNTIME_CLASS(ChrIns);
};
}
}