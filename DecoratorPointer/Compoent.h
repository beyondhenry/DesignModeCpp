//#include "pch.h"
#pragma once
#include <string>
#include <iostream>


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
