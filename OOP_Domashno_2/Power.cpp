#include <iostream>
#include "Power.h"


Power::Power(double expr, int expon) {
	expression = expr;
	exponent = expon;
}

double Power::evaluate()const {
	double res = 1;
	if (exponent >= 0) {
		for (int i = 0; i < exponent; ++i) {
			res *= expression;
		}
	}
	else {
		for (int i = 0; i < -exponent; ++i) {
			res /= expression;
		}
	}
	return res;
}

void Power::print()const {
	std::cout << "(" << expression << "^" << exponent << ")" << std::endl;
}