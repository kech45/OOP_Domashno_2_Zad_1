#include <iostream>
#include "Product.h"


Product::Product(int cap) {
	capacity = cap;
	arr = new double[capacity];
}

Product::~Product() {
delete arr;
}

void Product::addElement(double n) {
	if (size == capacity) {
		throw 5;
	}
	arr[size] = n;
	size++;
}

double Product::evaluate()const {
	double produce = 1;
	for (size_t i = 0; i < size; i++)
	{
		produce *= arr[i];
	}
	return produce;
}

void Product::print()const {
	std::cout << "The produce is: ";
	for (size_t i = 0; i < size; i++)
	{
		if (i == 0) {
			std::cout << arr[i];
		}
		else if (arr[i] < 0) {
			std::cout << "*" << "(" << arr[i] << ")";
		}
		else {
			std::cout << "*" << arr[i];
		}
	}
	std::cout << std::endl;
}