#pragma once

#ifndef _NY_PIZZA_INGREDIENT_FACTORY_H
#define _NY_PIZZA_INGREDIENT_FACTORY_H

#include "ThinCrustDough.h"
#include "MarinaraSauce.h"

class NYPizzaIngredientFactory : public PizzaIngredientFactory
{
public:
    Dough* create_dough() { std::cout << "Creating Thin Crust Dough" << std::endl; return new ThinCrustDough(); }
    Sauce* create_sauce() { std::cout << "Creating Marinara Sauce" << std::endl; return new MarinaraSauce(); }
};

#endif
