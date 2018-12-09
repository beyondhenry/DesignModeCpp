#include "pch.h"
#include "CountingDuckFactory.h"
#include "MallardDuck.h"
#include "RedheadDuck.h"
#include "DuckCall.h"
#include "RubberDuck.h"
#include "QuackCounter.h"

CountingDuckFactory::CountingDuckFactory()
{
}

CountingDuckFactory::~CountingDuckFactory()
{
}

Quackable * CountingDuckFactory::createMallardDuck(void)
{
	return new QuackCounter(new MallardDuck());
}

Quackable * CountingDuckFactory::createRedheadDuck(void)
{
	return new QuackCounter(new RedheadDuck());
}

Quackable * CountingDuckFactory::createDuckCall(void)
{
	return new QuackCounter(new DuckCall);
}

Quackable * CountingDuckFactory::createRubberDuck(void)
{
	return new QuackCounter(new RubberDuck());
}
