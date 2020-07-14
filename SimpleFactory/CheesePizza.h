#pragma once

#ifndef _CHEESE_PIZZA_H
#define _CHEESE_PIZZA_H
#include <iostream>
#include "Pizza.h"

class CheesePizza : public Pizza
{
public:
    CheesePizza() : Pizza("cheese") {}
    ~CheesePizza() {}
};
#endif
