#pragma once

#ifndef _NY_GREEK_PIZZA_H
#define _NY_GREEK_PIZZA_H

#include <iostream>
#include "Pizza.h"

class NYGreekPizza : public Pizza
{
public:
    NYGreekPizza() : Pizza("ny greek") {}
    ~NYGreekPizza() {}
};

#endif
