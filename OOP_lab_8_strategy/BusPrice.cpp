#include "BusPrice.h"

int BusPrice::GetPriceOfDrive(int min_value, int number, int for_one)
{
	if (number < min_value)
	{
		return 0;
	}
	return for_one * for_one;
}
