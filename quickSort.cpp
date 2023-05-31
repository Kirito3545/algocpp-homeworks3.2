#include "quickSort.h"

void quickSort(int* arr, int arrLeft, int arrRight)
{
	
	if (arrLeft >= arrRight)
	{
		return;
	}
	
	if ((arrRight - arrLeft) == 2)
	{
		if (arr[arrLeft] > arr[arrRight])
			std::swap(arr[arrLeft], arr[arrRight]);
		return;
	}

	
	int pivot = arr[(arrLeft + arrRight) / 2];

	int i = arrLeft; 
	int j = arrRight;

	
	while (i <= j)
	{
		while (arr[i] < pivot)
		{
			i++;
		}
		while (arr[j] > pivot)
		{
			j--;
		}
		if (i <= j)
		{
			std::swap(arr[i], arr[j]);
			i++;
			j--;
		};
	}

	quickSort(arr, arrLeft, j);
	quickSort(arr, i, arrRight);
};