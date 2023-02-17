#pragma once

#include <array>
#include <cmath>
#include <utility>
#include <vector>

// FIXME
#define __host__
#define __device__

__host__ inline auto
boys_function_0(const std::vector<double>& xs) -> std::vector<double>
{
    auto n_xs = xs.size();
    auto ys   = std::vector<double>(n_xs, 0.0);

    const double SQRT_M_PI = std::sqrt(M_PI);

    for (auto i = 0; i < n_xs; ++i)
    {
        auto sqrt_x = std::sqrt(xs[i]);
        ys[i]       = SQRT_M_PI * std::erf(sqrt_x) / (2 * sqrt_x);
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
    if constexpr (Start < End)
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
