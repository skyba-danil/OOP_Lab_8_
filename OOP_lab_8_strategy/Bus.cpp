#include "Bus.h"

Bus::Bus()
{
	pricePerOne = 0;
	minPeople = 0;
	currentPeople = 0;
}

Bus::Bus(int numb, string name,Price* pprice,int price, int people, int peopleNow) : Drive(numb ,name, pprice)
{
	pricePerOne = price;
	minPeople = people;
	currentPeople = peopleNow;
}

int Bus::getPricePerOne()
{
	return pricePerOne;
}

int Bus::getMinPeople()
{
	return minPeople;
}

int Bus::getCurrentPeople()
{
	return currentPeople;
}

void Bus::setcurrentPeople(int value)
{
	currentPeople = value;
}

void Bus::setPricePerOne(int value)
{
	if (value < 0)
	{
		throw "incorrect value of pricePerOne ";
	}
	pricePerOne = value;
}

void Bus::setMinPeople(int value)
{
	if (value < 0)
	{
		throw "incorrect value of people number";
	}
	minPeople = value;
}

int Bus::PriceOfDrive()
{

	return price->GetPriceOfDrive(this->minPeople,this->currentPeople,this->pricePerOne);
}

Bus::~Bus()
= default;
