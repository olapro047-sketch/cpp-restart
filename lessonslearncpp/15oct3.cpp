#include <iostream>

int main()
{
    std::cout << "Enter three number with space: ";
    int x{};
    int y{};
    int z{};
    std::cin >> x >> y >> z;
    std::cout << "You entered " << x << " ," << y << " and " << z << '\n';

    return 0;
}