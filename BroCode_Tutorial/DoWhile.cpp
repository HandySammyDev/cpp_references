//
// Created by lsamu on 6/21/2025.
//

#include "DoWhile.h"
#include <iostream>

//do while loop = do some block of code first,
//                THEN repeat if condition is true

int main() {
    int number;

    do {
        std::cout << "Enter a position #: ";
        std::cin >> number;
    }
    while (number<0);

    std::cout << "The # is: " << number;

    return 0;
}