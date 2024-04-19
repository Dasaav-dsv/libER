/**
 * @file resource.hpp
 * @brief TODO
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

// TODO: anchor vtables, doxygen documentation
/// @cond DOXYGEN_SKIP

namespace from {
namespace FD4 {

// Forward declarations
class FD4FileCap;
class FD4ResRepository; // TODO

class FD4FileLoadProcess {
public:
    virtual ~FD4FileLoadProcess() = default;

private:
    FD4FileCap* file_cap;
    from::allocator<void> allocator;
    void* resource_load_queue;
    DLUT::DLReferenceCountPtr<DLUT::dummy_rfco> liber_unknown;
};

class FD4ResCapHolderItem : public FD4ComponentBase {
public:
    FD4_RUNTIME_CLASS(FD4ResCapHolderItem);

    ~FD4ResCapHolderItem() = default;

private:
    DLTX::FD4BasicHashString res_name;
    FD4ResRepository* owning_repository; // ResRepository
    void* next_item;                     // Refcounted object
    long long ref_count;                 // Ref count TODO
};

// Resource capsule base
class FD4ResCap : public FD4ResCapHolderItem {
public:
    FD4_RUNTIME_CLASS(FD4ResCap);

    ~FD4ResCap() = default;

    virtual void set_debug(bool value) LIBER_INTERFACE;
    virtual void liber_unknown() LIBER_INTERFACE;

private:
    bool debug;
    bool liber_unknown;    // FD4BndMountDeviceCapSeed + 0x10
    void* debug_menu_item; // FD4::FD4DebugMenuItem
    bool liber_unknown;
};

class FD4ResCapHolder : public FD4ComponentBase {
public:
    FD4_RUNTIME_CLASS(FD4ResCapHolder);

    virtual ~FD4ResCapHolder() = default;

    virtual from::allocator<void> get_allocator1() const noexcept {
        return this->allocator;
    }

    virtual from::allocator<void> get_allocator2() const noexcept {
        return this->allocator;
    }

    virtual from::allocator<void> get_allocator3() const noexcept {
        return this->allocator;
    }

    virtual FD4ResRepository* get_owner() noexcept {
        return this->owning_repository;
    }

    virtual FD4ResRepository* get_owner() const noexcept {
        return this->owning_repository;
    }

    LIBERAPI FD4ResCap* get_res_cap(DLTX::string_hash* res_name);

private:
    from::allocator<void> allocator;
    FD4ResRepository* owning_repository;
    int liber_unknown;
    int capacity;
    FD4ResCapHolderItem (*items)[];
};

enum class FD4FileCapState : char {
    INITIAL = 0,
    QUEUED = 1,
    PROCESSING = 2,
    UNKNOWN = 3,
    READY = 4
};

class FD4FileCap : public FD4ResCap {
public:
    FD4_RUNTIME_CLASS(FD4FileCap);

    virtual ~FD4FileCap() = default;

    FileState get_state() const noexcept {
        return this->state;
    }

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
    virtual void request_file_load(FD4FileLoadProcess* load_process) = 0;
    virtual void force_file_load() = 0;

private:
    virtual void request_header_load() = 0;
    virtual void liber_unknown() = 0;
    virtual bool liber_unknown() = 0;
    virtual bool liber_unknown() = 0;

    FD4FileLoadProcess* liber_unknown;
    void* liber_unknown;
    FD4FileCapState state;
    char liber_unknown;
    short liber_unknown;
};

class FD4ResRep : public FD4ResCap {
public:
    FD4_RUNTIME_CLASS(FD4ResRep);

    virtual ~FD4ResRep() = default;

private:
    FD4ResCapHolder res_holder;
};

class FD4RepositoryRepository : public FD4ResRep {
public:
    FD4_RUNTIME_CLASS(FD4RepositoryRepository);

    virtual ~FD4RepositoryRepository() = default;
};

class FD4ResPathRepository : public FD4ResRep {
public:
    FD4_RUNTIME_CLASS(FD4ResPathRepository);

    virtual ~FD4ResPathRepository() = default;
};

class FD4ResManagerImp : public FD4ComponentBase {
    FD4_RUNTIME_CLASS(FD4ResManagerImp);

    virtual ~FD4ResManagerImp() = default;

private:
    FD4RepositoryRepository repository_repository;
    from::allocator<void> repository_repository_allocator;
    FD4ResPathRepository path_repository;
    from::allocator<void> path_repository_allocator;
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

LIBER_ASSERTS_BEGIN(FD4ResManagerImp);
LIBER_ASSERT_SIZE(0x158);
LIBER_ASSERTS_END;
/// @endcond
} // namespace FD4
} // namespace from
