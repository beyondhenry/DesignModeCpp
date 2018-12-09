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
	// TODO: �ڴ˴����ʵ�ִ���.
	pDuck->quack();
}

void DuckSimulator::simulate(void)
{
	// TODO: �ڴ˴����ʵ�ִ���.
	// װ���߰�װѼ����
	Quackable* pMallardDuck = new QuackCounter(new MallardDuck());
	Quackable* pRedheadDuck = new QuackCounter(new RedheadDuck());
	Quackable* pDuckCall = new QuackCounter(new DuckCall());
	Quackable* pRubberDuck = new QuackCounter(new RubberDuck());
	//��������Ľ�����˲�ȥװ�ζ�
	Quackable* pGoose = new GooseAdapter(new Goose());

	cout << "Duck Simulator" << endl;

	simulate(pMallardDuck);
	simulate(pRedheadDuck);
	simulate(pDuckCall);
	simulate(pRubberDuck);
	simulate(pGoose);

	// ��ȡѼ�ӽ����Ĵ���
	cout << "The ducks quacked " << QuackCounter::getQuacks() << " times." << endl;
}
