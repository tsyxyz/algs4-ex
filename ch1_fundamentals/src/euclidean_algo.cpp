#include "ch1_fundamentals/euclidean_algo.h"

namespace ch1_fundamentals {

int EuclideanAlgo::gcd(int p, int q) {
    if (q == 0) return p;
    int r = p % q;
    return gcd(q, r);
}

} // namespace ch1_fundamentals