/*
 * Vehicle.cpp
 *
 *  Created on: Nov 7, 2018
 *      Author: shahafdan
 */

#include "Vehicle.hpp"
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

string rID = "";
string rmfr = "";
int rcapacity = 0;
char rstatus = ' ';

Vehicle::Vehicle()
{
	vehicleID = "";
	mfr = "";
	capacity = 0;
	status = ' ';
}
Vehicle::Vehicle(string pVehicleID, string pmfr, int pcapacity, char pstatus)
{
	vehicleID = pVehicleID;
	mfr = pmfr;
	capacity = pcapacity;
	status = pstatus;

	rID = pVehicleID;
	rmfr = pmfr;
	rcapacity = pcapacity;
	rstatus = pstatus;
}
void Vehicle::displayHeader()
{
	cout << setw(15) << "Vehicle Type"
		 << setw(10) << "Vehicle ID"
		 << setw(15) << "Manufacturer"
		 << setw(10) << "Capacity"
		 << setw(7) << "Status" << endl;
}
void Vehicle::displayVehicleInfo()
{
	cout << setw(15) << "Vehicle"
		 << setw(10) << rID
		 << setw(15) << rmfr
		 << setw(10) << rcapacity
		 << setw(7) << rstatus << endl;

}
Vehicle::~Vehicle() {
	// TODO Auto-generated destructor stub
}

