#include "pch.h"
#include "Compoent.h"

class CondimentDecorator :public Beverage
{
public:
	virtual string getDescription() = 0;
};
