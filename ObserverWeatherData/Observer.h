#pragma once

class Subject;

class Observer
{
public:
	Observer(Subject* pWeatherData);
	virtual ~Observer();
	virtual void update(void) = 0;
	Subject* getWeatherData();
protected:
	Subject* m_pWeatherData;
};

