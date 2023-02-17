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
    auto fpath = fs::path("data/boys_reference.h5");

    std::cout << "fpath " << fpath << std::endl;

    auto file = H5Easy::File(fpath.string(), H5Easy::File::ReadOnly);

    // lo_interval: [0.0, 11.5) region
    {
        auto xs = H5Easy::load<std::vector<double>>(file, "/lo_interval/xs");
        auto ys = mcmurchie_davidson::boys_function(0, xs);
    }

    // mid_interval: [11.5, 13.5) region
    {
        auto xs = H5Easy::load<std::vector<double>>(file, "/mid_interval/xs");
    }

    // hi_interval: [13.5, 150.0) region
    {
        auto xs = H5Easy::load<std::vector<double>>(file, "/hi_interval/xs");
    }

    return EXIT_SUCCESS;
}
