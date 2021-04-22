//Connor Lowry
//CIS 1202 501
//April 25, 2021

#ifndef VEHICLE_H
#define VEHICLE_H
#include<string>
#include<iostream>
using namespace std;
class Vehicle
{
private:
	string manufacturer;
	int year;
public:
	Vehicle();
	Vehicle(string, int);
	void setManu(string);
	void setYear(int);
	string getManu();
	int getYear();
	void displayInfo();
};
#endif
