
#include <iostream>
enum class MonsterType {
    OGRE,
    GOBLIN, 
    SKELETON, 
    ORC, 
    TROLL
};
struct Monster {
    MonsterType type;
    std::string name;
    int health;
};
std::string getMonsterType(Monster monster)
{
    if (monster.type == MonsterType::OGRE)
        return "Ogre";
    if (monster.type == MonsterType::GOBLIN)
        return "Goblin";
    if (monster.type == MonsterType::SKELETON)
        return "Skeleton";
    if (monster.type == MonsterType::ORC)
        return "Orc";
    if (monster.type == MonsterType::TROLL)
        return "Troll";
    return "Uknown";
}
void printMonster(Monster monster)
{
    std::cout << "This " << getMonsterType(monster);
    std::cout << " is named " << monster.name << " and has " << monster.health << " health.\n";
}
int main()
{
    Monster goblin = { MonsterType::GOBLIN, "John", 170 };
    Monster orc = { MonsterType::ORC, "James", 35 };
    printMonster(goblin);
    printMonster(orc);
}

