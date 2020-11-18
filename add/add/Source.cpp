
#include <iostream>
#include "add.h"
// это нужно для того, чтобы main.cpp знал, что функция add() определена в другом месте

int main()
{
    int z;
    int s{ 9 };
    z = add(3, 4);
    std::cout << "The sum of 3 and 4 is: " << z << std::endl;
    std::cout << " " << s << std::endl;
    return 0;
}