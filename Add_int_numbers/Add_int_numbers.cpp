
#include <Windows.h>

#include <iostream>
int readNumber()
{
    int x;
    std::cout << "Ведите целое число\n";
    std::cin >> x;
    return x;
}
void writeAnswer(int summa)
{
    std::cout << "Сумма двух чисел " << summa;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int number1 = readNumber();
    int number2 = readNumber();

    writeAnswer(number1 + number2);
    return 0;
}
