
#include <iostream>
#include "add.h"
// ��� ����� ��� ����, ����� main.cpp ����, ��� ������� add() ���������� � ������ �����

int main()
{
    int z;
    int s{ 9 };
    z = add(3, 4);
    std::cout << "The sum of 3 and 4 is: " << z << std::endl;
    std::cout << " " << s << std::endl;
    return 0;
}