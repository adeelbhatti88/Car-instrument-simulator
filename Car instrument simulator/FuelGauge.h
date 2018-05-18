#pragma once
#include "Odometer.h"
#include <iostream>
#include <string>

using namespace std;
class FuelGauge
{
private:
	static int currentFuel;


public:
	FuelGauge();
	static int currFuel()
	{
		return currentFuel;
	}
	void fillFuel();
	void burnFuel();

	

	

	~FuelGauge();
};

