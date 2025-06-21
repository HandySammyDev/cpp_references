//
// Created by lsamu on 6/21/2025.
//

#include "UsefulMathFunctions.h"
#include <iostream>
#include <cmath>

int main() {
    double x = 3;
    double y = 4;

    double max = std::max(x, y);
    std::cout << max << '\n';

    double min = std::min(x, y);
    std::cout << min << '\n';

    double power = pow(x, y);
    std::cout << power << '\n';

    double sqrt_root = sqrt(9);
    std::cout << sqrt_root << '\n';

    double absValue = abs(-3);
    std::cout << absValue << "\n";

    double roundNum = round(3.297);
    std::cout << roundNum << '\n';

    double ceilNum = ceil(3.14); //rounds to the highest number
    std::cout << ceilNum << '\n';

    double floorNum = floor(3.14); //rounds to the lowest number
    std::cout << floorNum << '\n';

    return 0;
}
