#include <iostream>
#include <string>

#include "FuelGauge.h"
#include "Odometer.h"

using namespace std;
int FuelGauge::currentFuel;
int Odometer::currentMilage;

int mpgCount = 0;
int mileLimit = 15;
int refuel;

int main()
{
	
	
	
	
	
	Odometer car;
	FuelGauge car1;
	FuelGauge car2;

	//fill up the car
	
	car2.currFuel();

	for (int i = 0; i < 500; i++)
	{
		
		
		cout << "The car drove " << i + 1 << " miles! " << endl;
		mpgCount++;
		car.addMile();
		
		if (mpgCount == 24)
		{
			car2.burnFuel();
			car2.currFuel();
			mpgCount = 0;
			
			
			
		}
		refuel = car2.currFuel();
		
		if (refuel == 0)
		{
			car2.fillFuel();
		}
		
		
		
		cout << "The current Fuel level is : " << car2.currFuel() << " Gallons" << endl;
	}
	cout << "The odometer reads: " << car.getCurrentMilage() << endl;
}