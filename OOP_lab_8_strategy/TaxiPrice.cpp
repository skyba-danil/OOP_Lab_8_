#include "TaxiPrice.h"

int TaxiPrice::GetPriceOfDrive(int min_value, int number, int for_one)
{
	return min_value + number * for_one;
}
