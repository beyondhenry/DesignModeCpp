#pragma once

#ifndef _PIZZA_STORE_H
#define _PIZZA_STORE_H

#include "Pizza.h"

class PizzaStore
{
private:
    virtual Pizza* CreatePizza(const std::string& type) = 0;
public:
    Pizza* OrderPizza(const std::string& type)
    {
        Pizza* p_pizza = CreatePizza(type);
        if (p_pizza)
        {
            p_pizza->prepare();
            p_pizza->bake();
            p_pizza->cut();
            p_pizza->box();
        }
        return p_pizza;
    }
};
#endif
