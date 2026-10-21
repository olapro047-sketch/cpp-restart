#include <iostream>

int main()
{
    double voltage = 0.0;    // напряжение, В
    double resistance = 0.0; // сопротивление, Ом

    std::cout << "Enter voltage U(V): ";
    std::cin >> voltage;

    std::cout << "Enter resistance R(Ohm): ";
    std::cin >> resistance;

    double current = voltage / resistance; // I=U/R
    double power = voltage * current;      // P=U*I

    std::cout << "Current I=" << current << "A\n";
    std::cout << "Power P=" << power << "W\n";
    return 0;
}