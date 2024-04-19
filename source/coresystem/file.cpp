#include <coresystem/file/file.hpp>
#include <detail/literal_string.hpp>
#include <detail/singleton.hpp>
#include <detail/symbols.hpp>

#include <cstddef>
#include <cstdint>
#include <unordered_map>

using namespace from;

namespace fs = std::filesystem;

LIBER_SINGLETON_INSTANCE(CS::CSFileImp);

using make_file_cap = FD4::FD4FileCap* (*)(CS::CSFileImp*, const wchar_t*,
    size_t, size_t, size_t, size_t);

#define LIBER_RESOURCE_EXTENSION(EXT)                                  \
    { fs::path(LIBER_STRINGIFY(.##EXT)),                               \
        reinterpret_cast<make_file_cap>(liber::symbol<LIBER_STRINGIFY( \
                CS::CSFile::make_##EXT##_file_cap)>::get()) },

const auto& get_extension_map() {
    // clang-format off
    static std::unordered_map<fs::path, make_file_cap> extension_map = {
#include <coresystem/file/resource_extensions.inl>
    };
    // clang-format on
    return extension_map;
}

#undef LIBER_RESOURCE_EXTENSION

void CS::CSFileImp::load_resource_file(const fs::path& file) {
    const auto& extension_map = get_extension_map();
    auto iter = extension_map.find(file.extension());
    if (iter == extension_map.end())
        return;
    FD4::FD4FileCap* file_cap =
        iter->second(this, file.wstring().c_str(), 0, 0, 0, 0);
    // Don't actually force the file loading!
    // It may interrupt the load process of more complex resources.
    // file_cap->force_file_load();
}

#define LIBER_RESOURCE_REPOSITORY(NAME)                                        \
    case CS::CSResourceRepository::NAME:                                       \
        res_repository = *reinterpret_cast<uintptr_t*>(                        \
            liber::symbol<LIBER_STRINGIFY(CS::##NAME##Imp::instance)>::get()); \
        break;

liber::optref<FD4::FD4ResCap> CS::CSFileImp::get_resource(
    CS::CSResourceRepository repository, const std::wstring& resource,
    const fs::path& file) {
    auto string_hash = DLTX::string_hash{ resource.c_str() };
    uintptr_t res_repository = 0;
    switch (repository) {
#include <coresystem/file/resource_repositories.inl>
    };
    if (!res_repository)
        return std::nullopt;
    int holder_offset = 0x78;
    switch (repository) {
    case CS::CSResourceRepository::CSGparamRepository:
        holder_offset += 0x18;
    }
    FD4::FD4ResCapHolder* res_cap_holder =
        reinterpret_cast<FD4::FD4ResCapHolder*>(res_repository + holder_offset);
    FD4::FD4ResCap* result = res_cap_holder->get_res_cap(&string_hash);
    if (result)
        return *result;
    if (!file.empty())
        this->load_resource_file(file);
    return std::nullopt;
}

#undef LIBER_RESOURCE_REPOSITORY
