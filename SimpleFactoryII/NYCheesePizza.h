#pragma once

#ifndef _NY_CHEESE_PIZZA_H
#define _NY_CHEESE_PIZZA_H

#include <iostream>
#include "Pizza.h"

class NYCheesePizza : public Pizza
{
public:
    NYCheesePizza() : Pizza("ny cheese") {}
    ~NYCheesePizza() {}
};
#endif
