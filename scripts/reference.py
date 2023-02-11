#!/usr/bin/env python3

import h5py
from sympy import Float, Integer, Pow, Range, lowergamma, symbols
from tqdm import trange

x, y, z, t = symbols("x y z t", real=True, positive=True)
i, j, k, l, m, n = symbols("i j k l m n", integer=True, positive=True)


def interval(*, a, b, n):
    a = Float(a)
    b = Float(b)
    n = Integer(n)

    h = (b - a) / n
    return h, [Float(a + h * i) for i in Range(n)]


def boys(n, x):
    """Analytical implementation using the lower gamma function."""
    if x == 0:
        return Float(1 / (2 * n + 1))
    return lowergamma(n + 1 / 2, x) / (2 * Pow(x, (n + 1 / 2)))


if __name__ == "__main__":

    intervals = {
        "lo": (0, 11.5, 10_000),
        "mid": (11.5, 13.5, 1_000),
        "hi": (13.5, 150, 100_000),
    }

    with h5py.File("boys_reference.h5", "w") as fh:

        for k, v in intervals.items():
            h, xs = interval(a=v[0], b=v[1], n=v[2])
            print(
                f"Generated {v[2]} points in [{v[0]}, {v[1]}) with uniform spacing {h:.3f}"
            )

            fh.create_dataset(
                f"{k}_interval/xs",
                data=[x.evalf(30) for x in xs],
                dtype=float,
                compression="gzip",
                compression_opts=9,
            )

            fh[f"{k}_interval/xs"].attrs["min"] = v[0]
            fh[f"{k}_interval/xs"].attrs["max"] = v[1]
            fh[f"{k}_interval/xs"].attrs["step"] = float(h)

            for o in trange(33):
                n = Integer(o)
                fh.create_dataset(
                    f"{k}_interval/ys/order_{o}",
                    data=[boys(n, x).evalf(30) for x in xs],
                    dtype=float,
                    compression="gzip",
                    compression_opts=9,
                )
