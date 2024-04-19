/**
 * @file file.hpp
 * @brief Namespace CS file and resource loading
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */
#pragma once

#include <detail/optref.hpp>
#include <detail/preprocessor.hpp>
#include <fd4/detail/singleton.hpp>
#include <fd4/resource.hpp>
#include <memory/from_unique_ptr.hpp>

#include <filesystem>
#include <string>

namespace from {
namespace CS {
enum class CSResourceRepository {
#define LIBER_RESOURCE_REPOSITORY(NAME) NAME,
#include <coresystem/file/resource_repositories.inl>
#undef LIBER_RESOURCE_REPOSITORY
};

class CSFileImp {
public:
    FD4_SINGLETON_CLASS(CSFileImp);

    LIBERAPI void load_resource_file(const std::filesystem::path& file);

    LIBERAPI liber::optref<FD4::FD4ResCap> get_resource(
        CSResourceRepository repository, const std::wstring& resource,
        const std::filesystem::path& file = std::filesystem::path{});
};
} // namespace CS
} // namespace from
