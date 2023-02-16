#pragma once

#include <stdexcept>
#include <string>

/* This file was autogenerated on 2023-02-16T14:43 DO NOT EDIT! */

namespace mcmurchie_davidson {
auto
boys_function_md(size_t order, const std::vector<double>& xs) -> void
{
    switch (order)
    {
        case 0:
            return boys_function_md<0>(xs.data());
        case 1:
            return boys_function_md<1>(xs.data());
        case 2:
            return boys_function_md<2>(xs.data());
        case 3:
            return boys_function_md<3>(xs.data());
        case 4:
            return boys_function_md<4>(xs.data());
        case 5:
            return boys_function_md<5>(xs.data());
        case 6:
            return boys_function_md<6>(xs.data());
        case 7:
            return boys_function_md<7>(xs.data());
        case 8:
            return boys_function_md<8>(xs.data());
        case 9:
            return boys_function_md<9>(xs.data());
        case 10:
            return boys_function_md<10>(xs.data());
        case 11:
            return boys_function_md<11>(xs.data());
        case 12:
            return boys_function_md<12>(xs.data());
        case 13:
            return boys_function_md<13>(xs.data());
        case 14:
            return boys_function_md<14>(xs.data());
        case 15:
            return boys_function_md<15>(xs.data());
        case 16:
            return boys_function_md<16>(xs.data());
        case 17:
            return boys_function_md<17>(xs.data());
        case 18:
            return boys_function_md<18>(xs.data());
        case 19:
            return boys_function_md<19>(xs.data());
        case 20:
            return boys_function_md<20>(xs.data());
        case 21:
            return boys_function_md<21>(xs.data());
        case 22:
            return boys_function_md<22>(xs.data());
        case 23:
            return boys_function_md<23>(xs.data());
        case 24:
            return boys_function_md<24>(xs.data());
        case 25:
            return boys_function_md<25>(xs.data());
        case 26:
            return boys_function_md<26>(xs.data());
        case 27:
            return boys_function_md<27>(xs.data());
        case 28:
            return boys_function_md<28>(xs.data());
        case 29:
            return boys_function_md<29>(xs.data());
        case 30:
            return boys_function_md<30>(xs.data());
        case 31:
            return boys_function_md<31>(xs.data());
        case 32:
            return boys_function_md<32>(xs.data());
        default:
            throw invalid_argument("Maximum supported order is 32. Requested order is " + std::to_string(order));
    }
}
}  // namespace mcmurchie_davidson