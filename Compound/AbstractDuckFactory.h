#pragma once
/*
	建造一个工厂，创建修饰过的鸭子。
	此工厂应该能生产各种不同类型的鸭子的产品家族，
	所以我们要用抽象工厂模式
*/
class Quackable;
class AbstractDuckFactory
{
public:
	AbstractDuckFactory();
	~AbstractDuckFactory();
	virtual Quackable* createMallardDuck(void) = 0;
	virtual Quackable* createRedheadDuck(void) = 0;
	virtual Quackable* createDuckCall(void) = 0;
	virtual Quackable* createRubberDuck(void) = 0;
};

