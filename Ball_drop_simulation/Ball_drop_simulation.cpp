
#include<Windows.h>
#include "constants.h"
#include <iostream>

int getInitaialHeight()
{
    int heightInitial;
    std::cout << "Введите высоту башни в метрах\n";
    std::cin >> heightInitial;

    return heightInitial;
}
double calculateHeight(int heightInitial,int seconds)
{
    double heightFallen, currentHeight;
    
    heightFallen = (myConstants::gravity * seconds * seconds) / 2;
    currentHeight = heightInitial - heightFallen;
    return currentHeight;
}
void printHeight(double height, int seconds)
{
    if (height > 0.0)
        std::cout << "На " << seconds << " секунде высота мячика в метрах " << height << "\n";
    else  std::cout << "На " << seconds  << " секунде мячик на земле\n";
}
int main()
{   
    int heightInitial, second=0;
    double height;
    setlocale(LC_ALL, "Russian");
    heightInitial = getInitaialHeight();
    do
    {
        height = calculateHeight(heightInitial, second);
        printHeight(height, second);
        second++;
    } while (height > 0.0);
    return 0;
}


