#pragma once

#include <cmath>
#include <vector>

#include "HornerScheme.hpp"
#include "Pretabulated.hpp"

namespace mcmurchie_davidson {
auto boys_function(size_t order, const std::vector<double>& xs) -> std::vector<double>;

namespace cpu {
template <auto order>
auto
boys_function(const std::vector<double>& xs) -> std::vector<double>
{
    static_assert(order > 0, "Order should be greater than 0!");

    constexpr auto ncols = order + 1;

    constexpr auto table = pretabulated<order>();

    auto n_xs = xs.size();

    auto ys = std::vector<double>(n_xs * ncols, 0.0);

    const double SQRT_M_PI = std::sqrt(M_PI);

    for (auto i = 0; i < n_xs; ++i)
    {
        auto x            = xs[i];
        auto sqrt_x       = std::sqrt(x);
        ys[0 + i * ncols] = SQRT_M_PI * std::erf(sqrt_x) / (2 * sqrt_x);

        auto p = grid_point(x);

        if (p < 121)
        {
            auto w = x - 0.1 * p;
            auto y = horner(w, table[p]);

            ys[order + i * ncols] = y;

            // downward recursion
            for (auto o = order - 1; o > 0; --o)
            {
                // TODO rewrite as compile-time recursion
                ys[o + i * ncols] = (2.0 * x * ys[(o + 1) + i * ncols] + std::exp(-x)) / (2 * o + 1);
            }
        }
        else
        {
            // TODO rewrite upward recursion as compile-time recursion
            auto fia = 1.0 / x;
            for (auto o = 1; o < order; ++o)
            {
                ys[(o + 1) + i * ncols] = 0.5 * fia * (2 * o + 1) * ys[o + i * ncols];
            }
        }
    }

    return ys;
}
}  // namespace cpu
}  // namespace mcmurchie_davidson
