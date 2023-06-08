#pragma once
#include <iostream>
#include "MathExpression.h"

class Power : public MathExpression {
private:
	double expression;
	int exponent;
public:
	Power() = default;
	Power(double expr, int expon);
	double evaluate()const override;
	void print()const override;
};

