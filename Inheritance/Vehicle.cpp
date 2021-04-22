//Connor Lowry
//CIS 1202 501
//April 25, 2021

#include "Vehicle.h"
#include<string>
#include<iostream>
using namespace std;

Vehicle::Vehicle()
{
	manufacturer = "";
	year = 0;
}

//Sets manufacturer attribute
void Vehicle::setManu(string m)
{
	manufacturer = m;
}

//Sets year attribute
void Vehicle::setYear(int y)
{
	year = y;
}

//Returns the manufacturer
string Vehicle::getManu()
{
	return manufacturer;
}

//Returns the year
int Vehicle::getYear()
{
	return year;
}

//Displays the vehicle info
void Vehicle::displayInfo()
{
	cout << "Manufacturer: " << getManu() << "\n";
	cout << "Year: " << getYear() << "\n";
}