#include "pch.h"
#include "DuckFactory.h"
#include "MallardDuck.h"
#include "RedheadDuck.h"
#include "DuckCall.h"
#include "RubberDuck.h"

DuckFactory::DuckFactory()
{
}


DuckFactory::~DuckFactory()
{
}

Quackable * DuckFactory::createMallardDuck(void)
{
	return new MallardDuck();
}

Quackable * DuckFactory::createRedheadDuck(void)
{
	return new RedheadDuck();
}

Quackable * DuckFactory::createDuckCall(void)
{
	return new DuckCall;
}

Quackable * DuckFactory::createRubberDuck(void)
{
	return new RubberDuck();
}
