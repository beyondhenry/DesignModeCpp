#include "pch.h"
#include "Subject.h"

Subject::Subject()
{
	m_temperature = 0.0f;
	m_humidity = 0.0f;
	m_pressure = 0.0f;
}

Subject::~Subject()
{
}

float Subject::getTemperature()
{
	return m_temperature;
}

float Subject::getHumidity()
{
	return m_humidity;
}

float Subject::getPressure()
{
	return m_pressure;
}
