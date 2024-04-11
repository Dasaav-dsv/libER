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

// DLRF runtime method invocation interface
template <typename Ctx = DLMethodInvokeContext>
class DLMethodInvokerImpl {
public:
    virtual int invoke(Ctx* context) LIBER_INTERFACE_ONLY;
    virtual ~DLMethodInvokerImpl() LIBER_INTERFACE_ONLY;
    virtual int arg_count() LIBER_INTERFACE_ONLY;
    virtual void zero_context1(Ctx* context) LIBER_INTERFACE_ONLY;
    virtual void zero_context2(Ctx* context) LIBER_INTERFACE_ONLY;
    virtual char* ref_byte() LIBER_INTERFACE_ONLY;
};

// Default template
using DLMethodInvoker = DLMethodInvokerImpl<DLMethodInvokeContext>;

// Concrete method invoker class
// Is not implemented in libER, exposition only
struct LIBER_DUMMY DLConcreteMethodInvoker : public DLMethodInvoker {
    void* method;
};

// Forward declaration
class DLRuntimeClass;

// A wrapper that represents a method
// with a vector of invoker objects
struct DLRuntimeMethod {
    LIBER_CLASS(DLRuntimeMethod);

    DLRuntimeMethod() noexcept
        : owner(nullptr), method_name(nullptr), method_name_w(nullptr) {}

    DLRuntimeMethod(DLRuntimeClass* owner, const char* method_name,
        const wchar_t* method_name_w) noexcept
        : owner(owner), method_name(method_name), method_name_w(method_name_w) {
    }

    DLRuntimeClass* owner;
    const char* method_name;
    const wchar_t* method_name_w;
    from::vector<DLMethodInvoker*> invokers;
    from::vector<void*> liber_unknown;
    void* liber_unknown = nullptr;
    DLKR::DLPlainMutex mutex;
};

// A wrapper for the DLRuntimeMethod wrapper
struct DLRuntimeMethodHolder {
    LIBER_CLASS(DLRuntimeMethodHolder);

    DLRuntimeMethodHolder() noexcept
        : method_name(nullptr), method_name_w(nullptr), length(0) {}

    DLRuntimeMethodHolder(from::unique_ptr<DLRuntimeMethod>&& method,
        const char* method_name, const wchar_t* method_name_w,
        size_t length) noexcept
        : method(std::move(method)), method_name(method_name),
          method_name_w(method_name_w), length(length) {}

    from::unique_ptr<DLRuntimeMethod> method;
    const char* method_name;
    const wchar_t* method_name_w;
    size_t length;
};

// Ref byte/runtime class pair
using DLRuntimeClassPair = std::pair<char*, DLRuntimeClass*>;

// (Typically statically allocated) reflection based
// object for an implementing class. Allows for runtime
// type introspection and for binding method invokers.
class DLRuntimeClass {
public:
    LIBER_CLASS(DLRuntimeClass);

    DLRuntimeClass() noexcept : base_class(nullptr) {}

    virtual ~DLRuntimeClass() = default;

    // Class name
    virtual const char* class_name() const noexcept = 0;
    // Class name (wide)
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
    // The size of the runtime class
    virtual size_t class_size() const noexcept = 0;

    // Add an invoker to a vector of invokers for the class's constructor
    LIBERAPI virtual void add_constructor_invoker(DLMethodInvoker* invoker,
        const char* method_name, const wchar_t* method_name_w);

    // Add an invoker to a vector of invokers for a given method
    LIBERAPI virtual void add_method_invoker(DLMethodInvoker* invoker,
        const char* method_name, const wchar_t* method_name_w);

    // Get class's base, nullptr if it's not derived
    DLRuntimeClass* get_base() noexcept {
        return this->base_class;
    }
    const DLRuntimeClass* get_base() const noexcept {
        return this->base_class;
    }

    // Get the constructor method (may be null)
    liber::optref<DLRuntimeMethod> get_constructor() noexcept {
        DLRuntimeMethod* method_ptr = this->runtime_constructor.get();
        if (!method_ptr)
            return std::nullopt;
        return *method_ptr;
    }

    // Get a vector of all methods
    from::vector<DLRuntimeMethodHolder>& get_methods() noexcept {
        return this->runtime_methods;
    }

    // Get a method by name if it exists
    LIBERAPI DLRuntimeMethod* find_method(
        const std::string_view& method_name) noexcept;

    // Get a vector of all globally registered DLRuntimeClasses
    LIBERAPI static from::vector<DLRuntimeMethodHolder>&
    get_registered_classes() noexcept;

    // Get a vector of all globally registered DLRuntimeClass pairs
    LIBERAPI static from::vector<DLRuntimeClassPair>&
    get_runtime_pairs() noexcept;

private:
    // A pointer to the base class, if the class is derived
    DLRuntimeClass* base_class;
    // A DLRuntimeMethod of the class's constructor
    from::unique_ptr<DLRuntimeMethod> runtime_constructor;
    // A vector of DLRuntimeMethodHolders sorted by string length
    from::vector<DLRuntimeMethodHolder> runtime_methods;
};

// Concrete DLRuntimeClass for class Impl
// Additionally stores the class name
template <class Impl>
class DLRuntimeClassImpl : public DLRuntimeClass {
public:
    LIBER_CLASS(DLRuntimeClassImpl);

    virtual ~DLRuntimeClassImpl() = default;

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

// DLRuntimeClass reflection implentation in libER
template <class Impl, liber::literal_string ImplName>
struct DLRuntimeClassTemplate {
    static constexpr auto dl_runtime_class_name = ImplName.trunc();
    static constexpr auto dl_runtime_class_name_w = ImplName.widen();

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

LIBER_ASSERTS_BEGIN(DLRuntimeMethodHolder);
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
