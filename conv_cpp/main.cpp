#include <iostream>
#include <basis_convertor.h>

int main() {

    BasisConvertor basisConvertor;
    std::cout << basisConvertor.toBinary(83) << std::endl;
    std::cout << basisConvertor.toDecimal(basisConvertor.toBinary(120)) << std::endl;
    std::cout << basisConvertor.toOctal(000000000000000000000000001010011) << std::endl;


    return 0;
}