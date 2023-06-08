#include "iostream"
#include "MathExpression.h"
#include "Constant.h"

Constant::Constant(double n) {
	constant = n;
}

double Constant::evaluate()const {
	return constant;
}

void Constant:: print()const  {
	std::cout << this->constant;
}

