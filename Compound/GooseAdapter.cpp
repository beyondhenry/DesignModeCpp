#include "pch.h"
#include "GooseAdapter.h"
#include "Goose.h"

GooseAdapter::GooseAdapter(Goose* pGoose)
{
	m_pGoose = pGoose;
}

GooseAdapter::~GooseAdapter()
{
}

void GooseAdapter::quack(void)
{
	// TODO: 在此处添加实现代码.
	m_pGoose->honk();
}
