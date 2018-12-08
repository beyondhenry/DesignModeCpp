#pragma once
#include "Subject.h"
#include "Observer.h"
#include <list>

using namespace std;

class WeatherData : public Subject
{
public:
	WeatherData();
	~WeatherData();
	void registerObserver(Observer* o);
	void removeObserver(Observer* o);
	void notifyObserver(void);
	void measurementsChanged(void);
	void setMeasurements(float temperature, float humidity, float pressure);
private:
	list<Observer*> m_lObserver;
};

