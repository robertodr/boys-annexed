#pragma once

#include <cmath>
#include <vector>

#include "HornerScheme.hpp"
#include "Utilities.hpp"

// FIXME
#define __host__
#define __device__

namespace pade {
/** @{ Compile-time loop unrolling for Padé approximant */
namespace detail {
template <auto order>
__host__ __device__ auto
pade(double* ys, double x, size_t i) -> void
{
    // FIXME indexing!
    ys(order, i) = (horner(x, Ps<order>()) / horner(x, Qs<order>()));
}

template <auto order>
__host__ __device__ auto
pade(double* ys, double x) -> void
{
    // FIXME indexing!
    ys(order) = (horner(x, Ps<order>()) / horner(x, Qs<order>()));
}
}  // namespace detail

template <auto... indices>
__host__ __device__ auto
pade_approximant(std::integer_sequence<size_t, indices...>, double* ys, double x, size_t i) -> void
{
    (detail::pade<T, B, indices + 1>(ys, x, i), ...);
}

template <auto... indices>
__host__ __device__ auto
pade_approximant(std::integer_sequence<size_t, indices...>, double* ys, double x) -> void
{
    (detail::pade<T, B, indices + 1>(ys, x), ...);
}
/**@}*/

}  // namespace pade
