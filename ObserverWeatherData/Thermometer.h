#pragma once
#include "Subject.h"
#include "Observer.h"
#include "DisplayElement.h"

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

