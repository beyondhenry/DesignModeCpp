#pragma once

#ifndef _PIZZA_STORE_H
#define _PIZZA_STORE_H

#include "SimplePizzaFactory.h"

class PizzaStore
{
private:
    SimplePizzaFactory pizza_factory;
public:
    Pizza* OrderPizza(const std::string& type)
    {
        Pizza* p_pizza = pizza_factory.CreatePizza(type);
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
