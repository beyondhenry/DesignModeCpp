#include "pch.h"
#include <iostream>
#include "decorator.h"

int main()
{
	Beverage* beverage1 = new Espresso();
	cout << beverage1->getDescription() << " $" << beverage1->cost() << endl;

	Beverage* beverage2 = new Mocha(beverage1);
	Beverage* beverage3 = new Mocha(beverage2);
	cout << beverage3->getDescription() << " $" << beverage3->cost() << endl;
}