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
/**
 * @brief All resource repositories supported by libER.
 *
 * Use with @ref from::resource_request to acquire stored resources.
 *
 */
enum class CSResourceRepository {
#define LIBER_RESOURCE_REPOSITORY(NAME) NAME,
/// @cond DOXYGEN_SKIP
#include <coresystem/file/resource_repositories.inl>
/// @endcond
#undef LIBER_RESOURCE_REPOSITORY
};

/**
 * @brief A singleton responsible for file management.
 *
 * Stores a resource repository where the resources are file capsules.
 *
 */
class CSFileImp {
public:
    FD4_SINGLETON_CLASS(CSFileImp);

    virtual ~CSFileImp() LIBER_INTERFACE_ONLY;

    /**
     * @brief Get the file repository.
     *
     * @return FD4::FD4ResRep* pointer to the file repository
     */
    FD4::FD4ResRep* get_file_repository() noexcept {
        return this->file_repository;
    }

private:
    FD4::FD4ResRep* file_repository;
};

/**
 * @brief File repository for Wwise banks.
 *
 * Like CS::CSFileRepository, but for Wwise audio bank files.
 *
 */
class CSFD4MoWwisebankRepositoryImp : public FD4::FD4ResRep {
public:
    FD4_SINGLETON_CLASS(CSFD4MoWwisebankRepositoryImp);

    virtual ~CSFD4MoWwisebankRepositoryImp() LIBER_INTERFACE_ONLY;
};
} // namespace CS

/**
 * @brief Asynchronous file loading using the file capsule system.
 *
 * Request a file to be loaded/unloaded/reloaded from disk or a .bdt
 * ELDEN RING archive. The operation is executed asynchronously and
 * the result may be acquired from the request whenever it is ready.
 *
 * @note Has a throwing constructor: if a file on disk is not found,
 * or if a file extension is not supported, an std::filesystem::filesystem_error
 * is thrown.
 *
 */
class file_request {
public:
    /**
     * @brief Supported request types.
     *
     * LOAD: Load the requested file. If a file with the same name
     * is already loaded, return it instead.
     *
     * RELOAD: Load the requested file. If a file with the same name
     * is already loaded, unload it and use the path provided instead.
     *
     * UNLOAD: Unload the requested file. Does nothing if no files
     * with a matching name are loaded.
     *
     */
    enum file_request_type : char {
        LOAD = 0,
        RELOAD = 1,
        UNLOAD = 2
    };

    /**
     * @brief Construct a new file request.
     *
     * By default, the base working directory for relative paths
     * is ELDEN RING/Game.
     *
     * Paths with an ELDEN RING virtual filesystem root will
     * be treated as such, and the requested file will be loaded
     * from a .bdt archive.
     *
     * @see @ref from::file_request::file_request_type
     *
     * @param file a path to the file
     * @param type the request type
     *
     * @throws std::filesystem::filesystem_error if a file on disk is not found,
     * or if a file extension is not supported
     */
    file_request(const std::filesystem::path& file, file_request_type type)
        : path(file), type(type) {
        this->init_request();
    }

    /**
     * @brief Construct a new file request (path move constructor).
     *
     * By default, the base working directory for relative paths
     * is ELDEN RING/Game.
     *
     * Paths with an ELDEN RING virtual filesystem root will
     * be treated as such, and the requested file will be loaded
     * from a .bdt archive.
     *
     * @see @ref from::file_request::file_request_type
     *
     * @param file a path to the file
     * @param type the request type
     *
     * @throws std::filesystem::filesystem_error if a file on disk is not found,
     * or if a file extension is not supported
     */
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

    /**
     * @brief Check if the file request is ready.
     *
     * Does not block.
     *
     * @note A file request finishing does not mean it contains
     * a value; it's possible the file was not found.
     *
     * @return true
     * @return false
     */
    bool ready() const noexcept {
        return is_ready.test();
    }

