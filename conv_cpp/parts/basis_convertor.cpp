//
// Created by nat on 5/12/25.
//

#include "basis_convertor.h"
#include "binary_utils.h"

std::bitset<32> BasisConvertor::toBinary (int number) {
    return BinaryUtils::toBinary(number);
}

