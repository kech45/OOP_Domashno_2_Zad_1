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
	std::cout << "Your constant is: " << this->constant << "\n";
}

