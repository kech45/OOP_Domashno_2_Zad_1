#include <iostream>
#include "Product.h"


Product::Product(int cap) {
	capacity = cap;
	arr = new MathExpression*[capacity];
}

Product::~Product() {
delete arr;
}

void Product::addElement(MathExpression* n) {
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
		produce *= arr[i]->evaluate();
	}
	return produce;
}

void Product::print()const {
	for (size_t i = 0; i < size; i++)
	{
		if (i == 0) {
			arr[i]->print();
		}
		else if (arr[i]->evaluate() < 0) {
			std::cout << "*" << "("; 
			arr[i]->print();
			std::cout << ")";
		}
		else {
			std::cout << "*";
			arr[i]->print();
		}
	}
}