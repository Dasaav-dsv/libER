#ifndef CPPSV_INCLUDE_CPPSV_H
#define CPPSV_INCLUDE_CPPSV_H

#include <cstddef>
#include <cstdint>
#include <utility>
#include <string>
#include <tuple>
#include <array>
#include <iterator>
#include <algorithm>
#include <type_traits>

#include "convert.hpp"

#define CPPSV_VIEW_BEGIN inline constexpr cppsv::cppsv_view<std::forward_as_tuple(
#define CPPSV_VIEW_NEXT ,
#define CPPSV_VIEW_NAME(NAME) )> NAME;

namespace cppsv {
    // Standard cppsv csv header
    // It is validated before parsing the csv string
    template <typename CharT>
    struct cppsv_header {
        static constexpr CharT value[]{ '"', 'c', 'p', 'p', 's', 'v', '"', '\n' };
        static constexpr size_t size = std::size(value);

        template <typename T>
        static constexpr bool has_header(T&& iterable) noexcept {
            auto begin = std::begin(iterable);
            return std::distance(begin, std::end(iterable)) >= size
                && std::equal(std::begin(value), std::end(value), begin);
        }
    };

    // Only used for pack expansions (ref_array<CharT, Ns>...),
    // MSVC cannot normally expand over array indices 
    template <typename Ref, size_t Size>
    using ref_array = const Ref(&)[Size];

    // Helper class for validating and concatenating multiple csv strings 
    template <typename CharT, size_t N>
    struct cppsv_cat {
        using value_type = CharT;
        using view_type = std::basic_string_view<CharT>;
        using header_type = cppsv_header<CharT>;

        constexpr auto view() const noexcept {
            return view_type(this->string, this->string + N);
        }

        consteval cppsv_cat() = default;

        // Concatenate the contents of a tuple of csv strings in a single character array
        // Can be used in constant evaluated contexts
        template <size_t...Ns>
        consteval cppsv_cat(std::tuple<ref_array<CharT, Ns>...> tuple_chrs) noexcept {
            size_t offset = 0;
            std::apply([&]<typename...Args>(Args&&...chrs) {
                ([&]{
                    if (!Ns || chrs[Ns - 1] != '\0')
                        no_null_terminator(); // Compile error: inputs are expected to be null terminated
                    if (!header_type::has_header(chrs))
                        no_cppsv_header(); // Compile error: cppsv header not found
                    std::copy(chrs + header_type::size, std::end(chrs), this->string + offset);
                    offset += Ns - header_type::size - 1;
                }(), ...);
            }, tuple_chrs);
        }

        static void no_null_terminator() {}
        static void no_cppsv_header() {}

        CharT string[N]{};
    };

    template <typename CharT, size_t...Ns> cppsv_cat(std::tuple<ref_array<CharT, Ns>...> strings)
        -> cppsv_cat<CharT, (Ns + ...) - (cppsv_header<CharT>::size + 1) * sizeof...(Ns) + 1>;


    // Helper class that represents a single field in a csv
    // Copies its contents from a string view as to not expose the entire csv
    // The member function as<T> allows parsing the string as integers, floats or custom types
    template <typename CharT, size_t N>
    struct cppsv_field {
        consteval cppsv_field() = default;

        consteval cppsv_field(const CharT(&str)[N]) {
            if (str[N - 1] != '\0')
                no_null_terminator();
            std::copy_n(str, N, this->string);
        }

        consteval cppsv_field(std::basic_string_view<CharT> sv) noexcept {
            std::copy(sv.begin(), sv.end(), this->string);
        }

        template <typename It>
        consteval cppsv_field(It first, It last) noexcept {
            std::copy(first, last, this->string);
        }

        static consteval size_t size() noexcept {
            return N - 1;
        }

        static consteval bool empty() noexcept {
            return N <= 1;
        }

        constexpr const CharT* c_str() const noexcept {
            return this->string;
        }

        constexpr auto begin() noexcept {
            return std::begin(this->string);
        }

        constexpr auto begin() const noexcept {
            return std::begin(this->string);
        }

        constexpr auto end() noexcept {
            return std::end(this->string);
        }

        constexpr auto end() const noexcept {
            return std::end(this->string);
        }

        // Try to convert the string into another representation
        // T can be constructed from an iterator range over the characters
        template <typename T>
        consteval T as() const noexcept {
            if constexpr (std::is_integral_v<T>)
                return to_integer(std::begin(this->string), std::end(this->string), T{}).value();
            else if constexpr (std::is_floating_point_v<T>)
                return to_floating_point(std::begin(this->string), std::end(this->string), T{}).value();
            else
                return T(std::begin(this->string), std::end(this->string));
        }

        static void no_null_terminator() {}

        CharT string[N]{};
    };

    // Main class, allows compile time comprehension of csv files
    template <cppsv_cat Data>
    struct cppsv_view {
        using view_type = typename decltype(Data)::view_type;
        using value_type = typename decltype(Data)::value_type;
    private:
        // Calculate column count (defined by the first row)
        static consteval size_t calc_x() noexcept {
            // At least 1 column
            size_t out = 1;
            for (bool in_quotes = false; auto chr : Data.view()) {
                in_quotes ^= chr == '"';
                if (!in_quotes) {
                    if (chr == ',') ++out;
                    if (chr == '\n') break;
                }
            }
            return out;
        }

