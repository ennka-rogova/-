#include <clocale>
#include <iostream>

// array - это массив, в котором мы проводим поиски.
// target - это искомое значение.
// min - это индекс минимальной границы массива, в котором мы осуществляем поиск.
// max - это индекс максимальной границы массива, в котором мы осуществляем поиск.
// Функция binarySearch() должна возвращать индекс искомого значения, если он обнаружен. В противном случае, возвращаем -1
int binarySearch(int* array, int target, int min, int max)
{

	if (min > max) return -1;
	int average = min + (max - min) / 2;
	if (array[average] > target) binarySearch(array, target, min, average - 1);
	else if (array[average] < target) binarySearch(array, target, average + 1, max);
	else return average;

}

int main()
{
	int array[] = { 4, 7, 9, 13, 15, 19, 22, 24, 28, 33, 37, 41, 43, 47, 50 };
	setlocale(LC_ALL, "russian");
	std::cout << "Введите число: ";
	int x;
	std::cin >> x;

	int index = binarySearch(array, x, 0, 14);

	if (array[index] == x)
		std::cout << "Хорошо! Ваше значение " << x << " на позиции " << index << " в массиве!\n";
	else
		std::cout << "Увы! Вашего значения " << x << " нет в массиве!\n";
	return 0;
}