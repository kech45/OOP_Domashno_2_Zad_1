#include <iostream>
#include "Sine.h"
#include "Constant.h"

double factorial(double n) {
	{
		if (n <= 1)
			return 1;
		else
			return n * factorial(n - 1);
	}
}

Sine::Sine(MathExpression* expr, int approx) {
	expression = expr;
	approximate = approx;
}

double Sine::evaluate()const {
	Constant radians( expression->evaluate() * 3.14159 / 180.0);
	double result = 0.0;
	Constant cons1(-1);
	for (int n = 0; n <= approximate; ++n) {
		result += (Power(&cons1, n).evaluate() / factorial(2 * n + 1)) * Power(&radians, 2 * n + 1).evaluate();
	}
	return result;
}
void Sine::print()const {
	std::cout << "sin("; 
	expression->print();
	std::cout << ")";
}
