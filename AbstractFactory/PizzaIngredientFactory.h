#pragma once

#ifndef _PIZZA_INGREDIENT_FACTORY_H
#define _PIZZA_INGREDIENT_FACTORY_H

#include "Dough.h"
#include "Sauce.h"

class PizzaIngredientFactory
{
public:
    virtual Dough* create_dough() = 0;
    virtual Sauce* create_sauce() = 0;
};

#endif
