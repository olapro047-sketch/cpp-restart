#include <iostream>

double calcCurrent(double voltage, double resistance) { return voltage / resistance; }
double calcPower(double voltage, double current) { return voltage * current; }

int main() // Описание функции для расчета тока по закону Ома. Одна функция делает одну вещь; результат одной
    функции передан в другую.
{
    // Создай переменные voltage и resistance, положи в них значения 5.0 и 100.0 соответственно
    double voltage = 20.0; // функция возврает дробное значение, поэтому используем double
    double resistance = 4.0;

    double current = calcCurrent(voltage, resistance); // значения копируются в параметры функции. Порядок важен: первый аргумент (5.0) попадает в первый параметр (voltage), второй (100.0) во второй (resistance).«создай переменную current и положи в неё то, что вернёт calcCurrent»
    double power = calcPower(voltage, current);

    std::cout << "I = " << current << " A\n";
    std::cout << "P = " << power << " W\n";
    return 0;
}