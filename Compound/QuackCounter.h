#pragma once
#include "Quackable.h"

class QuackCounter :
	public Quackable
{
public:
	QuackCounter(Quackable* pDuck);
	~QuackCounter();
	void quack(void);
	static int getQuacks(void);
private:
	Quackable* m_pDuck;
	static int m_numberOfQuacks;
};

