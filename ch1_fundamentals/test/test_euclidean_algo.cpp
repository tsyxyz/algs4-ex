#include <gtest/gtest.h>

#include "ch1_fundamentals/euclidean_algo.h"

using namespace ch1_fundamentals;

TEST(TestEuclideanAlgo, case01) {
    int ans = EuclideanAlgo::gcd(1112, 695);
    EXPECT_EQ(ans, 139);
}

TEST(TestEuclideanAlgo, case02) {
    int ans = EuclideanAlgo::gcd(695, 1112);
    EXPECT_EQ(ans, 139);
}