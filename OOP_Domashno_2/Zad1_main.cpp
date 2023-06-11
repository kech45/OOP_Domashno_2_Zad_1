#include <iostream>
#include "MathExpression.h"
#include "Constant.h"
#include "Sum.h"
#include "Product.h"
#include "Power.h"
#include "Sine.h"

int main()
{
	Constant const1(5);
	Constant const2(-5);
	Constant const3(-6);
	Constant const5(2);
	Constant const6(6);
	Constant const7(4);
	Constant const8(45);
	Sum sum1(10);
	sum1.addElement(&const1);
	sum1.addElement(&const2);
	sum1.addElement(&const1);
	std::cout << sum1.evaluate() << std::endl;
	sum1.print();

	Product prod1(10);
	prod1.addElement(&const1);
	prod1.addElement(&const2);
	prod1.addElement(&const1);
	prod1.print();
	std::cout << prod1.evaluate() << std::endl;

	Power pow1(&const7, -3);
	std::cout << pow1.evaluate() << std::endl;
	pow1.print();

	int approxto10 = 10;
	Sine sine1(&const8, approxto10);
	sine1.print();
	std::cout << std::endl;
	std::cout << sine1.evaluate() << std::endl;
	

	Power newPow(&const7, 5);
	Product newProd(5);
	newProd.addElement(&const7);
	newProd.addElement(&const6);
	newProd.addElement(&const5);
	newProd.addElement(&const6);
	Sine newSine(&const1, 10);
	Sum sumNew(20);
	sumNew.addElement(&newPow);
	sumNew.addElement(&newProd);
	sumNew.addElement(&newSine);
	sumNew.print();
	std::cout << std::endl;
	std::cout << sumNew.evaluate();
}
