#pragma once
#include "Price.h"
class TaxiPrice : public Price
{
public:
	int GetPriceOfDrive(int min_value, int number, int for_one) override;
};

