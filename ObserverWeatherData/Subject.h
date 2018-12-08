#pragma once
//#include "Observer.h";

#define null 0
class Observer;

class Subject
{
public:
	Subject();
	~Subject();
	virtual void registerObserver(Observer* o) = 0;
	virtual void removeObserver(Observer* o) = 0;
	virtual void notifyObserver() = 0;
	float getTemperature();
	float getHumidity();
	float getPressure();
protected:
	float m_temperature;
	float m_humidity;
	float m_pressure;
};
