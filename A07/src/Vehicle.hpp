/*
 * Vehicle.hpp
 *
 *  Created on: Nov 7, 2018
 *      Author: shahafdan
 */

#ifndef VEHICLE_HPP_
#define VEHICLE_HPP_
#include <string>
using namespace std;

class Vehicle
{
protected:
	string vehicleID;
	string mfr;
	int capacity;
	char status;

public:
	Vehicle(string, string, int , char);
	Vehicle();
	virtual void displayVehicleInfo();
	virtual void displayHeader();
	virtual ~Vehicle();
};

#endif /* VEHICLE_HPP_ */

//TODO
//Add public virtual function "display information on bus type vehicle" function
//VIrtual Destructor??
