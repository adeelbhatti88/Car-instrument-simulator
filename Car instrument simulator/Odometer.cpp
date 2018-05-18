#include "Odometer.h"
#include "FuelGauge.h"



Odometer::Odometer()
{

}

void Odometer::addMile()
{	
	if (currentMilage == 999999)
	{
		currentMilage = 0;
	}
	currentMilage++;
}


Odometer::~Odometer()
{
}
