#include "pch.h"
#include "Observer.h"
#include "WeatherData.h"
#include <iterator>

WeatherData::WeatherData()
{
	m_temperature = 0;
	m_humidity = 0;
	m_pressure = 0;
}

WeatherData::~WeatherData()
{
	list<Observer*>::iterator iter, temp;
	for (iter = m_lObserver.begin(); iter != m_lObserver.end(); ++iter)
	{
		delete (*iter);
	}
	m_lObserver.clear();
}


void WeatherData::registerObserver(Observer* o)
{
	// TODO: 在此处添加实现代码.
	m_lObserver.push_back(o);
}


void WeatherData::removeObserver(Observer* o)
{
	// TODO: 在此处添加实现代码.
	list<Observer*>::iterator iter;

	iter = find(m_lObserver.begin(), m_lObserver.end(), o);
	if (m_lObserver.end() != iter)
	{
		m_lObserver.erase(iter);
	}
}

void WeatherData::notifyObserver(void)
{
	// TODO: 在此处添加实现代码.
	list<Observer*>::iterator iter;
	for (iter = m_lObserver.begin(); iter != m_lObserver.end(); ++iter)
	{
		(*iter)->update();
	}
}

void WeatherData::measurementsChanged()
{
	// TODO: 在此处添加实现代码.
	notifyObserver();
}

void WeatherData::setMeasurements(float temperature, float humidity, float pressure)
{
	// TODO: 在此处添加实现代码.
	m_temperature = temperature;
	m_humidity = humidity;
	m_pressure = pressure;
	measurementsChanged();
}
