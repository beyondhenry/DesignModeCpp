// Decorator1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include "pch.h"
#include "ConcreteComponent.h"
#include "ConcreteDecorator.h"

int main()
{
	Espresso espresso;
	cout << espresso.getDescription() << " $" << espresso.cost() << endl;

	DarkRoast darkRoast;
	Mocha mocha1(&darkRoast);
	Mocha mocha2(&mocha1);
	Whip whip1(&mocha2);
	cout << whip1.getDescription() << " $" << whip1.cost() << endl;

	HouseBlend houseBlend;
	Soy soy1(&houseBlend);
	Mocha mocha3(&soy1);
	Whip whip2(&mocha3);
	cout << whip2.getDescription() << " $" << whip2.cost() << endl;

	return 0;
}
