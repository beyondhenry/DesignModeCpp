#pragma once
#include "Compoent.h"

class Espresso :public Beverage
{
public:
	Espresso();
	double cost();
};

class HouseBlend :public Beverage
{
public:
	HouseBlend();
	double cost();
};

class DarkRoast :public Beverage
{
public:
	DarkRoast();
	double cost();
};

class Decaf :public Beverage
{
public:
	Decaf();
	double cost();
};
