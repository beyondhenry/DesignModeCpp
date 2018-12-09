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
	// TODO: �ڴ˴����ʵ�ִ���.
	m_pDuck->quack();
	m_numberOfQuacks++;
}

int QuackCounter::getQuacks(void)
{
	// TODO: �ڴ˴����ʵ�ִ���.
	return m_numberOfQuacks;
}
