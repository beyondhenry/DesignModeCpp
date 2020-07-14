#pragma once

#ifndef _CHEESE_PIZZA_H
#define _CHEESE_PIZZA_H

#include "Pizza.h"
#include "PizzaIngredientFactory.h"

class CheesePizza : public Pizza
{
private:
    PizzaIngredientFactory* m_p_ingredient_factory;
public:
    CheesePizza(PizzaIngredientFactory* p) : m_p_ingredient_factory(p) {}
    void prepare()
    {
        std::cout << "Preparing " << get_name() << std::endl;
        m_p_sauce = m_p_ingredient_factory->create_sauce();
    }
};

#endif
