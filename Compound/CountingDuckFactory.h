/*
	创建有计数功能的工厂
*/
#pragma once
#include "AbstractDuckFactory.h"

class CountingDuckFactory :
	public AbstractDuckFactory
{
public:
	CountingDuckFactory();
	~CountingDuckFactory();
	Quackable* createMallardDuck(void);
	Quackable* createRedheadDuck(void);
	Quackable* createDuckCall(void);
	Quackable* createRubberDuck(void);
};

