//Connor Lowry
//CIS 1202 501
//April 25, 2021

#include<iostream>
#include<string>
#include"Vehicle.h"
#include"Car.h"
#include"Truck.h"
using namespace std;

//Tests classes using user input
int main()
{
	Vehicle vehicle;
	Car car;
	Truck truck;
	int tempInt;
	string tempStr;

	cout << "Vehicle Program\n\n";

	//Vehicle test
	cout << "Vehicle:\n";
	cout << "Enter the manufacturer: ";
	getline(cin, tempStr);
	vehicle.setManu(tempStr);
	cout << "Enter the year built: ";
	cin >> tempInt;
	vehicle.setYear(tempInt);
	vehicle.displayInfo();
	cout << "\n\n";

	//Car test
	cout << "Car:\n";
	cout << "Enter the manufacturer: ";
	cin.ignore();
	getline(cin, tempStr);
	car.setManu(tempStr);
	cout << "Enter the year built: ";
	cin >> tempInt;
	car.setYear(tempInt);
	cout << "Enter the number of doors: ";
	cin >> tempInt;
	car.setDoors(tempInt);
	car.displayInfo();
	cout << "\n\n";

	//Truck test
	cout << "Truck:\n";
	cout << "Enter the manufacturer: ";
	cin.ignore();
	getline(cin, tempStr);
	truck.setManu(tempStr);
	cout << "Enter the year built: ";
	cin >> tempInt;
	truck.setYear(tempInt);
	cout << "Enter the towing capacity: ";
	cin >> tempInt;
	truck.setTow(tempInt);
	truck.displayInfo();
	cout << "\n\n";


	return 0;
}