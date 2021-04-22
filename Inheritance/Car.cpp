//Connor Lowry
//CIS 1202 501
//April 25, 2021

#include "Car.h"
#include<string>
#include<iostream>
using namespace std;

//Constructor initializes values
Car::Car()
{
	numDoors = 0;
}

//Constructor
Car::Car(string m, int y, int d)
{
	setDoors(d);
}

//Sets the number of doors
void Car::setDoors(int d)
{
	numDoors = d;
}

//Retuns the number of doors
int Car::getDoors()
{
	return numDoors;
}

//Displays all info
void Car::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Doors: " << getDoors() << "\n";
}
