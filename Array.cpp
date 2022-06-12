#include <iostream>
#include "Array.h"
using namespace std;

const int size = 10;

Array::Array(int* data)
{
	setData(data);
}

Array::~Array()
{
	if (data != nullptr)
		delete[] data;
	cout << "��������� ����������.\n";
}

Array::Array(const Array& other)
{
	copy(other.data, size, data);
	cout << "������� �������.\n";
	Array::~Array();
}

void Array::setData(int* inputData)
{
	*data = *inputData;
}

int* Array::returnData()
{
	return data;
}

