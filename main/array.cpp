#include "array.h"

Array::Array(int ArraySize)
{
	if (ArraySize > 0)
	{
		pArray = new int[ArraySize];
		this->ArraySize = ArraySize;
		this->ArrayStop = 0;
		this->ArrayStep = 2;
	}
}

void Array::showElements()
{
	std::cout << "Array elements ************ " << std::endl;
	for (int i = 0; i < ArrayStop; i++)
	{
		std::cout << pArray[i] << std::endl;
	}
	std::cout << "************************" << std::endl;
}

void Array::expendArray(int size)
{
	if (size < ArraySize)
		return;
	int* new_pArray = new int[size + this->ArraySize];
	memcpy(new_pArray, pArray, ArraySize * sizeof(int));
	delate[] pArray;
	ArraySize += size;
	pArray = new_pArray;
}

int Array::getSize()
{
	return this->ArraySize;
}

int Array::getElemSize()
{
	return this->ArrayStop;
}

void Array::setValue(int val)
{
	pArray[this->ArrayStop] = val;
	this->ArrayStop++;
}

void Array::setArray(int* pArr, int size)
{
	this->ArrayStep = size;
	for (int i = 0; i < ArrayStep; i++)
	{
		this->pArray[this->ArrayStop] = pArr[i];
		this->ArrayStop++;
	}
}

Array::~Array()
{
	delete[] pArray;
}