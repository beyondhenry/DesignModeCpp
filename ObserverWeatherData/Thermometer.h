#pragma once
#include "Observer.h"
#include "DisplayElement.h"

class Subject;

class Thermometer :
	public Observer, public DisplayElement
{
public:
	Thermometer(Subject* pWeatherData);
	~Thermometer();
	void update(void);
	void display(void);
private:
	float m_temperature;
};

