#pragma once
#include "Quackable.h"
class DuckCall :
	public Quackable
{
public:
	DuckCall();
	~DuckCall();
	void quack(void);
};

