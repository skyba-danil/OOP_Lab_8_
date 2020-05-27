#include <iostream>
#include "Drive.h"
#include "Price.h"
#include "Taxi.h"
#include "Bus.h"
#include "TaxiPrice.h"
#include "BusPrice.h"

int main()
{
	Price* taxi = new TaxiPrice();
	Price* bus = new BusPrice();
	Drive* drive1 = new Taxi(4554, "Maxym", taxi, 15, 15, 15);
	Drive* drive2 = new Bus(6666, "Mykola", bus, 15, 15, 15);
	cout << *drive1 << " " << drive1->PriceOfDrive() << endl;
	cout << *drive2 << " " << drive2->PriceOfDrive() << endl;
}