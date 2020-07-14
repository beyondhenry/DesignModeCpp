#pragma once

#ifndef _NY_PIZZA_STORE_H
#define _NY_PIZZA_STORE_H

#include "PizzaStore.h"
#include "NYCheesePizza.h"
#include "NYGreekPizza.h"

class NYPizzaStore : public PizzaStore
{
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
