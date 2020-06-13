//нахождение и вывод произведения элементов в строках, в которых нет отрицательных элементов
#include"Libraries.h"
#include"Prototypes.h"

void PrintProduct(int** arr, int row, int col)
{
	int prod = 1;
	int counter = 0;
	int countErorr = 0;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			prod *= arr[i][j];

			if (arr[i][j] < 0)
				counter++;
		}
		if (counter == 0)
			cout << "The row: " << i << "  " << "The product= " << prod << endl;
		else
			countErorr++;

		counter = 0;
		prod = 1;
	}

	if (countErorr == row)
		cout << "Erorr!There are no rows without negative elements.";

}