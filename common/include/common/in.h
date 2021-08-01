#pragma once

#include <string>
#include <fstream>

namespace common {

class In {
public:
    In(const std::string& fileName);
    ~In();
    int readInt();
    double readDouble();
    bool isEmpty();

private:
    std::ifstream ifs_;
};

} // namespace common