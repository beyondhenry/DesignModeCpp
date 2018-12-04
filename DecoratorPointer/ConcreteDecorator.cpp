#include "pch.h"
#include "ConcreteDecorator.h"

// Mocha
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

// Milk
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

// Soy
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

// Whip
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