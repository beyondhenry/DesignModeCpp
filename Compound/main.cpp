// Compound.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include "DuckSimulator.h"

int main()
{
	DuckSimulator* pSimulator = new DuckSimulator();
	pSimulator->simulate();

	if (NULL != pSimulator)
	{
		delete pSimulator;
		pSimulator = NULL;
	}
}

