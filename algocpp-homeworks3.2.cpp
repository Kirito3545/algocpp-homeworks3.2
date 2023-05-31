#include <iostream>
#include "quickSort.h"

void arrPrint(int* arr, const int arrSize)
{
	for (int i = 0; i < arrSize; i++)
	{
		std::cout << arr[i] << "\t";
	};
	std::cout << std::endl;
};


int main()
{
	setlocale(LC_ALL, "Russian");



	int arr[] = { 24, 66, 20, 79, 30, 16, 19, 62, 94, 59, 0, 7, 59, 90, 84, 60, 95, 62 };

	std::cout << "Массив до сортировки: \n";
	arrPrint(arr, std::size(arr));

	quickSort(arr, 0, (std::size(arr) - 1));

	std::cout << "Массив после сортировки: \n";
	arrPrint(arr, std::size(arr));
}