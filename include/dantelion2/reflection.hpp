/**
 * @file reflection.hpp
 * @brief Dantelion2 type reflection
 *
 * Copyright (c) libER ELDEN RING API library 2024
 *
 */
#pragma once

#include <detail/literal_string.hpp>
#include <detail/optref.hpp>
#include <detail/preprocessor.hpp>

#include <memory/from_unique_ptr.hpp>
#include <memory/from_vector.hpp>

#include <dantelion2/kernel_runtime.hpp>

#include <cstddef>
#include <cstdint>
#include <string>
#include <utility>

namespace from {
// Dantelion reflection
namespace DLRF {
// DLMethodInvoker trait tags
struct DLMethodInvokeContext {};
struct DLFunctionInvokeContext {};
struct DLRuntimeConstructionContext {};

/**
 * @brief Layout of a Dantelion2 method invoker interface.
 *
 */
template <typename Ctx = DLMethodInvokeContext>
class DLMethodInvokerImpl {
    virtual int invoke(Ctx* context) LIBER_INTERFACE_ONLY;

public:
    virtual ~DLMethodInvokerImpl() LIBER_INTERFACE_ONLY;

private:
    virtual int arg_count() LIBER_INTERFACE_ONLY;
    virtual void zero_context1(Ctx* context) LIBER_INTERFACE_ONLY;
    virtual void zero_context2(Ctx* context) LIBER_INTERFACE_ONLY;
    virtual char* ref_byte() LIBER_INTERFACE_ONLY;
};

/**
 * @brief Default Dantelion2 method invoker interface.
 *
 */
using DLMethodInvoker = DLMethodInvokerImpl<DLMethodInvokeContext>;

/**
 * @brief Concrete method invoker, exposition only.
 *
 */
struct LIBER_DUMMY DLConcreteMethodInvoker : public DLMethodInvoker {
    /**
     * @brief The bound method.
     *
     */
    void* method;
};

// Forward declaration
class DLRuntimeClass;

/**
 * @brief A wrapper that represents a method with a vector of invoker objects.
 *
 */
struct DLRuntimeMethod {
    LIBER_CLASS(DLRuntimeMethod);

    // DLRuntimeMethod() noexcept
    //     : owner(nullptr), method_name(nullptr), method_name_w(nullptr) {}

    /**
     * @brief Construct a new DLRuntimeMethod object
     *
     * @param owner The owning reflection object.
     * @param method_name The name of the method.
     * @param method_name_w The name (wide) of the method.
     */
    DLRuntimeMethod(DLRuntimeClass* owner, const char* method_name,
        const wchar_t* method_name_w) noexcept
        : owner(owner), method_name(method_name), method_name_w(method_name_w) {
    }

    /**
     * @brief Get the method name
     *
     * @return const char* name
     */
    const char* get_method_name() const noexcept {
        return this->method_name;
    }

    /**
     * @brief Get the method name (wide)
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
     * of invokers.
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
    void* liber_unknown = nullptr;
    DLKR::DLPlainMutex mutex;
};

/**
 * @brief A holder for a DLRF::DLRuntime object.
 *
 * May hold a DLRuntimeClass or a DLRuntimeMethod.
 *
 */
template <typename T>
struct DLRuntimeObjectHolder {
    LIBER_CLASS(DLRuntimeObjectHolder);

    /**
     * @brief Construct a new DLRuntimeObjectHolder object
     *
     * @param method A rvalue reference to a unique ptr to the object.
     * @param name The name of the object.
     * @param name_w The name of the object (wide).
     */
    DLRuntimeObjectHolder(from::unique_ptr<T>&& method, const char* name,
        const wchar_t* name_w) noexcept
        : object(std::move(method)), name(name), name_w(name_w),
          length(std::strlen(name)) {}

    /**
     * @brief Get a pointer to the held method instance.
     *
     * @return const DLRuntimeMethod* pointer to the instance.
     */
    const DLRuntimeMethod* get() const noexcept {
        return this->object.get();
    }

private:
    friend class DLRuntimeClass;

