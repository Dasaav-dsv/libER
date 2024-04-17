/**
 * @file resource.hpp
 * @brief TODO
 * 
 * Copyright 2024 libER ELDEN RING API library
 * 
 */
#pragma once

#include <dantelion2/text.hpp>
#include <detail/preprocessor.hpp>
#include <fd4/component.hpp>
#include <memory/from_allocator.hpp>

// TODO: anchor vtables, doxygen documentation
/// @cond DOXYGEN_SKIP

namespace from {
namespace FD4 {
// Forward declaration
class FD4ResRepository;

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

    virtual void enable_debug(bool) LIBER_INTERFACE;
    virtual void unk_dummy() LIBER_INTERFACE;

private:
    bool liber_unknown;
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

private:
    from::allocator<void> allocator;
    FD4ResRepository* owning_repository;
    int liber_unknown;
    int capacity;
    FD4ResCapHolderItem (*items)[];
};

class FD4FileCap : public FD4ResCap {
public:
    FD4_RUNTIME_CLASS(FD4FileCap);

private:
    void* liber_unknown; // FD4FileLoadProcess
    void* liber_unknown;
    char liber_unknown;
    char liber_unknown;
    short liber_unknown;
};

class FD4ResRepository : public FD4ResCap {
public:
    FD4_RUNTIME_CLASS(FD4ResRepository);

    virtual ~FD4ResRepository() = default;

private:
    FD4ResCapHolder res_holder;
};

class FD4RepositoryRepository : public FD4ResRepository {
public:
    FD4_RUNTIME_CLASS(FD4RepositoryRepository);

    virtual ~FD4RepositoryRepository() = default;
};

class FD4ResPathRepository : public FD4ResRepository {
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

LIBER_ASSERTS_BEGIN(FD4ResCapHolder);
LIBER_ASSERT_SIZE(0x28);
LIBER_ASSERTS_END;

LIBER_ASSERTS_BEGIN(FD4ResRepository);
LIBER_ASSERT_SIZE(0xA0);
LIBER_ASSERTS_END;

LIBER_ASSERTS_BEGIN(FD4ResManagerImp);
LIBER_ASSERT_SIZE(0x158);
LIBER_ASSERTS_END;
/// @endcond
} // namespace FD4
} // namespace from
