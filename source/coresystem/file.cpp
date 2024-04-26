#include <coresystem/file/file.hpp>
#include <dantelion2/fileio.hpp>
#include <dantelion2/kernel_runtime.hpp>
#include <detail/functions.hpp>
#include <detail/literal_string.hpp>
#include <detail/singleton.hpp>

#include <algorithm>
#include <unordered_map>

#include "file_wwise.inl"

using namespace from;
namespace fs = std::filesystem;

LIBER_SINGLETON_INSTANCE(CS::CSFileImp);
LIBER_SINGLETON_INSTANCE(CS::CSFD4MoWwisebankRepositoryImp);

#define LIBER_RESOURCE_EXTENSION(EXT)    \
    { fs::path(LIBER_STRINGIFY(.##EXT)), \
        liber::symbol<LIBER_STRINGIFY(   \
            CS::CSFile::make_##EXT##_file_cap)>::get() },

const auto& get_extension_map() {
    // clang-format off
    static std::unordered_map<fs::path, void*> extension_map = {
#include <coresystem/file/resource_extensions.inl>
    };
    // clang-format on
    return extension_map;
}

#undef LIBER_RESOURCE_EXTENSION

void file_request::init_request() {
    if (this->type != file_request::LOAD)
        this->unload_file = true;
    auto file_manager = DLIO::DLFileDeviceManager::instance();
    this->is_vfs_path = file_manager.reference().is_virtual_path(this->path);
    if (!this->is_vfs_path) {
        this->path = std::filesystem::absolute(this->path);
        if (!fs::exists(this->path))
            throw fs::filesystem_error("file does not exist", this->path,
                std::make_error_code(std::errc::no_such_file_or_directory));
    }
    const auto& extension_map = get_extension_map();
    fs::path extension = this->path.extension();
    if (extension == L".dcx")
        this->path.replace_extension();
    extension = this->path.extension();
    auto iter = extension_map.find(extension);
    if (iter != extension_map.end())
        this->loader = (file_request::loader_type)iter->second;
    else if (!extension.compare(L".bnk"))
        this->file_extension = file_extension_type::BNK;
    else if (!extension.compare(L".wem"))
        this->file_extension = file_extension_type::WEM;
    else
        throw fs::filesystem_error("unsupported file format", extension,
            std::make_error_code(std::errc::not_supported));
    if (this->file_extension == file_extension_type::WEM) {
        auto& [overrides, mutex] = wem_overrides();
        std::unique_lock lock{ mutex };
        switch (this->type) {
        case file_request::LOAD:
            overrides.emplace(path.filename(), path);
            break;
        case file_request::RELOAD:
            overrides.insert_or_assign(path.filename(), path);
            break;
        case file_request::UNLOAD:
            overrides.erase(path.filename());
            break;
        }
    }
    this->task->register_task(CS::CSTaskGroup::FileStepUpdate_Begin);
}

liber::optref<FD4::FD4ResRep> get_file_repository(bool load_bnk) {
    if (load_bnk)
        return CS::CSFD4MoWwisebankRepositoryImp::instance();
    auto csfile = CS::CSFileImp::instance();
    if (!csfile.has_reference())
        return std::nullopt;
    return *csfile.reference().get_file_repository();
}

void load_file_cap(const fs::path& path, file_request::loader_type loader,
    bool load_bnk) {
    if (!load_bnk) {
        FD4::FD4FileCap* file_cap =
            loader(&CS::CSFileImp::instance().reference(), path.c_str(),
                nullptr, nullptr, nullptr, nullptr);
        file_cap->ref_count() = 0x4000'0000;
        return;
    }
    fs::path file = path.filename();
    file.replace_extension();
    FD4::FD4FileCap* file_cap =
        liber::function<"CS::CSFD4MoWwisebankRepositoryImp::load_soundbank",
            FD4::FD4FileCap*>::
            call(&CS::CSFD4MoWwisebankRepositoryImp::instance().reference(),
                file.c_str(), file.c_str(), false);
    file_cap->ref_count() = 0x4000'0000;
    auto& [overrides, mutex] = bnk_overrides();
    std::unique_lock lock{ mutex };
    overrides.insert_or_assign(path.filename(), path);
}

void file_request::file_request_task::eztask_execute(FD4::FD4TaskData*) {
    file_request& request = this->request;
    if (request.ready())
        return;
    bool load_bnk = request.file_extension == file_extension_type::BNK;
    bool load_wem = request.file_extension == file_extension_type::WEM;
    if (load_bnk || load_wem) {
        if (!is_init_loaded())
            return;
        override_wwise_loader_once();
        if (load_wem) {
            request.is_ready.test_and_set();
            request.is_ready.notify_all();
            request.task.reset();
            return;
        }
    }
    auto file_rep_opt = get_file_repository(load_bnk);
    if (!file_rep_opt.has_reference())
        return;
    FD4::FD4FileCapHolder& holder = file_rep_opt.reference().get_file_holder();
    FD4::FD4FileCap* existing = nullptr;
    if (load_bnk)
        existing = holder.get_file_cap(request.path.stem());
    else
        existing = holder.get_file_cap(request.path);
    if (request.unload_file) {
        if (existing)
            std::destroy_at(existing);
        existing = nullptr;
        request.unload_file = false;
    }
    switch (request.type) {
    case file_request::LOAD:
    case file_request::RELOAD:
        if (!existing) {
            load_file_cap(request.path, request.loader, load_bnk);
            return;
        }
        if (!load_bnk && !existing->ready()
            || load_bnk && !is_bank_ready(existing))
            return;
        break;
    case file_request::UNLOAD:
        existing = nullptr;
        break;
    }
    request.file_cap = existing;
    request.is_ready.test_and_set();
    request.is_ready.notify_all();
    request.task.reset();
};

#define LIBER_RESOURCE_REPOSITORY(NAME)                                        \
    case CS::CSResourceRepository::NAME:                                       \
        res_repository = *reinterpret_cast<uintptr_t*>(                        \
            liber::symbol<LIBER_STRINGIFY(CS::##NAME##Imp::instance)>::get()); \
        break;

void from::resource_request::resource_request_task::eztask_execute(
    FD4::FD4TaskData*) {
    resource_request& request = this->request;
    if (request.file && !request.file->ready())
        return;
    uintptr_t res_repository = 0;
    switch (request.repository) {
#include <coresystem/file/resource_repositories.inl>
    };
    if (!res_repository)
        return;
    size_t holder_offset = 0x78;
    switch (request.repository) {
    case CS::CSResourceRepository::CSGparamRepository:
        holder_offset += 0x18;
        break;
    }
    FD4::FD4ResCapHolder* res_cap_holder =
        reinterpret_cast<FD4::FD4ResCapHolder*>(res_repository + holder_offset);
    auto hash = DLTX::string_hash{ request.resource.c_str() };
    request.res_cap = res_cap_holder->get_res_cap(&hash);
    request.is_ready.test_and_set();
    request.is_ready.notify_all();
    request.task.reset();
}

#undef LIBER_RESOURCE_REPOSITORY
