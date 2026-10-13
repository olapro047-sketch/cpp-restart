#include <iostream> // for std::cout and std::cin

int main()
{
    std::cout << "Enter two numbers separated by a space: ";
    int x{};
    std::cin >> x;
    std::cout << "You entered " << x << '\n';
    return 0;
}