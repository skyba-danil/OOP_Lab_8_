#pragma once
#include <iostream>
#include "Price.h"

using namespace std;

class Drive
{
private:
	int carNumber;
	string driverName;
protected:
	Price* price;
public:
	Drive();
	Drive(int, string, Price*);

	int GetCarNumb();
	string GetDriverName();

	void SetCarNumb(int numb);
	void SetDriveName(string name);

	virtual int PriceOfDrive();

	friend ostream& operator<<(ostream& out, const Drive& obj);

	~Drive();
};