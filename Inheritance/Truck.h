//Connor Lowry
//CIS 1202 501
//April 25, 2021

#ifndef TRUCK_H
#define TRUCK_H
#include<string>
#include<iostream>
#include "Vehicle.h"
using namespace std;

class Truck : public Vehicle
{
private:
	int towCap;
public:
	Truck();
	Truck(int);
	void setTow(int);
	int getTow();
	void displayInfo();
};
#endif
