#pragma once
#include "Decorator.h"

class Mocha :public CondimentDecorator
{
public:
	Mocha(Beverage* pBeverage);
	~Mocha();
	string getDescription();
	double cost();
protected:
	Beverage* m_pBeverage;
};

class Milk :public CondimentDecorator
{
public:
	Milk(Beverage* pBeverage);
	~Milk();
	string getDescription();
	double cost();
protected:
	Beverage* m_pBeverage;
};

class Soy :public CondimentDecorator
{
public:
	Soy(Beverage* pBeverage);
	~Soy();
	string getDescription();
	double cost();
protected:
	Beverage* m_pBeverage;
};

class Whip :public CondimentDecorator
{
public:
	Whip(Beverage* pBeverage);
	~Whip();
	string getDescription();
	double cost();
protected:
	Beverage* m_pBeverage;
};
