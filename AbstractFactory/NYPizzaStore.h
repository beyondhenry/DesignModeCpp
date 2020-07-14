#pragma once

#ifndef _NY_PIZZA_STORE_H
#define _NY_PIZZA_STORE_H

#include "PizzaStore.h"
#include "CheesePizza.h"
#include "GreekPizza.h"
#include "NYPizzaIngredientFactory.h"
class NYPizzaStore : public PizzaStore
{
private:
    Pizza* CreatePizza(const std::string& type)
    {
        PizzaIngredientFactory* p_factory = new NYPizzaIngredientFactory();
        if ("cheese" == type)
        {
            Pizza* p_pizza = new CheesePizza(p_factory);
            p_pizza->set_name("New York Style Cheese Pizza");
            return p_pizza;
        }
        if ("greek" == type)
        {
            Pizza* p_pizza = new GreekPizza(p_factory);
            p_pizza->set_name("New York Style Greek Pizza");
            return p_pizza;
        }
        return NULL;
    }
};
#endif
