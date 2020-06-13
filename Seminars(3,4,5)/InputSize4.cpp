//ввод строк и столбцов квадратной матрицы
#include"Libraries.h"

void InputSize4(int& row, int& col)
{
	while (true)
	{
		cout << "Enter a rows of the square matrix --> ";
		cin >> row;

		if (row <= 0)
			cout << "This size is invalid. Please, enter the size > 0" << endl;
		if (row > 32767)
			cout << "This size is invalid. Please, enter the size < 32768" << endl;
		if (row == 1)
			cout << "This size isn't suitable for matrix operations." << endl;
		else
			break;
	}

	 col = row;
}