#pragma once
#include <iostream>

class Array
{
private:
	int* mas;
	int size;
public:
	//������������ 
	Array() = default;
	Array(int mas_p[], int size_p);

	//������ � ���������
	int at(int num);
	int get_SIZE() { return size; }

	//������������ ��������
	Array(Array&& obj)noexcept;

	//����������
	~Array() { delete mas; }
};

