#include "pch.h"
#include <stdio.h>
#include "Subject.h"
#include "Thermometer.h"

Thermometer::Thermometer(Subject * pWeatherData):
	Observer(pWeatherData)
{
	pWeatherData->registerObserver(this);
}

Thermometer::~Thermometer()
{
	m_pWeatherData = null;
}

void Thermometer::update(void)
{
	// TODO: �ڴ˴����ʵ�ִ���.
	m_temperature = m_pWeatherData->getTemperature();
	display();
}

void Thermometer::display(void)
{
	// TODO: �ڴ˴����ʵ�ִ���.
	printf("Current conditions : Temperature = %0.1f��.\n", m_temperature);
}
