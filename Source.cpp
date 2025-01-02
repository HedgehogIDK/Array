#include <iostream>
#include "Array.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");

	const int SIZE1 = 10, SIZE2 = 15;
	int array1[SIZE1]{ 3,4,5,7,9,2,4,3,10020,232 };
	int array2[SIZE2]{ 435,453,76,8,32,3,5,7,43,234,7,9,3,56,8 };

	Array mas{ array1, SIZE1 };
	Array mas2{ Array{array2, SIZE2} };

	cout << "Array 1:\n";

	for (int i = 0; i < mas.get_SIZE(); i++)
	{
		cout << mas.at(i) << endl;
	}

	cout << "Array 2:\n";

	for (int i = 0; i < mas2.get_SIZE(); i++)
	{
		cout << mas2.at(i) << endl;
	}

	return 0;
}