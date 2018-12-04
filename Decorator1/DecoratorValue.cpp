// Decorator1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Beverage
{
public:
	virtual ~Beverage() {};
	virtual string getDescription(); // 必须是虚函数，否则会造成后期使用时描述显示不正确
	virtual double cost() = 0;
protected:
	string m_description;
};

class CondimentDecorator :public Beverage
{
public:
	virtual string getDescription() = 0;
};

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

string Beverage::getDescription()
{
	return m_description;
}

Espresso::Espresso()
{
	m_description = "Espresso";
}

double Espresso::cost()
{
	return 1.99;
}

HouseBlend::HouseBlend()
{
	m_description = "House Blend Coffee";
}

double HouseBlend::cost()
{
	return 0.89;
}

DarkRoast::DarkRoast()
{
	m_description = "Dark Roast Coffee";
}

double DarkRoast::cost()
{
	return 0.99;
}

Decaf::Decaf()
{
	m_description = "Decaf Coffee";
}

double Decaf::cost()
{
	return 1.05;
}

Mocha::Mocha(Beverage* pBeverage)
{
	m_pBeverage = pBeverage;
}

string Mocha::getDescription()
{
	return m_pBeverage->getDescription() + " + Mocha";
}

double Mocha::cost()
{
	return 0.20 + m_pBeverage->cost();
}

Milk::Milk(Beverage* pBeverage)
{
	m_pBeverage = pBeverage;
}

string Milk::getDescription()
{
	return m_pBeverage->getDescription() + " + Milk";
}

double Milk::cost()
{
	return 0.10 + m_pBeverage->cost();
}

Soy::Soy(Beverage* pBeverage)
{
	m_pBeverage = pBeverage;
}

string Soy::getDescription()
{
	return m_pBeverage->getDescription() + " + Soy";
}

double Soy::cost()
{
	return 0.15 + m_pBeverage->cost();
}

Whip::Whip(Beverage* pBeverage)
{
	m_pBeverage = pBeverage;
}

string Whip::getDescription()
{
	return m_pBeverage->getDescription() + " + Whip";
}

double Whip::cost()
{
	return 0.10 + m_pBeverage->cost();
}

int main()
{
	Espresso espresso;
	cout << espresso.getDescription() << " $" << espresso.cost() << endl;

	DarkRoast darkRoast;
	Mocha mocha1(&darkRoast);
	Mocha mocha2(&mocha1);
	Whip whip1(&mocha2);
	cout << whip1.getDescription() << " $" << whip1.cost() << endl;

	HouseBlend houseBlend;
	Soy soy1(&houseBlend);
	Mocha mocha3(&soy1);
	Whip whip2(&mocha3);
	cout << whip2.getDescription() << " $" << whip2.cost() << endl;

	return 0;
}
