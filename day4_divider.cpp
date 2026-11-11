#include <iostream>

double dividerOut(double vin, double r1, double r2)
{
    return vin * r2 / (r1 + r2);
}

int main() // функцию можно вызывать прямо внутри std::cout << Один вызов, разные аргументы.
{
    std::cout << "Vin=5, R1=1000, R2=1000: Vout = "
              << dividerOut(5.0, 1000.0, 1000.0) << "V\n";
    std::cout << "Vin=12, R1=10000, R2=2200: Vout = "
              << dividerOut(12.0, 10000.0, 2200.0) << "V\n";
    return 0;
}