        // Calculate row count
        static consteval size_t calc_y() noexcept {
            constexpr size_t x = calc_x();
            size_t out = 1;
            size_t index = 0;
            for (bool in_quotes = false; auto chr : Data.view()) {
                in_quotes ^= chr == '"';
                if (!in_quotes) {
                    if (chr == ',' && index < x)
                        ++out, ++index;
                    if (chr == '\n')
                        ++out, index = 0;
                }
            }
            return out / x;
        }

        // Strip wrapping quotes, comma
        static constexpr auto strip_field(view_type view) noexcept {
            if (!view.empty() && (view.front() == ','))
                view.remove_prefix(1);
            if (view.length() > 1 && view.front() == '"' && view.back() == '"') {
                view.remove_prefix(1);
                view.remove_suffix(1);
            }
            return view;
        }
        
        // A 2D array of string views of each field in the csv
        // Is not exposed - it can be iterated over, but individual entries are never returned
        static constexpr auto fields = []() {
            constexpr size_t x = calc_x();
            constexpr size_t y = calc_y();
            std::array<std::array<view_type, x>, y> out{};
            auto first = Data.view().begin();
            auto last = Data.view().end();
            auto field_first = first;
            size_t index_x = 0;
            size_t index_y = 0;
            for (bool in_quotes = false; first != last; ++first) {
                auto chr = *first;
                in_quotes ^= chr == '"';
                if (!in_quotes) {
                    if ((chr == ',' || chr == '\n') && index_x < x) {
                        out[index_y][index_x++] = strip_field({ field_first, first });
                        field_first = first != last ? first + 1 : first;
                    }
                    if (chr == '\n') {
                        index_x = 0;
                        ++index_y;
                    }
                }
            }
            return out;
        }();

    public:
        constexpr cppsv_view() = default;

        // Get the column count in the csv
        // The column count is defined by the number of fields in the first row
        static consteval size_t columns() noexcept {
            return std::size(fields[0]);
        }

        // Get the row count in the csv
        static consteval size_t rows() noexcept {
            return std::size(fields);
        }

        // Get a csv row by the row index as a tuple of fields
        template <size_t IRow>
        static consteval auto get_row() noexcept {
            static_assert(IRow < rows(), "row index out of bounds");
            constexpr auto row = std::get<IRow>(fields);
            return [&]<size_t...Xs>(std::index_sequence<Xs...>) {
                return std::tuple{ cppsv_field<value_type, std::get<Xs>(row).size() + 1>(
                    std::get<Xs>(row))... };
            }(std::make_index_sequence<columns()>{});
        }

        // Get a csv field by the column and row indices
        template <size_t IColumn, size_t IRow>
        static consteval auto get_field() noexcept {
            static_assert(IRow < rows(), "row index out of bounds");
            static_assert(IColumn < columns(), "field index out of bounds");
            constexpr auto field = std::get<IColumn>(std::get<IRow>(fields));
            return cppsv_field<value_type, field.size() + 1>(field);
        }

        // Get a csv field by the column name and row index
        template <cppsv_field ColumnName, size_t IRow>
        static consteval auto get_field() noexcept {
            static_assert(IRow < rows(), "row index out of bounds");
            constexpr auto field = get_field<ColumnName>(std::get<IRow>(fields));
            return cppsv_field<value_type, field.size() + 1>(field);
        }

        // Get a field from a tuple-like csv row by column index
        template <size_t IColumn>
        static consteval auto get_field(const auto& row) noexcept {
            static_assert(IColumn < columns(), "field index out of bounds");
            return std::get<IColumn>(row);
        }

        // Get a field from a tuple-like csv row by column name
        template <cppsv_field ColumnName>
        static consteval auto get_field(const auto& row) noexcept {
            constexpr size_t index = [&]{
                size_t result = 0;
                for (const auto& field : std::get<0>(fields)) {
                    if (!field.compare(ColumnName.c_str())) break;
                    ++result;
                }
                return result;
            }();
            static_assert(index < columns(), "column does not exist");
            return std::get<index>(row);
        }

        // Iterate over all fields,
        // calling "function(std::basic_string_view<value_type>)"
        // Accepts only constant evaluated functions
        static consteval void for_each_field(auto function) noexcept {
            for (const auto& row : fields)
                for (const auto& field : row)
                    function(field);
        }

        // Iterate over all rows,
        // calling "function(std::array<std::basic_string_view<value_type>, columns()>)"
        // Accepts only constant evaluated functions
        static consteval void for_each_row(auto function) noexcept {
            for (const auto& row : fields)
                function(row);
        }

        // Iterate over fields
        // while "function(std::basic_string_view<value_type>)" evaluates to "true"
        // Accepts only constant evaluated functions, returns the field or empty
        static consteval auto find_field(auto function) noexcept {
            constexpr auto field = [&]{
                for (const auto& row : fields) 
                    for (const auto& field : row)
                        if (function(field)) return field;
                return view_type{};
            }();
            return cppsv_field<value_type, field.size() + 1>(field);
        }

        // Iterate over all rows
        // while "function(std::array<std::basic_string_view<value_type>, columns()>)" evaluates to "true"
        // Accepts only constant evaluated functions, returns the field or empty
        static consteval auto find_row(auto function) noexcept {
            return _find_row(function, std::make_index_sequence<columns()>());
        }

        template <size_t...I>
        static consteval auto _find_row(auto function, std::index_sequence<I...>) noexcept {
            constexpr auto row = [&]{
                for (const auto& row : fields) 
                    if (function(row)) return row;
                return std::array<view_type, columns()>{};
            }();
            return std::tuple{ cppsv_field<value_type, std::get<I>(row).size() + 1>(
                    std::get<I>(row))... };
        }
    };
}

#endif /* CPPSV_INCLUDE_CPPSV_H */
