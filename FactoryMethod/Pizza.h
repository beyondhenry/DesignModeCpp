#pragma once
#ifndef _PIZZA_H
#define _PIZZA_H

#include <iostream>
#include <string>

class Pizza
{
public:
    Pizza(const std::string& type) : m_type(type) {}
    virtual ~Pizza() {}
    virtual void prepare() { std::cout << "prepare " << m_type << std::endl; }
    virtual void bake() { std::cout << "bake " << m_type << std::endl; }
    virtual void cut() { std::cout << "cut " << m_type << std::endl; }
    virtual void box() { std::cout << "box " << m_type << std::endl; }
private:
    std::string m_type;
};
#endif
