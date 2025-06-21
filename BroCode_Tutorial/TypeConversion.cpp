//
// Created by lsamu on 6/20/2025.
//

#include "TypeConversion.h"
#include <iostream>

int main() {
    // type conversion = conversion a value of one data type to another
    //                   Implicit = automatic
    //                   Explicit = Precede value with new data type (int) x

    // double x = (int)3.14;
    // std::cout << x << '\n';

    // char y = 100; // =d
    // std::cout << y << '\n';

    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;

    std::cout << score << "%\n";

    return 0;
}