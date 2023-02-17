#include <cstdlib>
#include <filesystem>
#include <highfive/H5Easy.hpp>
#include <iostream>
#include <vector>

#include "mcmurchie_davidson/McMurchieDavidson.hpp"

namespace fs = std::filesystem;

int
main()
{
    constexpr auto max_order = 2;

    auto fpath = fs::path("data/boys_reference.h5");

    std::cout << "Path to reference data " << fpath << std::endl;

    auto ref = H5Easy::File(fpath.string(), H5Easy::File::ReadOnly);

    auto cpath = fs::path("data/boys_computed.h5");

    auto computed = H5Easy::File(cpath.string(), H5Easy::File::Overwrite);

    std::cout << "Path to computed data " << cpath << std::endl;

    std::string         lbl, in_lbl, out_lbl;
    std::vector<double> xs, ys;

    // loop over region: lo, mid, hi
    for (const auto& region : {"lo", "mid", "hi"})
    {
        lbl = std::string("/") + region + "_interval";

        in_lbl = lbl + "/xs";
        xs     = H5Easy::load<std::vector<double>>(ref, in_lbl);

        // loop over method: pade, mcmurchie_davidson
        // loop over backend: CPU, GPU
        ys = mcmurchie_davidson::boys_function(max_order, xs);

        auto col = std::vector<double>(xs.size());

        // save order by order
        for (auto o = 0; o < max_order; ++o)
        {
            // collect column
            for (auto i = 0; i < xs.size(); ++i)
            {
                col[i] = ys[o + i * (max_order + 1)];
            }

            out_lbl = lbl + "/mcmurchie_davidson/cpu/ys/order_" + std::to_string(o);

            H5Easy::dump(computed, out_lbl, col);
        }
    }

    return EXIT_SUCCESS;
}
