#pragma once

#ifndef _GREEK_PIZZA_H
#define _GREEK_PIZZA_H

#include "Pizza.h"
#include "PizzaIngredientFactory.h"

class GreekPizza : public Pizza
{
private:
    PizzaIngredientFactory* m_p_ingredient_factory;
public:
    GreekPizza(PizzaIngredientFactory* p) : m_p_ingredient_factory(p) {}
    void prepare()
    {
        std::cout << "Preparing " << get_name() << std::endl;
        m_p_dough = m_p_ingredient_factory->create_dough();
    }
};

#endif
