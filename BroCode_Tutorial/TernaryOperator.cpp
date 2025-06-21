//
// Created by lsamu on 6/21/2025.
//

#include "TernaryOperator.h"
#include <iostream>

// Ternary operator ?: = replacement to an if/else statement
// Condition ? expression1 : expression2;

int main() {
    int grade = 75;

    // if (grade >= 60) {
    //     std::cout << "You pass!";
    // }
    // else {
    //     std::cout << "You Failed";
    // }
    grade >= 60 ? std::cout << "You pass!\n" : std::cout << "You failed\n";

    int number = 9;
    number % 2 == 1 ? std::cout << "Odd" : std::cout << "Even";

    bool hungry = true;
    //hungry ? std::cout << "You are hungry" : std::cout << "You are full";
    std::cout << (hungry ? "You are hungry" : "You are full");

    return 0;
}