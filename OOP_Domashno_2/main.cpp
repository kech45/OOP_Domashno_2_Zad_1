#include <iostream>
#include "MathExpression.h"
#include "Constant.h"
#include "Sum.h"
#include "Product.h"
#include "Power.h"
#include "Sine.h"

int main()
{
	Sum sum1(10);
	sum1.addElement(5);
	sum1.addElement(-6);
	sum1.addElement(5);
	std::cout << sum1.evaluate() << std::endl;
	sum1.print();
	
	Product prod1(10);
	prod1.addElement(5);
	prod1.addElement(-5);
	prod1.addElement(5);
	prod1.print();
	std::cout << prod1.evaluate() << std::endl;

	Power pow1(5, -3);
	std::cout << pow1.evaluate() << std::endl;
	pow1.print();

	int approxto10 = 10;
	Sine sine1(45, approxto10);
	std::cout << sine1.evaluate();
}
