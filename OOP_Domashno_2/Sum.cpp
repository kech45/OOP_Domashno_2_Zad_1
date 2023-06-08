#include <iostream>
#include "Sum.h"

Sum::Sum(int cap) {
	arr = new MathExpression*[cap];
}

Sum::~Sum() {
	delete arr;
}

void Sum::addElement(MathExpression* n) {
	arr[size] = n;
	size++;
}

double Sum:: evaluate()const {
	double sum = 0;
	for (size_t i = 0; i < size; i++)
	{
		sum += arr[i]->evaluate();
	}
	return sum;
}

void Sum:: print()const  {
	for (size_t i = 0; i < size; i++)
	{
		if (i == 0) {
			arr[i]->print();
		}
		else if (arr[i]->evaluate() < 0) {
			arr[i]->print();
		}
		else {
			std::cout << "+";
			arr[i]->print();
		}
	}
}