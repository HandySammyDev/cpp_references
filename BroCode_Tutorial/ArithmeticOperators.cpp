//
// Created by lsamu on 6/20/2025.
//

#include "ArithmeticOperators.h"
#include <iostream>

int main() {
    int students = 29;
    // students += 2;
    // students++;
    //students -= students; // = 0
    //students =- students; // = -20
    //students--;
    // students = students * 2;
    // students *= 2;
    // students = students / 3;
    // students /= 3;
    int remainer = students % 3;

    std::cout << remainer;

    return 0;
}
