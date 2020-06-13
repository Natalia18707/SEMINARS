//нахождение максимума среди сумм элементов диагоналей выше главной диагонали
#include"Libraries.h"
#include"Prototypes.h"

int Max1(int** arr, int row, int col)
{
	int max1 = INT_MIN;

	for (int i = 0; i < row; i++)
	{
		int sum = 0;

		for (int j = 0; j < i + 1; j++)
		{

			sum += arr[j][j + col - 1 - i];

		}

		max1 = sum;
	}
	return max1;
}