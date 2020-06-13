//сортировка (сжатие)
#include"Libraries.h"
#include"Prototypes.h"

float* Sort(float* arr, int size)
{
	float* arr2 = new float[size];

	int j = 0;
	for (int i = 0; i < size; i++)
	{
		if (abs(arr[i]) >= 1)
		{
			arr2[j] = arr[i];// *(arr2+j) = *(arr+i);
			j++;
		}

	}

	for (int i = j; j < size; j++)
	{
		arr2[j] = 0;
	}

	return arr2;
}