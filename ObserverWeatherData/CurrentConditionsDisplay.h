#pragma once
#include "Observer.h"
#include "Subject.h"
#include "DisplayElement.h"

class CurrentConditionsDisplay :
	public Observer,public DisplayElement
{
public:
	CurrentConditionsDisplay(Subject* pWeatherData);
	~CurrentConditionsDisplay();
	void update(void);
	void display(void);
private:
	float m_temperature;
	float m_humidity;
	float m_pressure;
};
