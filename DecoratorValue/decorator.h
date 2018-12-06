//#pragma once
#include ".\Component.h"

class CondimentDecorator : public Beverage
{
public:
	virtual string getDescription() = 0;
};
