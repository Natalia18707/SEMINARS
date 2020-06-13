//нахождение последнего отрицательного элемента в массиве
#include"Libraries.h"
#include"Prototypes.h"

int Last(float* arr, int size)
{
	int last = -10;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0.0)
		{
			last = i;

		}

	}
	return last;
}