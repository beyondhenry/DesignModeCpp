#pragma once

#ifndef _NY_PIZZA_FACTORY_H
#define _NY_PIZZA_FACTORY_H

#include "SimplePizzaFactory.h"
#include "NYCheesePizza.h"
#include "NYGreekPizza.h"

class NYPizzaFactory : public SimplePizzaFactory
{
public:
    Pizza* CreatePizza(const std::string& type)
    {
        if ("cheese" == type)
        {
            return new NYCheesePizza();
        }
        if ("greek" == type)
        {
            return new NYGreekPizza();
        }
        return NULL;
    }
};
#endif