    /**
     * @brief Block until the file request is ready and get the result.
     *
     * @note Polling may be preferrable to blocking in an environment
     * where a deadlock may occur. Never call this method from a task.
     *
     * A file request finishing does not mean it contains
     * a value; it's possible the file was not found.
     *
     * @see Polling options: @ref from::file_request::ready,
     * @ref from::file_request::check
     *
     * @return liber::optref<FD4::FD4FileCap>
     */
    liber::optref<FD4::FD4FileCap> get() const noexcept {
        this->is_ready.wait(false);
        return this->check();
    }

    /**
     * @brief Get the request result whether it had finished or not.
     *
     * The absense of a value does not indicate that the request is still
     * not ready, as it simply may have failed to find the file.
     * Use @ref from::file_request::ready for that purpose instead.
     *
     * @return liber::optref<FD4::FD4FileCap>
     */
    liber::optref<FD4::FD4FileCap> check() const noexcept {
        if (!this->file_cap)
            return std::nullopt;
        return *this->file_cap;
    }

    /**
     * @brief File capsule loader callback signature, for internal use.
     *
     */
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
        LIBERAPI void eztask_execute(FD4::FD4TaskData*) override;
        file_request& request;
    };
    from::unique_ptr<file_request_task> task =
        from::make_unique<file_request_task>(*this);
};

/**
 * @brief Asynchronous resource loading using the resource capsule system.
 *
 * Request a resource to be loaded/unloaded/reloaded from a specified resource
 * repository and a file (if provided). The operation is executed asynchronously
 * and the result may be acquired from the request whenever it is ready.
 *
 * @note Has a throwing constructor (@ref from::file_request): if a file on disk
 * is not found, or if a file extension is not supported, an
 * std::filesystem::filesystem_error is thrown.
 *
 */
class resource_request {
public:
    /**
     * @brief Construct a new resource request.
     * 
     * @param repository the repository to search for the resource
     * @param resource the name of the resource
     * @param source a file path passed to @ref from::file_request (optional)
     */
    resource_request(CS::CSResourceRepository repository,
        const std::wstring& resource,
        const std::filesystem::path& source = std::filesystem::path{})
        : repository(repository), resource(resource),
          file(!source.empty() ? new file_request(source, file_request::LOAD)
                               : nullptr) {
        this->task->register_task(CS::CSTaskGroup::FileStepUpdate_End);
    }

    /**
     * @brief Construct a new resource request (string move constructor).
     * 
     * @param repository the repository to search for the resource
     * @param resource the name of the resource
     * @param source a file path passed to @ref from::file_request (optional)
     */
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

    /**
     * @brief Check if the resource request is ready.
     *
     * Does not block.
     *
     * @note A resource request finishing does not mean it contains
     * a value; it's possible the resource was not found.
     *
     * @return true
     * @return false
     */
    bool ready() const noexcept {
        return is_ready.test();
    }

    /**
     * @brief Block until the resource request is ready and get the result.
     *
     * @note Polling may be preferrable to blocking in an environment
     * where a deadlock may occur. Never call this method from a task.
     *
     * A resource request finishing does not mean it contains
     * a value; it's possible the file was not found.
     *
     * @see Polling options: @ref from::resource_request::ready,
     * @ref from::file_request::check
     *
     * @return liber::optref<FD4::FD4ResCap>
     */
    liber::optref<FD4::FD4ResCap> get() const noexcept {
        this->is_ready.wait(false);
        return this->check();
    }

    /**
     * @brief Get the request result whether it had finished or not.
     *
     * The absense of a value does not indicate that the request is still
     * not ready, as it simply may have failed to find the resource.
     * Use @ref from::resource_request::ready for that purpose instead.
     *
     * @return liber::optref<FD4::FD4ResCap>
     */
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
        LIBERAPI void eztask_execute(FD4::FD4TaskData*) override;
        resource_request& request;
    };
    from::unique_ptr<resource_request_task> task =
        from::make_unique<resource_request_task>(*this);
};
} // namespace from
