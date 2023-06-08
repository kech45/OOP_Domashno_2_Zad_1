#include <iostream>
#include "Sum.h"


Sum::Sum(int cap) {
	arr = new double[cap];
}

Sum::~Sum() {
	delete arr;
}

void Sum::addElement(double n) {
	arr[size] = n;
	size++;
}

double Sum:: evaluate()const {
	double sum = 0;
	for (size_t i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum;
}

void Sum:: print()const  {
	std::cout << "The sum is: ";
	for (size_t i = 0; i < size; i++)
	{
		if (i == 0) {
			std::cout << arr[i];
		}
		else if (arr[i] < 0) {
			std::cout << arr[i];
		}
		else {
			std::cout << "+" << arr[i];
		}
	}
	std::cout << std::endl;
}