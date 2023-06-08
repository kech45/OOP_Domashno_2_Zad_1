#pragma once
#include <iostream>
#include "MathExpression.h"

class Product:public MathExpression {
private:
	MathExpression** arr;
	int size = 0;
	int capacity;
public:
	Product() = default;
	Product(int cap);
	~Product();
	void addElement(MathExpression* n);
	double evaluate()const override;
	void print()const override;
};
