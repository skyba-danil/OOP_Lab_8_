#include "Taxi.h"

Taxi::Taxi() : Drive() {}

Taxi::Taxi(int numb, string name,Price* pprice, int callPrice, int price1, int kmnumb) : Drive(numb, name, pprice)
{
	this->callPrice = callPrice;
	this->priceOneKm = price1;
	this->kmNumb = kmnumb;
}

int Taxi::PriceOfDrive()
{
	return price->GetPriceOfDrive(callPrice, kmNumb, priceOneKm);
}

int Taxi::GetCallPrice()
{
	return callPrice;
}

int Taxi::GetPriceOneKm()
{
	return priceOneKm;
}

int Taxi::GetKmNumb()
{
	return kmNumb;
}

void Taxi::SetKmNumb(int value)
{
	kmNumb = value;
}

void Taxi::SetCallPrice(int callprice)
{
	this->callPrice = callprice;
}

void Taxi::SetPriceOneKm(int price1)
{
	priceOneKm = price1;
}

Taxi::~Taxi()
{
}
