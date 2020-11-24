#include <clocale>
#include <iostream>

class Monster {
public:
    enum MonsterType {
        Dragon,
        Goblin,
        Ogre,
        Orc,
        Skeleton,
        Troll,
        Vampire,
        Zombie,
        MAX_MONSTER_TYPES
    };

private:
    MonsterType m_type;
    std::string m_name;
    int m_health;

public:
    Monster(MonsterType type, std::string name, int health) : m_type(type), m_name(name), m_health(health)
    {
    }
    std::string getMonsterType() const
    {
        switch (m_type)
        {
        case Dragon: return "dragon";
        case Goblin: return "goblin";
        case Ogre: return "ogre";
        case Orc: return "orc";
        case Skeleton: return "skeleton";
        case Troll: return "troll";
        case Vampire: return "vampire";
        case Zombie: return "zombie";
        }

        return "Error!";
    }

    void print()  const
    {
        std::cout << "This " << getMonsterType();
        std::cout << " is named " << m_name << " and has " << m_health << " health point.\n";
    }
};
class MonsterGenerator
{

        // Генерируем случайное число между min и max (включительно).
        // Предполагается, что srand() уже был вызван 
    static int getRandomNumber(int min, int max)
    {
        static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0); // используем static, так как это значение нужно вычислить единожды
        // Равномерно распределяем вычисление значения из нашего диапазона
        return static_cast<int>(rand() * fraction * (max - min + 1) + min);
    }
public:
    static Monster generateMonster() 
    {
        return Monster(Monster::Orc, "Jack", 90);
    }
};
int main()
{
    setlocale(LC_ALL, "russian");
    using std::cin;
    using std::cout;

    Monster m = MonsterGenerator::generateMonster();
    Monster jack(Monster::Orc, "Jack", 90);
    jack.print();
   
    return 0;
}
