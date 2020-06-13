//вывод максимума среди сумм элементов диагоналей, параллельных главной
#include"Libraries.h"
#include"Prototypes.h"

void Seminar4_2()
{
	int col;
	int row;
	InputSize4(row, col);

	int** arr = new int* [row];
	for (int i = 0; i < row; i++)
	{
		arr[i] = new int[row];
	}

	InputElements(arr, row, col);

	int max1 = Max1(arr, row, col);
	int max2 = Max2(arr, row, col);

	if (max1 == max2)
		cout << "All sums are the same: " << max1 << endl;
	else
		cout << "The max sum = " << Max(max1, max2) << endl;

	for (int i = 0; i < row; i++)
		delete arr[i];
	delete[] arr;
	arr = NULL;
}
