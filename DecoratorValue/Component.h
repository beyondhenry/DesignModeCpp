//#include "pch.h"
#pragma once //����ſ�ע�ͣ�������ظ�����ͷ�ļ�
#include <iostream>
#include <string>

using namespace std;

class Beverage
{
public:
	virtual ~Beverage() {};
	virtual string getDescription(); // �������麯�����������ɺ���ʹ��ʱ������ʾ����ȷ
	virtual double cost() = 0;
protected:
	string m_description;
};
