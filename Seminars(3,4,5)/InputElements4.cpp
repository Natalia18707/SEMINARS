//ввод элементов квадратной матрицы
#include"Libraries.h"

void InputElements(int** arr, int row, int col)
{
	cout << "Enter the elements: " << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "Element [" << i << "][" << j << "] -->";
			cin >> arr[i][j]; //*(*(arr+i)+j);
		}
	}
}