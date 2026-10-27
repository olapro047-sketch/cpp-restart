#include <iostream>

int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}

void printDouble(int value) // This function now has an integer parameter
{
    std::cout << value << " double is: " << value * 2 << '\n'; // функция printDouble использует значение параметра value.
}

int main()
{
    int num{getValueFromUser()}; // переменная num сначала инициализируется значением, введённым пользователем

    printDouble(num); // Затем вызывается функция printDouble, и значение аргумента num копируется в параметр value функции printDouble.

    return 0;
}
