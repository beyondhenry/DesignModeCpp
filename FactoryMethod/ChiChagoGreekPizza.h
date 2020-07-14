#pragma once

#ifndef _CHICHAGO_GREEK_PIZZA_H
#define _CHICHAGO_GREEK_PIZZA_H

#include <iostream>
#include "Pizza.h"

class ChiChagoGreekPizza : public Pizza
{
public:
    ChiChagoGreekPizza() : Pizza("chichago greek") {}
    ~ChiChagoGreekPizza() {}
};

#endif
