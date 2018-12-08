#include "pch.h"
#include <stdio.h>
#include "CurrentConditionsDisplay.h"

CurrentConditionsDisplay::CurrentConditionsDisplay(Subject * pWeatherData)
	:Observer(pWeatherData)
{
	m_pWeatherData->registerObserver(this);
}

CurrentConditionsDisplay::~CurrentConditionsDisplay()
{
	m_pWeatherData = null;
}

void CurrentConditionsDisplay::update(void)
{
	// TODO: 在此处添加实现代码.
	m_temperature = m_pWeatherData->getTemperature();
	m_humidity = m_pWeatherData->getHumidity();
	m_pressure = m_pWeatherData->getPressure();
	display();
}

void CurrentConditionsDisplay::display(void)
{
	// TODO: 在此处添加实现代码.
	printf("Current conditions : Temperature = %0.1f℃, humidity = %0.2f%%RH, pressure = %0.2fkPa.\n", m_temperature, m_humidity, m_pressure);
}
