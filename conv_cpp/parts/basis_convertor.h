//
// Created by nat on 5/12/25.
//

#ifndef BASIS_CONVERTOR_H
#define BASIS_CONVERTOR_H
#include <bitset>

class BasisConvertor {
public:
    std::bitset<32> toBinary (int number);
    int toDecimal (std::bitset<32> number);
    std::string toOctal (std::bitset<33> binary);
};

#endif //BASIS_CONVERTOR_H
