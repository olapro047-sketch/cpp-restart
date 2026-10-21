#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";

    int num{};       // define variable num as an integer variable
    std::cin >> num; // get integer value from user's keyboard

    // решение интуетивное~int doublenum{num * 2}; // define a new variable and initialize it with num * 2
    // std::cout << "Double that number is: " << doublenum << '\n';
    std::cout << "Double that number is: " << num * 2 << '\n'; // не вводим новую переменную, а сразу выводим результат умножения на 2
    std::cout << "Triple that number is: " << num * 3 << '\n';

    return 0;
}