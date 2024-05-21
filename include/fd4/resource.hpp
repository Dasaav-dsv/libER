/**
 * @file resource.hpp
 * @brief Namespace FD4 game resource management.
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */
#pragma once

#include <dantelion2/text.hpp>
#include <dantelion2/utility.hpp>
#include <detail/preprocessor.hpp>
#include <fd4/component.hpp>
#include <memory/from_allocator.hpp>

#include <filesystem>

namespace from {
namespace FD4 {
// Forward declarations
class FD4FileCap;
class FD4ResRep;

/**
 * @brief Structure internal to the file processing in ELDEN RING.
 *
 */
class FD4FileLoadProcess {
public:
    LIBERAPI virtual ~FD4FileLoadProcess();

private:
    FD4FileCap* file_cap;
    from::allocator<void> allocator;
    void* resource_load_queue;
    DLUT::DLReferenceCountPtr<DLUT::dummy_rfco> liber_unknown;
};

/**
 * @brief A single abstract item in a resource hash table.
 *
 * Can be a resource, file or even a repository.
 *
 */
class FD4ResCapHolderItem : public FD4ComponentBase {
public:
    FD4_RUNTIME_CLASS(FD4ResCapHolderItem);

    LIBERAPI virtual ~FD4ResCapHolderItem();

    /**
     * @brief Get the item name.
     *
     * @return DLTX::FD4BasicHashString& name
     */
    DLTX::FD4BasicHashString& name() {
        return this->res_name;
    }

    /**
     * @brief Get the item name (const).
     *
     * @return DLTX::FD4BasicHashString& name
     */
    const DLTX::FD4BasicHashString& name() const {
        return this->res_name;
    }

    /**
     * @brief Get the next item in the hash table.
     *
     * @return FD4ResCapHolderItem* next item (may be null)
     */
    FD4ResCapHolderItem* next() {
        return this->next_item;
    }

    /**
     * @brief Get the next item in the hash table (const).
     *
     * @return FD4ResCapHolderItem* next item (may be null)
     */
    const FD4ResCapHolderItem* next() const {
        return this->next_item;
    }

    /**
     * @brief Get the reference count of the item.
     *
     * @return size_t&
     */
    size_t& ref_count() {
        return this->rcount;
    }

    /**
     * @brief Get the reference count of the item (const).
     *
     * @return size_t&
     */
    const size_t& ref_count() const {
        return this->rcount;
    }

private:
    DLTX::FD4BasicHashString res_name;
    FD4ResRep* owning_repository;
    FD4ResCapHolderItem* next_item;
    size_t rcount;
};

/**
 * @brief The base of any resource, which can also be a file or a repository.
 *
 * Only differs from FD4::FD4ResCapHolderItem in having some debug members.
 * 
 */
class FD4ResCap : public FD4ResCapHolderItem {
public:
    FD4_RUNTIME_CLASS(FD4ResCap);

    LIBERAPI virtual ~FD4ResCap();

    /**
     * @brief Set the internal debugging state.
     * 
     * @note libER does not document this ELDEN RING debug property.
     * 
     * @param value on/off
     */
    virtual void set_debug(bool value) LIBER_INTERFACE;

    virtual void liber_unknown() LIBER_INTERFACE;

private:
    bool debug;
    bool liber_unknown;    // FD4BndMountDeviceCapSeed + 0x10
    void* debug_menu_item; // FD4::FD4DebugMenuItem
    bool liber_unknown;
};

/**
 * @brief A hash table of FD4::FD4ResCapHolderItems.
 * 
 */
class FD4ResCapHolder : public FD4ComponentBase {
public:
    FD4_RUNTIME_CLASS(FD4ResCapHolder);

    LIBERAPI virtual ~FD4ResCapHolder();

private:
    virtual from::allocator<void> get_allocator1() const noexcept {
        return this->allocator;
    }

    virtual from::allocator<void> get_allocator2() const noexcept {
        return this->allocator;
    }

    virtual from::allocator<void> get_allocator3() const noexcept {
        return this->allocator;
    }

public:
    /**
     * @brief Get the owning repository of this capsule holder.
     * 
     * @return FD4ResRep* pointer to the owner
     */
    virtual FD4ResRep* get_owner() noexcept {
        return this->owning_repository;
    }

    /**
     * @brief Get the owning repository of this capsule holder (const).
     * 
     * @return FD4ResRep* pointer to the owner
     */
    virtual FD4ResRep* get_owner() const noexcept {
        return this->owning_repository;
    }

