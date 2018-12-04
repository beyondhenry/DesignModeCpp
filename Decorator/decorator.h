#pragma once
#include <string>

using namespace std;

class Beverage {
//private :
protected:
	string m_description = "Unknown Beverage";

public :
	string getDescription();
	virtual double cost() = 0;
};

class CondimentDecorator : public Beverage
{
public:
	virtual string getDescription() = 0;
};

class Espresso : public Beverage
{
public:
	Espresso();
	double cost();
};

class HosueBlend : public Beverage
{
public:
	HosueBlend();
	double cost();
};

class Mocha : public CondimentDecorator
{
private:
	//Beverage m_beverage;
	Beverage* m_pbeverage;

public:
	Mocha(Beverage* pbeverage);
	string getDescription();
	double cost();
};