    from::unique_ptr<T> object;
    const char* name;
    const wchar_t* name_w;
    size_t length;
};

/**
 * @brief A holder for a DLRF::DLRuntimeMethod object.
 *
 */
using DLRuntimeMethodHolder = DLRuntimeObjectHolder<DLRuntimeMethod>;

/**
 * @brief A holder for a DLRF::DLRuntimeClass object.
 *
 */
using DLRuntimeClassHolder = DLRuntimeObjectHolder<DLRuntimeClass>;

/**
 * @brief A pair of a char and a DLRuntimeClass pointers.
 *
 */
using DLRuntimeClassPair = std::pair<char*, DLRuntimeClass*>;

/**
 * @brief Type reflection object for an implementing class.
 *
 * Allows for runtime type introspection and for binding method invokers.
 *
 * Typically statically allocated, widely used in ELDEN RING.
 *
 */
class DLRuntimeClass {
public:
    LIBER_CLASS(DLRuntimeClass);

    DLRuntimeClass() noexcept : base_class(nullptr) {}

    virtual ~DLRuntimeClass() = default;

    /**
     * @brief Get the name of the type.
     *
     * @return const char* name of the type.
     */
    virtual const char* class_name() const noexcept = 0;

    /**
     * @brief Get the name of the type (wide).
     *
     * @return const wchar_t* name of the type.
     */
    virtual const wchar_t* class_name_w() const noexcept = 0;

private:
    // Methods that return pointers to null
    // bytes in static memory (bad for re-implementation),
    // adresses of which are used for sorting DLRuntimeClass instances
    virtual char* ref_byte1() = 0;
    virtual char* ref_byte2() = 0;
    virtual char* ref_byte3() = 0;
    virtual char* ref_byte4() = 0;

    // Always false?
    virtual bool unk_always_false() = 0;

    // Potentially a method that frees a base class of
    // a DLRuntimeClass, or a DLRuntimeClass from a similar structure
    virtual void free_base(DLRuntimeClass** base_of,
        DLKR::DLAllocator* allocator) = 0;

public:
    /**
     * @brief Size of the type.
     *
     * @return size_t size.
     */
    virtual size_t class_size() const noexcept = 0;

    /**
     * @brief Add an invoker to a vector of invokers for the class's
     * constructor.
     *
     * @param invoker The invoker for the method.
     * @param method_name The name of the method.
     * @param method_name_w The name of the method (wide).
     */
    LIBERAPI virtual void add_constructor_invoker(DLMethodInvoker* invoker,
        const char* method_name, const wchar_t* method_name_w);

    /**
     * @brief Add an invoker to a vector of invokers for a given method.
     *
     * @param invoker The invoker for the method.
     * @param method_name The name of the method.
     * @param method_name_w The name of the method (wide).
     */
    LIBERAPI virtual void add_method_invoker(DLMethodInvoker* invoker,
        const char* method_name, const wchar_t* method_name_w);

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
     */
    const DLRuntimeClass* get_base() const noexcept {
        return this->base_class;
    }

    /**
     * @brief Get the constructor method (if bound)
     *
     * @return liber::optref<DLRuntimeMethod> (may be std::nullopt)
     */
    liber::optref<DLRuntimeMethod> get_constructor() noexcept {
        DLRuntimeMethod* method_ptr = this->runtime_constructor.get();
        if (!method_ptr)
            return std::nullopt;
        return *method_ptr;
    }

    /**
     * @brief Get every bound method.
     *
     * @return from::vector<DLRuntimeMethodHolder>& vector of bound methods
     */
    from::vector<DLRuntimeMethodHolder>& get_methods() noexcept {
        return this->runtime_methods;
    }

    /**
     * @brief Find a bound method by name (if it exists).
     *
     * @param method_name The name of the method.
     * @return liber::optref<DLRuntimeMethod> (may be std::nullopt)
     */
    LIBERAPI liber::optref<DLRuntimeMethod> find_method(
        const std::string_view& method_name) noexcept;

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
    LIBERAPI static const from::vector<DLRuntimeClassHolder>&
    get_registered_classes() noexcept;

