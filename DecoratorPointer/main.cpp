// DecoratorPointer.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include "pch.h"
#include "ConcreteComponent.h"
#include "ConcreteDecorator.h"

int main()
{
	Beverage* pBeverage = new Espresso();
	cout << pBeverage->getDescription() << " $" << pBeverage->cost() << endl;

	Beverage* pBeverage2 = new DarkRoast();
	pBeverage2 = new Mocha(pBeverage2);
	pBeverage2 = new Mocha(pBeverage2);
	pBeverage2 = new Whip(pBeverage2);
	cout << pBeverage2->getDescription() << " $" << pBeverage2->cost() << endl;

	Beverage* pBeverage3 = new HouseBlend();
	pBeverage3 = new Soy(pBeverage3);
	pBeverage3 = new Mocha(pBeverage3);
	pBeverage3 = new Whip(pBeverage3);
	cout << pBeverage3->getDescription() << " $" << pBeverage3->cost() << endl;
	delete pBeverage;
	delete pBeverage2;
	delete pBeverage3;
	return 0;
}