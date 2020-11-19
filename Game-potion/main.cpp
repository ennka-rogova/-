#include <clocale>
#include <iostream>
enum ItemTypes
{
    ITEM_HEALTH_POTION, // 0
    ITEM_TORCH,         // 1
    ITEM_ARROW,         // 2
    MAX_ITEMS           // 3
};
int countTotalItems(int *items)
{
    int totalItems = 0;
    for (int index = 0; index < MAX_ITEMS; ++index)
        totalItems += items[index];

    return totalItems;
}
int main()
{
    setlocale(LC_ALL, "russian");
    int items[MAX_ITEMS]{ 3,6,12 };

    std::cout << " Игрок имеет "<< countTotalItems(items)<<" предметов\n";
    return 0;
}
