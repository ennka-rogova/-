#include <Windows.h>
#include <iostream>
double readNumber()
{
    double x;
    std::cout << "Ведите целое число с плавующей точкой \n";
    std::cin >> x;
    return x;
}
char getOperator()
{
    char ch;
    std::cout << "Ведите один из операторов: +, -, * или / \n";
    std::cin >> ch;
    return ch;
}
void printResult(double x, double y, char ch)
{
    if (ch == '+')
        std::cout << x << " + " << y << " = " << x + y << "\n";
    else if (ch == '-')
        std::cout << x << " - " << y << " = " << x - y << "\n";
    else if (ch == '*')
        std::cout << x << " * " << y << " = " << x * y << "\n";
    else if (ch == '/')
        std::cout << x << " / " << y << " = " << x / y << "\n";
}
int main()
{

    setlocale(LC_ALL, "Russian");
    double number1 = readNumber();
    double number2 = readNumber();
    char ch = getOperator();
    printResult(number1, number2, ch);
    return 0;
}
