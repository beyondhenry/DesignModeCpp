#include "pch.h"
#include "Observer.h"

Observer::Observer(Subject* pWeatherData)
{
	m_pWeatherData = pWeatherData;
}

Observer::~Observer()
{
}

Subject* Observer::getWeatherData()
{
	return m_pWeatherData;
}
