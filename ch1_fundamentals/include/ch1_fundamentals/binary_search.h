#pragma once

#include <vector>

namespace ch1_fundamentals {

class BinarySearch {
public:
    static int rank(int key, const std::vector<int> &a);
    static int rankRecursion(int key, const std::vector<int> &a);

private:
    static int rankRecursion(int key, const std::vector<int> &a, int lo, int hi);
};

}