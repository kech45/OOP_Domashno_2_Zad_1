#pragma once
#include <iostream>
#include "MathExpression.h"
#include <vector>

class Sum : public MathExpression {
private:
	MathExpression** arr;
	int size = 0;
public:
	Sum() = default;
	Sum(int cap);
	~Sum();
	void addElement(MathExpression* n);
	double evaluate()const override;
	void print()const override;
};