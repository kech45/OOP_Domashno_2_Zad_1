#pragma once
#include <iostream>
#include "MathExpression.h"

class Sum : public MathExpression {
private:
	double* arr;
	int size = 0;
public:
	Sum() = default;
	Sum(int cap);
	~Sum();
	void addElement(double n);
	double evaluate()const override;
	void print()const override;
};