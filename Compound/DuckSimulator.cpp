/*
	I   :	Quackable Interface
	II  :	use adapter to add goose
	III :	counting the quack of duck
	IV  :	build factory to create duck
*/
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
#include "AbstractDuckFactory.h"

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

void DuckSimulator::simulate(/*void*/AbstractDuckFactory* pDuckFactory)
{
	// TODO: �ڴ˴����ʵ�ִ���.
	// װ���߰�װѼ����
	Quackable* pMallardDuck = pDuckFactory->createMallardDuck();
	Quackable* pRedheadDuck = pDuckFactory->createRedheadDuck();
	Quackable* pDuckCall = pDuckFactory->createDuckCall();
	Quackable* pRubberDuck = pDuckFactory->createRubberDuck();
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