    /**
     * @brief Get the capsule with the given name.
     * 
     * @param name resource name
     * @return FD4ResCap* pointer to the capsule (may be null) 
     */
    LIBERAPI FD4ResCap* get_res_cap(const std::wstring& name) const;

private:
    friend class FD4FileCapHolder;

    from::allocator<void> allocator;
    FD4ResRep* owning_repository;
    int liber_unknown;
    int capacity;
    FD4ResCapHolderItem** items;
};

/**
 * @brief A hash table of FD4::FD4FileCaps.
 * 
 * Used by file repositories.
 * 
 */
class FD4FileCapHolder : public FD4ResCapHolder {
public:
    FD4_RUNTIME_CLASS(FD4FileCapHolder);

    /**
     * @brief Get the file capsule with the given filename.
     * 
     * @param path the file path
     * @return FD4FileCap* pointer to the capsule (may be null) 
     */
    LIBERAPI FD4FileCap* get_file_cap(const std::filesystem::path& path) const;
};

/**
 * @brief States of file capsule processing.
 * 
 */
enum class FD4FileCapState : char {
    INITIAL = 0,
    QUEUED = 1,
    PROCESSING = 2,
    UNKNOWN = 3,
    READY = 4
};

/**
 * @brief Abstract file capsule class.
 * 
 */
class FD4FileCap : public FD4ResCap {
public:
    FD4_RUNTIME_CLASS(FD4FileCap);

    virtual ~FD4FileCap() = default;

    /**
     * @brief Get the processing state.
     * 
     * @return FD4FileCapState 
     */
    FD4FileCapState get_state() const noexcept {
        return this->state;
    }

    /**
     * @brief Get the load task associated with the capsule.
     * 
     * @return void* 
     */
    void* get_load_task() const noexcept {
        return this->load_task;
    };

    /**
     * @brief Has the file been fully processed?
     * 
     * @return true 
     * @return false 
     */
    bool ready() const noexcept {
        return this->state == FD4FileCapState::READY;
    }

private:
    virtual void liber_unknown() = 0;
    virtual void liber_unknown(DLTX::DLString*) = 0;
    virtual void* liber_unknown() = 0;
    virtual void* liber_unknown() = 0;
    virtual void* liber_unknown() = 0;

public:
    /**
     * @brief Request a file to be loaded with the specified load process.
     * 
     * @param load_process the load process
     */
    virtual void request_file_load(FD4FileLoadProcess* load_process) = 0;

    /**
     * @brief Force the loading of the file capsule's associated resources.
     * 
     * @note Does not work for all file capsule types.
     * 
     */
    virtual void force_file_load() = 0;

private:
    virtual void request_header_load() = 0;
    virtual void liber_unknown() = 0;
    virtual bool liber_unknown() = 0;
    virtual bool liber_unknown() = 0;

    FD4FileLoadProcess* load_process;
    void* load_task;
    FD4FileCapState state;
    char liber_unknown;
    short liber_unknown;
};

/**
 * @brief Abstract resource repository class.
 * 
 * A resource repository houses an FD4::FD4ResCapHolder instance,
 * which holds the repository's resources.
 * 
 */
class FD4ResRep : public FD4ResCap {
public:
    FD4_RUNTIME_CLASS(FD4ResRep);

    LIBERAPI virtual ~FD4ResRep();

    /**
     * @brief Get the resource capsule holder.
     * 
     * @return FD4ResCapHolder& the resource holder
     */
    FD4ResCapHolder& get_res_holder() noexcept {
        return this->res_holder;
    }

    /**
     * @brief Get the resource capsule holder (const).
     * 
     * @return FD4ResCapHolder& the resource holder
     */
    const FD4ResCapHolder& get_res_holder() const noexcept {
        return this->res_holder;
    }

private:
    FD4ResCapHolder res_holder;
};

LIBER_ASSERTS_BEGIN(FD4ResCapHolderItem);
LIBER_ASSERT_SIZE(0x60);
LIBER_ASSERTS_END;

LIBER_ASSERTS_BEGIN(FD4ResCap);
LIBER_ASSERT_SIZE(0x78);
LIBER_ASSERTS_END;

LIBER_ASSERTS_BEGIN(FD4FileCap);
LIBER_ASSERT_SIZE(0x90);
LIBER_ASSERTS_END;

LIBER_ASSERTS_BEGIN(FD4ResCapHolder);
LIBER_ASSERT_SIZE(0x28);
LIBER_ASSERTS_END;

LIBER_ASSERTS_BEGIN(FD4ResRep);
LIBER_ASSERT_SIZE(0xA0);
LIBER_ASSERTS_END;
} // namespace FD4
} // namespace from
