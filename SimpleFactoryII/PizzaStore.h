#pragma once

#ifndef _PIZZA_STORE_H
#define _PIZZA_STORE_H

#include "SimplePizzaFactory.h"

class PizzaStore
{
private:
    SimplePizzaFactory& m_pizza_factory;
public:
    PizzaStore(SimplePizzaFactory& pizza_factory) : m_pizza_factory(pizza_factory) {}
    Pizza* OrderPizza(const std::string& type)
    {
        Pizza* p_pizza = m_pizza_factory.CreatePizza(type);
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
