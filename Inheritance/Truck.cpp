//Connor Lowry
//CIS 1202 501
//April 25, 2021

#include<string>
#include<iostream>
#include "Truck.h"
using namespace std;

//Default constructor
Truck::Truck()
{
	towCap = 0;
}

//Constructor
Truck::Truck(int t)
{
	towCap = t;
}

//Sets towing capacity
void Truck::setTow(int t)
{
	towCap = t;
}

//Returns the towing capacity
int Truck::getTow()
{
	return towCap;
}

//Displays info
void Truck::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Towing Capacity: " << getTow() << "\n";
}
