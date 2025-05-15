//
// Created by nat on 5/15/25.
//

#ifndef BINARY_UTILS_H
#define BINARY_UTILS_H
#include <bitset>

namespace BinaryUtils {
    std::bitset<32> toBinary(int number);
    std::bitset<32> toBinary(float number);
}

#endif //BINARY_UTILS_H
