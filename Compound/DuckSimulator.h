#pragma once

class Quackable;
class AbstractDuckFactory;

class DuckSimulator
{
public:
	DuckSimulator();
	~DuckSimulator();
	void simulate(Quackable* pDuck);
	void simulate(AbstractDuckFactory* pDuckFactory);
};

