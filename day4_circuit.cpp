#include <iostream>
double getValue(const char *prompt)//функция возвращает дробное число (тип результата)(параметр, текст подсказки (например, "Enter R1 (Ohm): "). Что такое *, разберём позже на указателях, пока считай это «текст в кавычках»)
{
    double value = 0.0;//создаётся переменная для хранения введённого числа(создаётся переменная для хранения введённого числа)
    std::cout << prompt;
    std::cin >> value;
    return value;
}
double seriesR(double r1, double r2)
{
    return r1 + r2;
}
double parallelR(double r1, double r2)
{
    return r1 * r2 / (r1 + r2);
}
double dividerOut(double vin, double r1, double r2)
{
    return vin * r2 / (r1 + r2);
}
int main()
{
    double r1 = getValue("Enter R1 (Ohm): ");
    double r2 = getValue("Enter R2 (Ohm): ");
    double vin = getValue("Enter Vin (V): ");
    std::cout << "Series:   " << seriesR(r1, r2) << "Ohm\n";
    std::cout << "Parallel: " << parallelR(r1, r2) << "Ohm\n";
    std::cout << "Divider Vout: " << dividerOut(vin, r1, r2) << "V\n";
    return 0;
}