#include "Array.h"
int Array::at(int num) {
	if (num <=  size) {
		int buffer;
		buffer = mas[num];
		return buffer;
	}

	//¬озвращает в случаи, если нет такого индекса
	return -1;
}

Array::Array(int mas_p[], int size_p) :size{ size_p }, mas{ new int[size_p] } {

	for (size_t i = 0; i < size; i++)
	{
		mas[i] = mas_p[i];
	}

}

Array::Array(Array&& obj)noexcept {
	mas = obj.mas;
	size = obj.size;
	obj.mas = nullptr;
}