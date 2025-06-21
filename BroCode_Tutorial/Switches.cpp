
#include "Switches.h"
#include <iostream>

int main() {
    int month;
    std::cout << "Enter the month (1-12): ";
    std::cin >> month;

    switch (month) {
        case 1:
            std::cout << "It is January";
            break;
        case 2:
            std::cout << "It is Febuary";
            break;
        case 3:
            std::cout << "It is March";
            break;
        default:
            std::cout << "Please enter only number 1-12";
    }

    return 0;
}