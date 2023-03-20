#pragma once

#include <array>
#include <cmath>
#include <numeric>
#include <type_traits>
#include <utility>
#include <vector>

// FIXME
#define __host__
#define __device__

/** Numpy-style check for floating-point equality.
 *
 * @tparam T type of the arguments.
 * @param a left operand.
 * @param b right operand.
 * @param rtol relative tolerance.
 * @param atol absolute tolerance.
 *
 * See: https://numpy.org/doc/stable/reference/generated/numpy.allclose.html
 */
__host__ __device__ template <typename T>
inline auto
all_close(T a, T b, T rtol, T atol) -> bool
{
    static_assert(std::is_floating_point_v<T>, "all_close is valid for floating-point numbers");
    return (std::abs(a - b) <= atol + rtol * std::abs(b));
}

/** Whether a floating-point number is zero.
 *
 * @tparam T type of the arguments.
 * @param x number to be checked.
 * @param atol absolute tolerance.
 */
__host__ __device__ template <typename T>
inline auto
is_zero(T x, T atol = std::numeric_limits<T>::epsilon()) -> bool
{
    static_assert(std::is_floating_point_v<T>, "is_zero is valid for floating-point numbers");
    return all_close(x, T{0.0}, 0.0, atol);
}

// FIXME device function as well
__host__ inline auto
boys_function_0(const std::vector<double>& xs) -> std::vector<double>
{
    auto n_xs = xs.size();
    auto ys   = std::vector<double>(n_xs, 0.0);

    const double SQRT_M_PI = std::sqrt(M_PI);

    for (auto i = 0; i < n_xs; ++i)
    {
        auto x = xs[i];
        if (is_zero(x))
        {
            ys[i] = 1.0;
        }
        else
        {
            auto sqrt_x = std::sqrt(x);
            ys[i]       = SQRT_M_PI * std::erf(sqrt_x) / (2 * sqrt_x);
        }
    }

    return ys;
}

namespace detail {
/** Compile-time loop-application of a function.
 *
 * @tparam Start loop start index.
 * @tparam End loop end index.
 * @tparam Increment loop increment.
 * @tparam F function to apply.
 *
 * @param[in] F function to apply with signature
 *
 * auto F(auto i) -> void;
 *
 * with i the loop index.
 */
template <auto Start, auto End, auto Increment, typename F>
constexpr auto
constexpr_for(F&& f) -> void
{
    constexpr auto cond = (Increment > 0) ? (Start < End) : (Start > End);

    if constexpr (cond)
    {
        f(std::integral_constant<decltype(Start), Start>());
        constexpr_for<Start + Increment, End, Increment>(f);
    }
}
}  // namespace detail

// FIXME on the device it should be fma, not std::fma!

/** @{ Compile-time loop unrolling for upward recurrence */
namespace detail {
template <auto order>
__host__ __device__ auto
upward(double* ys, double x_m1, double exp_mx, size_t i) -> void
{
    // FIXME indexing!
    ys(order + 1, i) = 0.5 * x_m1 * std::fma((2 * order + 1), ys(order, i), -exp_mx);
}

template <auto order>
__host__ __device__ auto
upward(double* ys, double x_m1, double exp_mx) -> void
{
    // FIXME indexing!
    ys(order + 1) = 0.5 * x_m1 * std::fma((2 * order + 1), ys(order), -exp_mx);
}
}  // namespace detail

template <auto... indices>
__host__ __device__ auto
upward_recurrence(std::integer_sequence<size_t, indices...>, double* ys, double x_m1, double exp_mx, size_t i) -> void
{
    (detail::upward<indices>(ys, x_m1, exp_mx, i), ...);
}

template <auto... indices>
__host__ __device__ auto
upward_recurrence(std::integer_sequence<size_t, indices...>, double* ys, double x_m1, double exp_mx) -> void
{
    (detail::upward<indices>(ys, x_m1, exp_mx), ...);
}
/**@}*/

/** @{ Compile-time loop unrolling for downward recurrence */
namespace detail {
template <auto order>
__host__ __device__ auto
downward(double* ys, double x_m1, double exp_mx, size_t i) -> void
{
    // FIXME indexing!
    ys(order + 1, i) = 0.5 * x_m1 * std::fma((2 * order + 1), ys(order, i), -exp_mx);
}

template <auto order>
__host__ __device__ auto
downward(double* ys, double x_m1, double exp_mx) -> void
{
    // FIXME indexing!
    ys(order + 1) = 0.5 * x_m1 * std::fma((2 * order + 1), ys(order), -exp_mx);
}
}  // namespace detail

template <auto... indices>
__host__ __device__ auto
downward_recurrence(std::integer_sequence<size_t, indices...>, double* ys, double x_m1, double exp_mx, size_t i) -> void
{
    (detail::downward<indices>(ys, x_m1, exp_mx, i), ...);
}

template <auto... indices>
__host__ __device__ auto
downward_recurrence(std::integer_sequence<size_t, indices...>, double* ys, double x_m1, double exp_mx) -> void
{
    (detail::downward<indices>(ys, x_m1, exp_mx), ...);
}
/**@}*/
