#include "pch.h"
#include "Quackable.h"
#include "DuckSimulator.h"
#include "MallardDuck.h"
#include "RedheadDuck.h"
#include "DuckCall.h"
#include "RubberDuck.h"

DuckSimulator::DuckSimulator()
{
}

DuckSimulator::~DuckSimulator()
{
}

void DuckSimulator::simulate(Quackable* pDuck)
{
	// TODO: 在此处添加实现代码.
	pDuck->quack();
}

void DuckSimulator::simulate(void)
{
	// TODO: 在此处添加实现代码.
	Quackable* pMallardDuck = new MallardDuck();
	Quackable* pRedheadDuck = new RedheadDuck();
	Quackable* pDuckCall = new DuckCall();
	Quackable* pRubberDuck = new RubberDuck();

	cout << "Duck Simulator" << endl;

	simulate(pMallardDuck);
	simulate(pRedheadDuck);
	simulate(pDuckCall);
	simulate(pRubberDuck);
}
