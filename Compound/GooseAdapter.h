#pragma once
#include "Quackable.h"

class Goose;

class GooseAdapter :
	public Quackable
{
public:
	GooseAdapter(Goose* pGoose);
	~GooseAdapter();
	void quack(void);
private:
	Goose* m_pGoose;
};

