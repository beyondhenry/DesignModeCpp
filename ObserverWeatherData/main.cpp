// ObserverWeatherData.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include "WeatherData.h"
#include "CurrentConditionsDisplay.h"
#include "Thermometer.h"

int main()
{
	WeatherData* pWeatherData = new WeatherData();

	CurrentConditionsDisplay* pCurrentConditionsDisplay = new CurrentConditionsDisplay(pWeatherData);
	cout << "add CurrentConditionsDisplay" << endl;
	Thermometer* pThermometer = new Thermometer(pWeatherData);
	cout << "add Thermometer" << endl;
	pWeatherData->setMeasurements(12.3, 45, 789);

	pCurrentConditionsDisplay->getWeatherData()->removeObserver(pCurrentConditionsDisplay);
	cout << "\nremove CurrentConditionsDisplay" << endl;
	pWeatherData->setMeasurements(78.9, 56, 123);

	pCurrentConditionsDisplay->getWeatherData()->registerObserver(pCurrentConditionsDisplay);
	cout << "\nregister CurrentConditionsDisplay" << endl;
	pWeatherData->setMeasurements(35.6, 24, 798);

	delete pWeatherData;
	return 0;
}
