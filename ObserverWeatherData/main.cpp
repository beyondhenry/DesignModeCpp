// main.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include "WeatherData.h"
#include "CurrentConditionsDisplay.h"
#include "Thermometer.h"

int main()
{
	WeatherData* pWeatherData = new WeatherData();
	float temperature = 0.f;
	float humidity = 0.f;
	float pressure = 0.f;

	CurrentConditionsDisplay* pCurrentConditionsDisplay = new CurrentConditionsDisplay(pWeatherData);
	cout << "add CurrentConditionsDisplay" << endl;
	Thermometer* pThermometer = new Thermometer(pWeatherData);
	cout << "add Thermometer" << endl;

	temperature = 12.3f;
	humidity = 45.0;
	pressure = 789.0;
	pWeatherData->setMeasurements(temperature, humidity, pressure);

	pCurrentConditionsDisplay->getWeatherData()->removeObserver(pCurrentConditionsDisplay);
	cout << "\nremove CurrentConditionsDisplay" << endl;

	temperature = 78.9f;
	humidity = 56.0f;
	pressure = 123.0f;
	pWeatherData->setMeasurements(temperature, humidity, pressure);

	pCurrentConditionsDisplay->getWeatherData()->registerObserver(pCurrentConditionsDisplay);
	cout << "\nregister CurrentConditionsDisplay" << endl;

	temperature = 35.6f;
	humidity = 24.0f;
	pressure = 798.0f;
	pWeatherData->setMeasurements(temperature, humidity, pressure);

	delete pWeatherData;
	return 0;
}
