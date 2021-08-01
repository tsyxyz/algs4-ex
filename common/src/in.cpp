#include "common/in.h"

namespace common {

In::In(const std::string& fileName) : ifs_(fileName) {

}

In::~In() {
    if (ifs_.is_open()) {
        ifs_.close();
    }
}

bool In::isEmpty() {
    return !ifs_.eof();
}

int In::readInt() {
    int ret = -1;
    if (ifs_.good() && !ifs_.eof()) {
        ifs_>> ret;
    }
    return ret;
}

double In::readDouble() {
    double ret = -1.0;
    if (ifs_.good() && !ifs_.eof()) {
        ifs_ >> ret;
    }
    return ret;
}

} // namespace common