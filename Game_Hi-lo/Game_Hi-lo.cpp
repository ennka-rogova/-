#include <clocale>
#include <iostream>
#include <cstdlib> // для функций rand() и srand()
#include <ctime> // для функции time()
int getRandomNumber(int min, int max)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    // Равномерно распределяем рандомное число в нашем диапазоне
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}
bool playGame(int guesses, int number)
{
 
    for (int count = 0; count < guesses; count++)
    {
        std::cout << "Угадай число от 1 до 100\n";
        int guess;
        std::cin >> guess;
        if (guess > number)
            std::cout << "Это число меньше\n";
        else if (guess < number) std::cout << "Это число больше\n";
        else return true;
    }
    return false;

}
bool playAgain()
{
    // Продолжаем спрашивать у пользователя, хочет ли он сыграть еще раз до тех пор, пока он не нажмет 'y' или 'n'
    char ch;
    do
    {
        std::cout<< "Хочешь поиграть ещё раз (y/n)?\n ";
        std::cin >> ch;
    } while (ch != 'y' && ch != 'n');

    return (ch == 'y');
}
int main()
{   
    const int guesses=7;
    srand(static_cast<unsigned int>(time(0))); // в качестве стартового числа используем системные часы
    rand(); // сбрасываем первый результат, так как функция rand() не особо хорошо рандомизирует первое случайное число в Visual Studio
    setlocale(LC_ALL, "russian");
    int number = getRandomNumber(1, 100);
    do {
        bool won = playGame(guesses, number);
        if (won) std::cout << "Правильно! Вы выиграли\n";
        else std::cout << "Ты проиграл! Это было число "<< number<<"\n";
      
    } while (playAgain());
    return 0;
}
