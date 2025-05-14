//
// Created by nat on 5/13/25.
//

#ifndef OCTAL_UTILS_H
#define OCTAL_UTILS_H
#include <bitset>
#include <string>

namespace OctalUtils {
    std::string toOctal(std::bitset<33> binary);
    std::bitset<3> octalBinaryMapping(char c);
    char octalBinaryMapping(std::bitset<3> binary);
}


#endif //OCTAL_UTILS_H
