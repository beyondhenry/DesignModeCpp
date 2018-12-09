#pragma once
/*
	����һ���������������ι���Ѽ�ӡ�
	�˹���Ӧ�����������ֲ�ͬ���͵�Ѽ�ӵĲ�Ʒ���壬
	��������Ҫ�ó��󹤳�ģʽ
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

