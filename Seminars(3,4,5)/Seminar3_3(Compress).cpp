//сжатие массива
#include"Libraries.h"
#include"Prototypes.h"

void Seminar3_3()

{
	int size;
	InputSize(size);
	
	float* arr = new float[size];

	InputElements(arr, size);

	Compress(arr, size);

}