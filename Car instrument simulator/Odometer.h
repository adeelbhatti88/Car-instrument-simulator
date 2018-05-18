#pragma once
#include "FuelGauge.h"
class Odometer
{
private:

	static int currentMilage;
public:
	static int getCurrentMilage()
	{
		return currentMilage;
	}

	void setCurrentMilage(int s)
	{
		currentMilage = s;
	}

	void addMile();

	

	Odometer();
	~Odometer();
};

