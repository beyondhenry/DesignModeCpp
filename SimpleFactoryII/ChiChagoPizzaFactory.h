#pragma once

#ifndef _CHICHAGO_PIZZA_FACTORY_H
#define _CHICHAGO_PIZZA_FACTORY_H

#include "SimplePizzaFactory.h"
#include "ChiChagoCheezePizza.h"
#include "ChiChagoGreekPizza.h"

class ChiChagoPizzaFactory : public SimplePizzaFactory
{
public:
    Pizza* CreatePizza(const std::string& type)
    {
        if ("cheese" == type)
        {
            return new ChiChagoCheesePizza();
        }
        if ("greek" == type)
        {
            return new ChiChagoGreekPizza();
        }
        return NULL;
    }
};
#endif
