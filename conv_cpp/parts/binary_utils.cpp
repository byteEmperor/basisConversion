//
// Created by nat on 5/12/25.
//

#include "binary_utils.h"
#include <bitset>
#include <iostream>

namespace BinaryUtils {

    std::bitset<32> toBinary(int number) {
        std::bitset<32> binary;
        int i = 0;

        while (number != 0) {
            int c = number % 2;

            binary.set(i, (c == 0) ? 0 : 1);

            i++;
            number = number / 2;
        }

        return binary;
    }

}
