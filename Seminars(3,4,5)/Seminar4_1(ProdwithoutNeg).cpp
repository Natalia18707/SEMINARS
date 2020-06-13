//произведение элементов в строках, в которых нет отрицательных элементов
#include"Libraries.h"
#include"Prototypes.h"

void Seminar4_1()
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

	PrintProduct(arr, row, col);
	
	for (int i = 0; i < row; i++)
		delete arr[i];
	delete[] arr;
	arr = NULL;
}