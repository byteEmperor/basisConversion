//
// Created by nat on 5/13/25.
//

#include "decimal_utils.h"
#include <bitset>
#include <iostream>
#include <cmath>

namespace DecimalUtils {

    int toDecimal(std::bitset<32> number) {
        int decimal = 0;

        for (int i = 0; i < 32; i++) {
            int c = (number[i] == true) ? 1 : 0;
            decimal += c * pow(2, i);
        }

        return decimal;
    }

}
