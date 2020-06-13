//вывод сжатого массива или ошибки
#include"Libraries.h"
#include"Prototypes.h"

void Compress(float* arr, int size)
{
	float* Parray = Sort(arr, size);


	for (int i = 0; i < size; i++)
	{
		if (arr[i] == Parray[i])
		{
			cout << "Error. The module of each element is greater than 1.";
			break;
		}
		else
			cout << Parray[i] << "  ";
			
	}
	delete[]Parray;
}