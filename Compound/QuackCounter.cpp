#include "pch.h"
#include "QuackCounter.h"

int QuackCounter::m_numberOfQuacks = 0;

QuackCounter::QuackCounter(Quackable * pDuck)
{
	m_pDuck = pDuck;
}

QuackCounter::~QuackCounter()
{
}

void QuackCounter::quack(void)
{
	// TODO: 在此处添加实现代码.
	m_pDuck->quack();
	m_numberOfQuacks++;
}

int QuackCounter::getQuacks(void)
{
	// TODO: 在此处添加实现代码.
	return m_numberOfQuacks;
}
