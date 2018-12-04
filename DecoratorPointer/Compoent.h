#pragma once
#include <string>
#include <iostream>

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
