//
// Created by nat on 5/13/25.
//

#include "octal_utils.h"

#include <iostream>

namespace OctalUtils {
    std::bitset<3> octalBinaryMapping(char c) {
        switch (c) {
            case '0':
                return std::bitset<3>('0');
                break;
            case '1':
                return std::bitset<3>('1');
                break;
            case '2':
                return std::bitset<3>('2');
                break;
            case '3':
                return std::bitset<3>('3');
                break;
            case '4':
                return std::bitset<3>('4');
                break;
            case '5':
                return std::bitset<3>('5');
                break;
            case '6':
                return std::bitset<3>('6');
                break;
            case '7':
                return std::bitset<3>('7');
                break;
            default:
                std::cout << "Only numbers have been implemented so far!" << '\n';
                return 000;
                break;
        }
    }

    char octalBinaryMapping(std::bitset<3> binary) {
        switch (static_cast<int>(binary.to_ulong())) {
            case 0b000:
                return '0';
                break;
            case 0b001:
                return '1';
                break;
            case 0b010:
                return '2';
                break;
            case 0b011:
                return '3';
                break;
            case 0b100:
                return '4';
                break;
            case 0b101:
                return '5';
                break;
            case 0b110:
                return '6';
                break;
            case 0b111:
                return '7';
                break;
            default:
                std::cout << "Only numbers have been implemented so far!" << '\n';
                return '0';
                break;
        }
    }

    std::string toOctal(std::bitset<33> binary) {
        std::string octal = "";
        for (int i=0; i < 11; i++) {
            std::bitset<3> t;
            t.set(0, binary[i * 3]);
            t.set(1, binary[i * 3 + 1]);
            t.set(2, binary[i * 3 + 2]);

            char ct = octalBinaryMapping(t);

            octal += ct;
        }
        return octal;
    }
}
