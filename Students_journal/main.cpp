#include <clocale>
#include <iostream>
#include <utility> 
using std::cin;
using std::cout;
struct Student {
    std::string name;
    int grade;
};
int getCountStudents()
{
    int countStudent;
    cout << "Сколько студентов хотите ввести? \n";
    cin >> countStudent;
    return countStudent;
}
void fillingStudentMassiv(int countStudent, Student* journal)
{
    for (int index = 0; index < countStudent; index++)
    { 
        cout << "Введите имя " << index << " студента\n ";
        cin >> journal[index].name;
        cout << "Введите оценку от 0 до 100 "<<index<<" студента\n ";
        cin >> journal[index].grade;
    }

 }
void sortNames(Student* journal, int length)
{
    // Перебираем каждый элемент массива
    for (int startIndex = 0; startIndex < length; ++startIndex)
    {
        // largestIndex - это индекс наибольшего элемента, который мы обнаружили до сих пор
        int largestIndex = startIndex;

        // Ищем наибольший элемент среди оставшихся элементов массива (начиная со startIndex+1)
        for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
        {
            // Если текущий элемент больше нашего предыдущего наибольшего элемента,
            if (journal[currentIndex].grade > journal[largestIndex].grade)
                // то тогда это наш новый наибольший элемент в текущей итерации
                largestIndex = currentIndex;
        }

        // Меняем местами наш стартовый элемент с найденным наибольшим элементом
        std::swap(journal[startIndex], journal[largestIndex]);
    }
}
void outputStudentMassiv(int countStudent, Student* journal)
{
    // Выводим имена студентов и их оценки
    for (int index = 0; index < countStudent; ++index)
        std::cout << journal[index].name << " получил оценку " << journal[index].grade << "\n";
}
int main()
{
    setlocale(LC_ALL, "russian");
  
    int countStudent = getCountStudents(); 
    Student* journal = new Student[countStudent];

    fillingStudentMassiv(countStudent, journal);
    sortNames(journal, countStudent);
    outputStudentMassiv(countStudent, journal);
  
    // освобождении памяти
    delete[] journal;
    return 0;
}
