#pragma once

class MathExpression 
{
public:
	virtual double evaluate()const = 0;
	virtual void print()const = 0;
};