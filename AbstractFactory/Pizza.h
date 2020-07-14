#pragma once

#ifndef _PIZZA_H
#define _PIZZA_H

#include <iostream>
#include <string>
#include "Dough.h"
#include "Sauce.h"
class Pizza
{
public:
    Pizza() : m_name(), m_p_dough(NULL), m_p_sauce(NULL) {}
    virtual ~Pizza() {}
    virtual void prepare() = 0;
    virtual void bake() { std::cout << "Bake for 25 mins at 350" << std::endl; }
    virtual void cut() { std::cout << "Cutting the pizza into diagonal slices" << std::endl; }
    virtual void box() { std::cout << "Place pizza in official PizzaStore box" << std::endl; }
    void set_name(const std::string& name) { m_name = name; }
    std::string get_name() { return m_name; }
    Dough* m_p_dough;
    Sauce* m_p_sauce;
private:
    std::string m_name;
};
#endif
