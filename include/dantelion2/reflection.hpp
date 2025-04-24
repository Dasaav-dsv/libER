/**
 * @file reflection.hpp
 * @brief Dantelion2 type reflection
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */
#pragma once

#include <dantelion2/kernel_runtime.hpp>
#include <detail/preprocessor.hpp>
#include <detail/symbols.hpp>
#include <memory/from_memory.hpp>
#include <memory/from_vector.hpp>

#include <algorithm>
#include <string>

namespace from {
namespace DLRF {
class DLRuntimeClass;
class DLMethodInvoker;

/**
 * @brief A wrapper that represents a method with a vector of invoker objects.
 *
 */
struct DLRuntimeMethod {
    LIBER_CLASS(DLRuntimeMethod);

    /**
     * @brief Get the method name.
     *
     * @return const char* name
     */
    const char* get_method_name() const noexcept {
        return this->method_name;
    }

    /**
     * @brief Get the method name (wide).
     *
     * @return const wchar_t* name
     */
    const wchar_t* get_method_name_w() const noexcept {
        return this->method_name_w;
    }

    /**
     * @brief Get all the invokers bound to this method.
     *
     * @return const from::vector<DLMethodInvoker*>& const reference to a vector
     * of invokers
     */
    const from::vector<DLMethodInvoker*>& get_invokers() const noexcept {
        return this->invokers;
    }

private:
    friend class DLRuntimeClass;

    DLRuntimeClass* owner;
    const char* method_name;
    const wchar_t* method_name_w;
    from::vector<DLMethodInvoker*> invokers;
    from::vector<void*> liber_unknown;
    void* liber_unknown;
    DLKR::DLPlainMutex mutex;
};

/**
 * @brief Abstract class used for type reflection.
 *
 * Allows for runtime type introspection and for binding method invokers.
 *
 * Typically statically allocated, widely used in ELDEN RING.
 *
 */
class DLRuntimeClass {
public:
    LIBER_CLASS(DLRuntimeClass);

    virtual ~DLRuntimeClass() = default;

    /**
     * @brief Get the name of the type.
     *
     * @return const char* name of the type
     *
     */
    virtual const char* get_class_name() const noexcept = 0;

    /**
     * @brief Get the name of the type (wide).
     *
     * @return const wchar_t* name of the type
     *
     */
    virtual const wchar_t* get_class_name_w() const noexcept = 0;

private:
    virtual void* liber_unknown() = 0;
    virtual void* liber_unknown() = 0;
    virtual void* liber_unknown() = 0;
    virtual void* liber_unknown() = 0;
    virtual bool liber_unknown() = 0;
    virtual void liber_unknown() = 0;

public:
    /**
     * @brief Get the size of the type.
     *
     * @return size_t size of the type
     *
     */
    virtual size_t get_class_size() const noexcept = 0;

private:
    virtual void liber_unknown() = 0;
    virtual void liber_unknown() = 0;

public:
    /**
     * @brief Get a derived class's base class.
     *
     * @return DLRuntimeClass* (may be null if not derived)
     */
    DLRuntimeClass* get_base() noexcept {
        return this->base_class;
    }

    /**
     * @brief Get a derived class's base class.
     *
     * @return const DLRuntimeClass* (may be null if not derived)
     *
     */
    const DLRuntimeClass* get_class_base() const noexcept {
        return this->base_class;
    }

    template <typename T>
    struct DLRuntimeObjectHolder {
        T* instance;
        const char* name;
        const wchar_t* name_w;
        size_t name_length;
    };

    using DLRuntimeClassHolder = DLRuntimeObjectHolder<DLRuntimeClass>;
    using DLRuntimeMethodHolder = DLRuntimeObjectHolder<DLRuntimeMethod>;

    /**
     * @brief Get a vector of all globally registered DLRuntimeClasses.
     *
     * The returned vector contains every DLRuntimeClass that has been
     * registered so far by ELDEN RING. Be aware that classes are registered
     * during the static initialization phase, so this vector will not be
     * initialized before that point.
     *
     * @return from::vector<DLRuntimeClassHolder>& vector of
     * DLRuntimeClassHolder objects
     */
    static const from::vector<DLRuntimeClassHolder>*
    get_registered_classes() noexcept {
        using pointer_type =
            from::static_ptr<from::vector<DLRuntimeClassHolder>>;
        return liber::symbol<"GLOBAL_DLRuntimeClass_types">::as<pointer_type>()
            .get();
    }

    static DLRuntimeClass* get_runtime_class(
        std::string_view class_name) noexcept {
        const auto* classes = get_registered_classes();
        if (!classes)
            return nullptr;
        auto iter = std::lower_bound(classes->begin(), classes->end(),
            class_name,
            [](const DLRuntimeClassHolder& holder,
                const std::string_view& rhs) {
                return std::string_view(holder.name, holder.name_length) < rhs;
            });
        if (iter == classes->end()
            || std::string_view(iter->name, iter->name_length) != class_name)
            return nullptr;
        return iter->instance;
    }

    /**
     * @brief Get every bound method.
     *
     * @return const from::vector<DLRuntimeMethodHolder>& vector of bound
     * methods
     */
    const from::vector<DLRuntimeMethodHolder>& get_methods() const noexcept {
        return this->runtime_methods;
    }

private:
    // A pointer to the base class, if the class is derived
    DLRuntimeClass* base_class;
    // A DLRuntimeMethod of the class's constructor
    DLRuntimeMethod* runtime_constructor;
    // A vector of DLRuntimeMethodHolders sorted by string length
    from::vector<DLRuntimeMethodHolder> runtime_methods;
};
} // namespace DLRF
} // namespace from
