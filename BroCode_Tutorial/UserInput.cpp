//
// Created by lsamu on 6/20/2025.
//

#include "UserInput.h"
#include <iostream>

//cout << (insertion operator)
//cin >> (extraction operator)
int main() {
    std::string name;
    int age;

    std::cout << "Whats your age?: ";
    std::cin >> age; //input

    std::cout << "Whats your name?: ";

    //Gets full line with spaces
    //Eliminates the previous input by extracting the ws (whitespace)
    std::getline(std::cin >> std::ws, name);

    std::cout << "Hello " << name << " you are " << age << " years old";

    return 0;
}
