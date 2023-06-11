#pragma once

#include <cmath>
#include <vector>
#include <stdexcept>
#include <string>
#include <iostream>

#include "Approximants.hpp"
#include "Utilities.hpp"

// FIXME
#define __host__
#define __device__

namespace pade {
namespace cpu {
template <auto M, auto N, auto order>
auto
boys_function(const std::vector<double>& xs) -> std::vector<double>
{
    static_assert(order > 0, "Order should be greater than 0!");

    std::cout << M << " " << N << std::endl;

    constexpr auto ncols = order + 1;

    auto n_xs = xs.size();

    auto ys = std::vector<double>(n_xs * ncols);

    const double SQRT_M_PI = std::sqrt(M_PI);

    constexpr auto odds = odd_numbers<order+1>();

    for (auto i = 0; i < n_xs; ++i)
    {
        auto offset = i * ncols;
        auto x      = xs[i];
        auto sqrt_x = std::sqrt(x);

        if (is_zero(x))
        {
            // compute analytically at the origin
            detail::constexpr_for<0, order + 1, 1>([&ys, &odds, offset](auto o) { ys[o + offset] = 1.0 / (2*o+1); });
        }
        else
        {
            // zero-th order Boys' function
            ys[0 + offset] = SQRT_M_PI * std::erf(sqrt_x) / (2 * sqrt_x);

            if (x <= 12.0)
            {
                // [M/N] Padé approximant for all orders
                compute_approximants<M, N>(make_index_range<1, order+1>{}, ys.data(), x, offset);
            }
            else
            {
                auto x_m1   = 1.0 / x;
                auto exp_mx = std::exp(-x);
                // compile-time unrolled upward recursion
                detail::constexpr_for<0, order, 1>(
                    [&ys, &odds, x_m1, exp_mx, offset](auto o) { ys[(o + 1) + offset] = 0.5 * x_m1 * std::fma(odds[o], ys[o + offset], -exp_mx); });
            }
        }
    }

    return ys;
}
}  // namespace cpu

template <auto M, auto N>
auto
boys_function(size_t order, const std::vector<double>& xs) -> std::vector<double>
{
    switch (order)
    {
        case 0:
            return boys_function_0(xs);
        case 1:
            return cpu::boys_function<M, N, 1>(xs);
        // case 2:
        //     return cpu::boys_function<M, N, 2>(xs);
        // case 3:
        //     return cpu::boys_function<M, N, 3>(xs);
        // case 4:
        //     return cpu::boys_function<M, N, 4>(xs);
        // case 5:
        //     return cpu::boys_function<M, N, 5>(xs);
        // case 6:
        //     return cpu::boys_function<M, N, 6>(xs);
        // case 7:
        //     return cpu::boys_function<M, N, 7>(xs);
        // case 8:
        //     return cpu::boys_function<M, N, 8>(xs);
        // case 9:
        //     return cpu::boys_function<M, N, 9>(xs);
        // case 10:
        //     return cpu::boys_function<M, N, 10>(xs);
        // case 11:
        //     return cpu::boys_function<M, N, 11>(xs);
        // case 12:
        //     return cpu::boys_function<M, N, 12>(xs);
        // case 13:
        //     return cpu::boys_function<M, N, 13>(xs);
        // case 14:
        //     return cpu::boys_function<M, N, 14>(xs);
        // case 15:
        //     return cpu::boys_function<M, N, 15>(xs);
        // case 16:
        //     return cpu::boys_function<M, N, 16>(xs);
        // case 17:
        //     return cpu::boys_function<M, N, 17>(xs);
        // case 18:
        //     return cpu::boys_function<M, N, 18>(xs);
        // case 19:
        //     return cpu::boys_function<M, N, 19>(xs);
        // case 20:
        //     return cpu::boys_function<M, N, 20>(xs);
        // case 21:
        //     return cpu::boys_function<M, N, 21>(xs);
        // case 22:
        //     return cpu::boys_function<M, N, 22>(xs);
        // case 23:
        //     return cpu::boys_function<M, N, 23>(xs);
        // case 24:
        //     return cpu::boys_function<M, N, 24>(xs);
        // case 25:
        //     return cpu::boys_function<M, N, 25>(xs);
        // case 26:
        //     return cpu::boys_function<M, N, 26>(xs);
        // case 27:
        //     return cpu::boys_function<M, N, 27>(xs);
        // case 28:
        //     return cpu::boys_function<M, N, 28>(xs);
        // case 29:
        //     return cpu::boys_function<M, N, 29>(xs);
        // case 30:
        //     return cpu::boys_function<M, N, 30>(xs);
        // case 31:
        //     return cpu::boys_function<M, N, 31>(xs);
        // case 32:
        //     return cpu::boys_function<M, N, 32>(xs);
        default:
            throw std::invalid_argument("Maximum supported order is 32. Requested order is " + std::to_string(order));
    }
}

}  // namespace pade
