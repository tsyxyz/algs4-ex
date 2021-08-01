#include "common/in.h"

#include <iostream>
#include <gtest/gtest.h>

using namespace common;

TEST(TestIn, test_int) {
    const std::string INPUT_FILE = "data/ints.txt";
    In in(INPUT_FILE);
    while (in.isEmpty()) {
        int input = in.readInt();
        std::cout << input << " ";
    }
    std::cout << std::endl;
}

TEST(TestIn, test_double) {
    const std::string INPUT_FILE = "data/doubles.txt";
    In in(INPUT_FILE);
    while (in.isEmpty()) {
        double input = in.readDouble();
        std::cout << input << " ";
    }
    std::cout << std::endl;
}