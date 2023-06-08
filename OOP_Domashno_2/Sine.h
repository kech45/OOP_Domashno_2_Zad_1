#pragma once
#include <iostream>
#include "MathExpression.h"
#include "Power.h"



class Sine : public MathExpression {
private:
	double expression;
	int approximate;
public:
	Sine() = default;
	Sine(double expr, int approx);
	double evaluate()const override;
	void print()const override;
};