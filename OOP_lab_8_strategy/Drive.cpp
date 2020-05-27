#include "Drive.h"

Drive::Drive()
{
	carNumber = 0;
	driverName = "";
}

Drive::Drive(int number, string name, Price* price)
{
	carNumber = number;
	driverName = name;
	if(nullptr == price)
	{
		throw "Price can`t be NULL";
	}
	this->price = price;
}

int Drive::GetCarNumb()
{
	return carNumber;
}

string Drive::GetDriverName()
{
	return driverName;
}

void Drive::SetCarNumb(int numb)
{
	if (numb >= 9999 && numb > 999)
	{
		throw ("Incorrect car number!");
	}
	carNumber = numb;
}

void Drive::SetDriveName(string name)
{
	driverName = name;
}

int Drive::PriceOfDrive()
{
	return price->GetPriceOfDrive(0,0,0);
}

Drive::~Drive()
{
}

ostream& operator<<(ostream& out, const Drive& obj)
{
	out << obj.carNumber << ", " << obj.driverName;
	return out;
}
