#pragma once
#include "iostream"
#include "MathExpression.h"

class Constant : public MathExpression {
private:
	double constant;
public:
	Constant()= default;
	Constant(double n);
	double evaluate()const override;
	void print()const override;
		

};