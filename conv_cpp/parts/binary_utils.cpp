//
// Created by nat on 5/15/25.
//

#include "binary_utils.h"

namespace BinaryUtils {
    std::bitset<32> toBinary(int number) {
        std::bitset<32> binary;

        int i = 0;
        while (number != 0) {
            binary.set(i, (number % 2) ? 1 : 0);
            number /= 2;
            i++;
        }

        return binary;
    }

    std::bitset<32> toBinary(float number) {
        // Using the IEEE 754 float format
        std::bitset<1> sign_bit;
        std::bitset<8> exponent;
        std::bitset<23> mantissa;

        if (number >= 0) {
            sign_bit.set(0, 0);
        } else {
            sign_bit.set(0, 1);
        }

        // Need to pick up from here
    }

    std::bitset<3> toBinary(char c) {
        std::bitset<3> binary;

        
    }
}