#include <iostream> // for std::cout and std::cin

int main()
{
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    std::cout << "You entered " << x << '\n';
    return 0;
}