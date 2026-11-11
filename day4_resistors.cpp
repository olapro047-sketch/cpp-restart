#include <iostream>

double seriesR(double r1, double r2)
{
    return r1 + r2;
}

double parallelR(double r1, double r2)
{
    return r1 * r2 / (r1 + r2);
}

int main() // функции могут быть как короткие «одна формула», так и со сложной формулой, и главное, их можно переиспользовать.
{
    std::cout << "100 and 100 in series: " << seriesR(100.0, 100.0) << "Ohm\n";
    std::cout << "100 and 100 in parallel: " << parallelR(100.0, 100.0) << "Ohm\n";
    std::cout << "330 and 470 in series: " << seriesR(330.0, 470.0) << "Ohm\n";
    std::cout << "330 and 470 in parallel: " << parallelR(330.0, 470.0) << "Ohm\n";
    return 0;
}