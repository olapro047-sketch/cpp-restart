#include <iostream>

double adcToVoltage(int code) // В функции считается 0 * 3.3 / 4095.0 = 0. return отправляет 0 обратно в main.
{
    return code * 3.3 / 4095.0;
}

int main()
{
    std::cout << "code 0 -> " << adcToVoltage(0) << "V\n"; // Первая строка вывода: сначала печатается текст "code    0 -> ". Доходит до adcToVoltage(0): значение 0 копируется в параметр code, и управление переходит в функцию.Это значение выводится, потом печатается  V\n (пробел, V и перенос строки).
    std::cout << "code 2048 -> " << adcToVoltage(2048) << "V\n";
    std::cout << "code 4095 -> " << adcToVoltage(4095) << "V\n";
    return 0;
}