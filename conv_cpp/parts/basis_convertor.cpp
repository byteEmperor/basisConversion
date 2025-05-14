//
// Created by nat on 5/12/25.
//

#include "basis_convertor.h"
#include "binary_utils.h"
#include "decimal_utils.h"
#include "octal_utils.h"

std::bitset<32> BasisConvertor::toBinary (int number) {
    return BinaryUtils::toBinary(number);
}

int BasisConvertor::toDecimal (std::bitset<32> number) {
    return DecimalUtils::toDecimal(number);
}

std::string BasisConvertor::toOctal (std::bitset<33> binary) {
    return OctalUtils::toOctal(binary);
}