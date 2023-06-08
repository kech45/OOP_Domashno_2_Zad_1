#include <iostream>
#include "Power.h"


Power::Power(MathExpression* expr, int expon) {
	expression = expr;
	exponent = expon;
}

double Power::evaluate()const {
	double res = 1;
	if (exponent >= 0) {
		for (int i = 0; i < exponent; ++i) {
			res *= expression->evaluate();
		}
	}
	else {
		for (int i = 0; i < -exponent; ++i) {
			res /= expression->evaluate();
		}
	}
	return res;
}

void Power::print()const {
	std::cout << "(";
	expression->print();
	std::cout << "^" << exponent << ")";
}