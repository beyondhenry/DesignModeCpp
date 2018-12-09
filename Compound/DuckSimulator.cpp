#include "pch.h"
#include "Quackable.h"
#include "DuckSimulator.h"
#include "MallardDuck.h"
#include "RedheadDuck.h"
#include "DuckCall.h"
#include "RubberDuck.h"
#include "Goose.h"
#include "GooseAdapter.h"
#include "QuackCounter.h"

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
	// 装饰者包装鸭子类
	Quackable* pMallardDuck = new QuackCounter(new MallardDuck());
	Quackable* pRedheadDuck = new QuackCounter(new RedheadDuck());
	Quackable* pDuckCall = new QuackCounter(new DuckCall());
	Quackable* pRubberDuck = new QuackCounter(new RubberDuck());
	//不想计入鹅的叫声因此不去装饰鹅
	Quackable* pGoose = new GooseAdapter(new Goose());

	cout << "Duck Simulator" << endl;

	simulate(pMallardDuck);
	simulate(pRedheadDuck);
	simulate(pDuckCall);
	simulate(pRubberDuck);
	simulate(pGoose);

	// 获取鸭子叫声的次数
	cout << "The ducks quacked " << QuackCounter::getQuacks() << " times." << endl;
}
