#pragma once
#include <iostream>

class Array
{
private:
	int* mas;
	int size;
public:
	//Конструкторы 
	Array() = default;
	Array(int mas_p[], int size_p);

	//Методы и аксессоры
	int at(int num);
	int get_SIZE() { return size; }

	//Конструкторы переноса
	Array(Array&& obj)noexcept;

	//Деструктор
	~Array() { delete mas; }
};

