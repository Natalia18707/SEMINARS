//нахождение суммы между первым и последним отрицательными элементами
#include"Libraries.h"
#include"Prototypes.h"

float SumBetweenFirstLast(float* arr, int size)
{
	float sumbetweenfl = 0;
	int first = First(arr, size);
	int last = Last(arr, size);

	for (int i = first + 1; i < last; i++)
		sumbetweenfl += arr[i];

	return sumbetweenfl;
}
// 