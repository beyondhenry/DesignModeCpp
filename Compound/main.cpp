// main.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include "DuckSimulator.h"
#include "CountingDuckFactory.h"

int main()
{
	DuckSimulator* pSimulator = new DuckSimulator();
	AbstractDuckFactory* pDuckFactory = new CountingDuckFactory();
	pSimulator->simulate(pDuckFactory);

	if (NULL != pSimulator)
	{
		delete pSimulator;
		pSimulator = NULL;
	}
}

