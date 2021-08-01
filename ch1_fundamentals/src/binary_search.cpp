#include "ch1_fundamentals/binary_search.h"

namespace ch1_fundamentals {

int BinarySearch::rank(int key, const std::vector<int> &a) {
    if (a.empty()) return -1;

    int lo = 0;
    int hi = a.size() - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (key < a[mid]) hi = mid - 1;
        else if (key > a[mid]) lo = mid + 1;
        else return mid;
    }
    return -1;
}

int BinarySearch::rankRecursion(int key, const std::vector<int> &a) {
    if (a.empty()) return -1;
    return rankRecursion(key, a, 0, a.size() - 1);
}

int BinarySearch::rankRecursion(int key, const std::vector<int> &a, int lo, int hi) {
    if (lo > hi) return -1;
    int mid = lo + (hi - lo) / 2;
    if (key < a[mid]) return rankRecursion(key, a, lo, mid - 1);
    else if (key > a[mid]) return rankRecursion(key, a, mid + 1, hi);
    else return mid;
}

}