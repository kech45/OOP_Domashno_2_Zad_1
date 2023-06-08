#pragma once
#include <iostream>
#include "MathExpression.h"
#include "Power.h"
#include <vector>

class Sine : public MathExpression {
private:
	MathExpression* expression;
	int approximate;
public:
	Sine() = default;
	Sine(MathExpression* expr, int approx);
	double evaluate()const override;
	void print()const override;
};