#pragma once
#include <iostream>
#include "MathExpression.h"
#include <vector>

class Power : public MathExpression {
private:
	MathExpression* expression;
	int exponent;
public:
	Power() = default;
	Power(MathExpression* expr, int expon);
	double evaluate()const override;
	void print()const override;
};

