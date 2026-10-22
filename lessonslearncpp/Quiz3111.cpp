#include <iostream>

/*int main()
{
    std::cout << "Enter num1: ";
    int num1{};
    std::cin >> num1;

    std::cout << "Enter num2: ";
    int num2{};
    std::cin >> num2;

    std::cout << "Summary of num1 and num2 is " << num1 + num2 << '\n';

    std::cout << "Subtraction of num1 and num2 is " << num1 - num2 << '\n';

    return 0;
}*/
// мой вариант решения.

int main()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    std::cout << "Enter another integer: ";
    int y{};
    std::cin >> y;

    std::cout << x << " + " << y << " = " << x + y << '\n';
    std::cout << x << " - " << y << " = " << x - y << '\n';

    return 0;
}
