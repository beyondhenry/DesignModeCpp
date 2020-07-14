#pragma once

#ifndef _CHICHAGO_PIZZA_STORE_H
#define _CHICHAGO_PIZZA_STORE_H

#include "PizzaStore.h"
#include "ChiChagoCheezePizza.h"
#include "ChiChagoGreekPizza.h"

class ChiChagoPizzaStore : public PizzaStore
{
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
