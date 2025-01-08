#pragma once
#include <iostream>

class Array
{
private:
	int* mas;
	int size;
public:
	//Êîíñòðóêòîðû 
	Array() = default;
	Array(int mas_p[], int size_p);

	//Ìåòîäû è àêñåññîðû
	int at(int num);
	int get_SIZE()noexcept { return size; }

	//Êîíñòðóêòîðû ïåðåíîñà
	Array(Array&& obj)noexcept;

	//Äåñòðóêòîð
	~Array()noexcept { delete mas; }
};

