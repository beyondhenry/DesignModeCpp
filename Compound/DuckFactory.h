/*
	����û��װ���ߣ��������ܣ��Ĺ���
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

