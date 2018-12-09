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
	// TODO: �ڴ˴����ʵ�ִ���.
	m_pGoose->honk();
}
