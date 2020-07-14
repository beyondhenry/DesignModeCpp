#pragma once

#ifndef _SIMPLE_PIZZA_FACTORY
#define _SIMPLE_PIZZA_FACTORY

#include "CheesePizza.h"
#include "GreekPizza.h"

class SimplePizzaFactory
{
public:
    Pizza* CreatePizza(const std::string& type)
    {
        if ("cheese" == type)
        {
            return new CheesePizza();
        }
        if ("greek" == type)
        {
            return new GreekPizza();
        }
        return NULL;
    }
};
#endif
