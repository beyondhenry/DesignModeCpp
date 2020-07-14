#pragma once

#ifndef _SIMPLE_PIZZA_FACTORY
#define _SIMPLE_PIZZA_FACTORY

#include "Pizza.h"

class SimplePizzaFactory
{
public:
    virtual Pizza* CreatePizza(const std::string& type) = 0;
};
#endif
