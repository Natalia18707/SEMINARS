#include"Libraries.h"
//вывод суммы между первым и последним отрицательными элементами
#include"Prototypes.h"

void Seminar3_2()
{
	int size;
	InputSize(size);

	float* arr = new float[size];

	InputElements(arr, size);
	int first = First(arr, size);
	int last = Last(arr, size);

	if (first == last)
		cout << "Error. There is one negative element in the array." << endl;
		else
		if (1 + first == last)
			cout << "Error. There are no elements between first and last negative elements." << endl;
			else
				if (2 + first == last)
					cout << "Error. There is one element between first and last elements." << endl;
				else
					if (first == -1)
						cout << "\n Error. There are no negative elements in the array.\n";
						else
						{
							cout << "The number of the first negative element: " << first 
								<< "  The number of the last negative element: " << last << endl;
							cout << "The sum: " << SumBetweenFirstLast(arr, size) << endl;
						}
		delete[] arr;
}