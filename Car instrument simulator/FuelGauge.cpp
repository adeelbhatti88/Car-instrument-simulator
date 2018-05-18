#include "FuelGauge.h"
#include "Odometer.h"





FuelGauge::FuelGauge()
{
	currentFuel = 15;
}

void FuelGauge::burnFuel()
{
	currentFuel--;
}

void FuelGauge::fillFuel()
{
	for (int i = 0; i < 15; i++)
	{
		currentFuel++;
		cout << "Filled car with " << i + 1 << "Gallon of gas." << endl;
	}
}




FuelGauge::~FuelGauge()
{
}
