//
// Created by lsamu on 6/21/2025.
//

#include "ifStatement.h"
#include <iostream>

int main() {
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 100) {
        std::cout << "You are to old to enter this site";
    }
    else if (age < 0) {
        std::cout << "You haven't been born yet";
    }
    else if (age >= 18) {
        std::cout << "Welcome to the site!";
    }
    else {
        std::cout << "You are not old enough to enter!";
    }

    return 0;
}
