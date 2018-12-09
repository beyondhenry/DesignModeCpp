/*
	创建没有装饰者（计数功能）的工厂
*/
#pragma once
#include "AbstractDuckFactory.h"
class DuckFactory :
	public AbstractDuckFactory
{
public:
	DuckFactory();
	~DuckFactory();
	Quackable* createMallardDuck(void);
	Quackable* createRedheadDuck(void);
	Quackable* createDuckCall(void);
	Quackable* createRubberDuck(void);
};

