//
// Created by lsamu on 6/21/2025.
//

#include "ConsoleCalculator.h"
#include <iostream>

int main() {
    double a;
    double b;
    char operator1;
    double result;

    std::cout << "*********** CALCULATOR ***********\n";
    std::cout << "Num1: ";
    std::cin >> a;

    std::cout << "Operator: +, -, *, /\n";
    std::cin >> operator1;

    std::cout << "Num2: ";
    std::cin >> b;

    switch (operator1) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        default:
            result = -1;
            std::cout << "Error results: " << result << '\n';
    }
    std::cout << result << "\n";

    return 0;
}