#pragma once
#include "Price.h"
class BusPrice :
	public Price
{
	int GetPriceOfDrive(int min_value, int number, int for_one) override;
};

