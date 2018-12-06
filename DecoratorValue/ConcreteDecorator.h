#pragma once
#include "decorator.h"

class Mocha :public CondimentDecorator
{
public:
	Mocha(Beverage* pBeverage);
	string getDescription();
	double cost();
protected:
	Beverage* m_pBeverage;
};

class Milk :public CondimentDecorator
{
public:
	Milk(Beverage* pBeverage);
	string getDescription();
	double cost();
protected:
	Beverage* m_pBeverage;
};

class Soy :public CondimentDecorator
{
public:
	Soy(Beverage* pBeverage);
	string getDescription();
	double cost();
protected:
	Beverage* m_pBeverage;
};

class Whip :public CondimentDecorator
{
public:
	Whip(Beverage* pBeverage);
	string getDescription();
	double cost();
protected:
	Beverage* m_pBeverage;
};