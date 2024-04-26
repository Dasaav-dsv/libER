/**
 * @file file.hpp
 * @brief Namespace CS file and resource loading
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */
#pragma once

#include <coresystem/task.hpp>
#include <detail/optref.hpp>
#include <detail/preprocessor.hpp>
#include <fd4/detail/singleton.hpp>
#include <fd4/resource.hpp>
#include <memory/from_shared_ptr.hpp>
#include <memory/from_unique_ptr.hpp>

#include <atomic>
#include <filesystem>
#include <memory>
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

    virtual ~CSFileImp() LIBER_INTERFACE_ONLY;

    FD4::FD4ResRep* get_file_repository() noexcept {
        return this->file_repository;
    }

private:
    FD4::FD4ResRep* file_repository;
};

class CSFD4MoWwisebankRepositoryImp : public FD4::FD4ResRep {
public:
    FD4_SINGLETON_CLASS(CSFD4MoWwisebankRepositoryImp);

    virtual ~CSFD4MoWwisebankRepositoryImp() LIBER_INTERFACE_ONLY;
};
} // namespace CS

class file_request {
public:
    enum file_request_type : char {
        LOAD = 0,
        RELOAD = 1,
        UNLOAD = 2
    };

    file_request(const std::filesystem::path& file, file_request_type type)
        : path(file), type(type) {
        this->init_request();
    }

    file_request(std::filesystem::path&& file, file_request_type type)
        : path(file), type(type) {
        this->init_request();
    }

    file_request(const file_request&) = delete;
    file_request(file_request&&) noexcept = delete;

    file_request& operator=(const file_request&) = delete;
    file_request& operator=(file_request&&) noexcept = delete;

    ~file_request() noexcept {
        this->is_ready.test_and_set();
        this->is_ready.notify_all();
    }

    bool ready() const noexcept {
        return is_ready.test();
    }

    liber::optref<FD4::FD4FileCap> get() const noexcept {
        this->is_ready.wait(false);
        return this->check();
    }

    liber::optref<FD4::FD4FileCap> check() const noexcept {
        if (!this->file_cap)
            return std::nullopt;
        return *this->file_cap;
    }

    using loader_type = FD4::FD4FileCap* (*)(CS::CSFileImp*, const wchar_t*,
        void*, void*, void*, void*);

private:
    LIBERAPI void init_request();

    std::filesystem::path path;
    file_request_type type;
    bool is_vfs_path = false;
    bool unload_file = false;
    enum class file_extension_type : char {
        ANY = 0,
        BNK = 1,
        WEM = 2
    } file_extension = file_extension_type::ANY;
    loader_type loader = nullptr;
    FD4::FD4FileCap* file_cap = nullptr;
    mutable std::atomic_flag is_ready = ATOMIC_FLAG_INIT;
    struct file_request_task : public CS::CSEzTask {
        file_request_task(file_request& request) : request(request) {}
        void eztask_execute(FD4::FD4TaskData*) override;
        file_request& request;
    };
    from::unique_ptr<file_request_task> task =
        from::make_unique<file_request_task>(*this);
};

class resource_request {
public:
    resource_request(CS::CSResourceRepository repository,
        const std::wstring& resource,
        const std::filesystem::path& source = std::filesystem::path{})
        : repository(repository), resource(resource),
          file(!source.empty() ? new file_request(source, file_request::LOAD)
                               : nullptr) {
        this->task->register_task(CS::CSTaskGroup::FileStepUpdate_End);
    }

    resource_request(CS::CSResourceRepository repository,
        std::wstring&& resource,
        const std::filesystem::path& source = std::filesystem::path{})
        : repository(repository), resource(resource),
          file(!source.empty() ? new file_request(source, file_request::LOAD)
                               : nullptr) {
        this->task->register_task(CS::CSTaskGroup::FileStepUpdate_End);
    }

    resource_request(const resource_request&) = delete;
    resource_request(resource_request&&) noexcept = delete;

    resource_request& operator=(const resource_request&) = delete;
    resource_request& operator=(resource_request&&) noexcept = delete;

    ~resource_request() noexcept {
        this->is_ready.test_and_set();
        this->is_ready.notify_all();
    }

    bool ready() const noexcept {
        return is_ready.test();
    }

    liber::optref<FD4::FD4ResCap> get() const noexcept {
        this->is_ready.wait(false);
        return this->check();
    }

    liber::optref<FD4::FD4ResCap> check() const noexcept {
        if (!this->res_cap)
            return std::nullopt;
        return *this->res_cap;
    }

private:
    std::unique_ptr<file_request> file;
    CS::CSResourceRepository repository;
    std::wstring resource;
    FD4::FD4ResCap* res_cap = nullptr;
    mutable std::atomic_flag is_ready = ATOMIC_FLAG_INIT;
    struct resource_request_task : public CS::CSEzTask {
        resource_request_task(resource_request& request) : request(request) {}
        void eztask_execute(FD4::FD4TaskData*) override;
        resource_request& request;
    };
    from::unique_ptr<resource_request_task> task =
        from::make_unique<resource_request_task>(*this);
};
} // namespace from
