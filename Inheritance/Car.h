//Connor Lowry
//CIS 1202 501
//April 25, 2021

#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
#include<string>
#include<iostream>
using namespace std;

class Car : public Vehicle
{
private:
	int numDoors;
public:
	Car();
	Car(string, int, int);
	void setDoors(int);
	int getDoors();
	void displayInfo();
};
#endif
