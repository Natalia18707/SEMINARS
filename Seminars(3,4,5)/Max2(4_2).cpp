//нахождение максимума среди сумм элементов диагоналей ниже главной диагонали
#include"Libraries.h"
#include"Prototypes.h"

int Max2(int** arr, int row, int col)
{
	int max2 = INT_MIN;

	for (int i = 0; i < row - 1; i++)
	{
		int sum = 0;

		for (int j = 0; j < i + 1; j++)
		{
			sum += arr[j + col - 1 - i][j];
		}

		max2 = sum;

	}
	return max2;
}