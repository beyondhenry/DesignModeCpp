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
	virtual string getDescription();
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

Mocha::~Mocha()
{
	delete m_pBeverage;
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

Milk::~Milk()
{
	delete m_pBeverage;
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

Soy::~Soy()
{
	delete m_pBeverage;
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

Whip::~Whip()
{
	delete m_pBeverage;
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
	Beverage* pBeverage = new Espresso();
	cout << pBeverage->getDescription() << " $" << pBeverage->cost() << endl;

	Beverage* pBeverage2 = new DarkRoast();
	pBeverage2 = new Mocha(pBeverage2);
	pBeverage2 = new Mocha(pBeverage2);
	pBeverage2 = new Whip(pBeverage2);
	cout << pBeverage2->getDescription() << " $" << pBeverage2->cost() << endl;

	Beverage* pBeverage3 = new HouseBlend();
	pBeverage3 = new Soy(pBeverage3);
	pBeverage3 = new Mocha(pBeverage3);
	pBeverage3 = new Whip(pBeverage3);
	cout << pBeverage3->getDescription() << " $" << pBeverage3->cost() << endl;
	delete pBeverage;
	delete pBeverage2;
	delete pBeverage3;
	return 0;
}
