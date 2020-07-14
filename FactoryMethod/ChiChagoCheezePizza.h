#pragma once

#ifndef _CHICHAGO_CHEESE_PIZZA_H
#define _CHICHAGO_CHEESE_PIZZA_H

#include <iostream>
#include "Pizza.h"

class ChiChagoCheesePizza : public Pizza
{
public:
    ChiChagoCheesePizza() : Pizza("chichago cheese") {}
    ~ChiChagoCheesePizza() {}
};
#endif
