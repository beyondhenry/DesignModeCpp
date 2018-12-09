#pragma once

class Quackable;

class DuckSimulator
{
public:
	DuckSimulator();
	~DuckSimulator();
	void simulate(Quackable* pDuck);
	void simulate(void);
};

