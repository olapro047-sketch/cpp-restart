/*#include <iostream>

int value()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;
    return input;
}

int doubleNumber(int x)
{
    return 2 * x;
}

int main()
{
    std::cout << doubleNumber(value()) << '\n';
    return 0;
}*/

#include <iostream>
int doubleNumber(int x)
{
    return 2 * x;
}

int main()
{
    std::cout << "Enter an integer value: ";
    int x{};
    std::cin >> x;
    std::cout << doubleNumber(x) << '\n';

    return 0;
}