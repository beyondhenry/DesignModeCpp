#pragma once

#ifndef _GREEK_PIZZA_H
#define _GREEK_PIZZA_H
#include <iostream>
#include "Pizza.h"

class GreekPizza : public Pizza
{
public:
    GreekPizza() : Pizza("greek") {}
    ~GreekPizza() {}
};

#endif
