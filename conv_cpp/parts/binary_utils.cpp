//
// Created by nat on 5/12/25.
//

#include "binary_utils.h"
#include <bitset>
#include <iostream>

namespace BinaryUtils {

    std::bitset<32> toBinary(int number) {
        std::bitset<32> binary;
        for (int i = 31; i >= 0; i--) {
            std::cout << i << ' ';
        }

        return binary;
    }

}
