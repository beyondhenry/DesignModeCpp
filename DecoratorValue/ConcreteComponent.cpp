#include "pch.h"
#include "ConcreteComponent.h"

Espresso::Espresso()
{
	m_description = "Espresso";
}

double Espresso::cost()
{
	return 1.99;
}

HouseBlend::HouseBlend()
{
	m_description = "House Blend Coffee";
}

double HouseBlend::cost()
{
	return 0.89;
}

DarkRoast::DarkRoast()
{
	m_description = "Dark Roast Coffee";
}

double DarkRoast::cost()
{
	return 0.99;
}

Decaf::Decaf()
{
	m_description = "Decaf Coffee";
}

double Decaf::cost()
{
	return 1.05;
}