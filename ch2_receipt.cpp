#include <iostream>

void printLine(const char *text)
{
    std::cout << "=== " << text << " ===" << '\n';
}

double readNumber(const char *prompt)
{
    double value = 0.0;
    std::cout << prompt;
    std::cin >> value;
    return value;
}

double calcSubtotal(double price, double quantity)
{
    return price * quantity;
}

double applyDiscount(double subtotal, double discount)
{
    return subtotal - (subtotal * discount / 100);
}

double applyTax(double subtotal, double tax)
{
    return subtotal + (subtotal * tax / 100);
}

double calcFinalPrice(double price, double quantity, double discount, double tax)
{
    double calcPrice{calcSubtotal(price, quantity)};
    double calcAfterDiscount{applyDiscount(calcPrice, discount)};
    return applyTax(calcAfterDiscount, tax);
}

int main()
{ // Пользователь вводит цену товара, количество, скидку в процентах и налог в процентах. Программа выводит стоимость на каждом шаге

    printLine("Receipt");

    double price{readNumber("Enter item price: ")}; // readNumber читает число(имя функции должно говорить о том, что она делает)
    double quantity{readNumber("Enter quantity: ")};
    double discount{readNumber("Enter discount(%): ")};
    double tax{readNumber("Enter tax(%): ")};

    double finalPrice{calcFinalPrice(price, quantity, discount, tax)};

    std::cout << "Subtotal: " << calcSubtotal(price, quantity) << '\n';
    std::cout << "After discount: " << applyDiscount(calcSubtotal(price, quantity), discount) << '\n';
    std::cout << "After tax: " << applyTax(applyDiscount(calcSubtotal(price, quantity), discount), tax) << '\n';
    std::cout << "Final price: " << finalPrice << '\n';

    printLine("Thank you");

    return 0;
}