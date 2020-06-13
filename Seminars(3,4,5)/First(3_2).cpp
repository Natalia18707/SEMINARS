//нахождение первого отрицательного элемента в массиве
#include"Libraries.h"
#include"Prototypes.h"

int First(float* arr, int size)
{
	int first = -1;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0.0)
		{
			first = i;
			break;
		}

	}
	return first;
}