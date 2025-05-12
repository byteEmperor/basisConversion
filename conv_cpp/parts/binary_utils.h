//
// Created by nat on 5/12/25.
//

#ifndef BINARY_UTILS_H
#define BINARY_UTILS_H
#include <bitset>

namespace BinaryUtils {
    std::bitset<32> toBinary(int number);
    int IntFromBinary(std::bitset<32> binary);
}

#endif //BINARY_UTILS_H