    /**
     * @brief Get a vector of all globally registered DLRuntimeClass pairs.
     *
     * The returned vector contains every DLRuntimeClass pair that has been
     * registered so far by ELDEN RING. Be aware that classes are registered
     * during the static initialization phase, so this vector will not be
     * initialized before that point.
     *
     * @return from::vector<DLRuntimeClassPair>& vector of DLRuntimeClassPair
     * objects
     */
    LIBERAPI static const from::vector<DLRuntimeClassPair>&
    get_runtime_pairs() noexcept;

private:
    // A pointer to the base class, if the class is derived
    DLRuntimeClass* base_class;
    // A DLRuntimeMethod of the class's constructor
    from::unique_ptr<DLRuntimeMethod> runtime_constructor;
    // A vector of DLRuntimeMethodHolders sorted by string length
    from::vector<DLRuntimeMethodHolder> runtime_methods;
};

/**
 * @brief Concrete DLRuntimeClass reflection for class Impl.
 *
 * @tparam The class to reflect.
 */
template <class Impl>
class DLRuntimeClassImpl : public DLRuntimeClass {
public:
    LIBER_CLASS(DLRuntimeClassImpl);

    virtual ~DLRuntimeClassImpl() = default;

    /**
     * @brief Construct a new DLRuntimeClassImpl object.
     *
     * @param class_name Name of the class.
     * @param class_name_w Name of the class (wide).
     */
    DLRuntimeClassImpl(const char* class_name,
        const wchar_t* class_name_w) noexcept
        : DLRuntimeClass(), _class_name(class_name),
          _class_name_w(class_name_w) {}

    const char* class_name() const noexcept override {
        return this->_class_name;
    }
    const wchar_t* class_name_w() const noexcept override {
        return this->_class_name_w;
    }

private:
    char* ref_byte1() LIBER_INTERFACE_OVERRIDE;
    char* ref_byte2() LIBER_INTERFACE_OVERRIDE;
    char* ref_byte3() LIBER_INTERFACE_OVERRIDE;
    char* ref_byte4() LIBER_INTERFACE_OVERRIDE;

    bool unk_always_false() LIBER_INTERFACE_OVERRIDE;
    void free_base(DLRuntimeClass**,
        DLKR::DLAllocator*) LIBER_INTERFACE_OVERRIDE;

public:
    size_t class_size() const noexcept override {
        return sizeof(Impl);
    }

private:
    const char* _class_name;
    const wchar_t* _class_name_w;
};

/**
 * @brief The libER reflection implementation of DLRuntimeClass.
 *
 * @tparam Impl The class to reflect.
 * @tparam ImplName The name of the class to reflect.
 */
template <class Impl, liber::literal_string ImplName>
class DLRuntimeClassTemplate {
    static constexpr auto dl_runtime_class_name = ImplName.trunc();
    static constexpr auto dl_runtime_class_name_w = ImplName.widen();

public:
    /**
     * @brief The actual DLRuntimeClassImpl instance to return to the game, if
     * requested.
     *
     * See component.hpp for the implementation.
     */
    inline static DLRF::DLRuntimeClassImpl<Impl> dl_runtime_class{
        DLRuntimeClassTemplate::dl_runtime_class_name.string,
        DLRuntimeClassTemplate::dl_runtime_class_name_w.string
    };
};

LIBER_ASSERTS_BEGIN(DLRuntimeMethod);
LIBER_ASSERT_SIZE(0x70);
LIBER_ASSERT_OFFS(0x18, invokers);
LIBER_ASSERT_OFFS(0x60, mutex);
LIBER_ASSERTS_END;

LIBER_ASSERTS_TEMPLATE_BEGIN(DLRuntimeObjectHolder, DLRuntimeMethod);
LIBER_ASSERT_SIZE(0x20);
LIBER_ASSERTS_END;

LIBER_ASSERTS_BEGIN(DLRuntimeClass);
LIBER_ASSERT_SIZE(0x38);
LIBER_ASSERTS_END;

LIBER_ASSERTS_TEMPLATE_BEGIN(DLRuntimeClassImpl, liber::dummy);
LIBER_ASSERT_SIZE(0x48);
LIBER_ASSERTS_END;
} // namespace DLRF
} // namespace from
