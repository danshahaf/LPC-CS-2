/*
 * Bus.cpp
 *
 *  Created on: Nov 7, 2018
 *      Author: shahafdan
 */

#include "Bus.hpp"
#include <string>
#include "Vehicle.hpp"
#include <iomanip>
#include <iostream>
using namespace std;
 // rb means:  Received Bus variable
string rbID = "";
string rbmfr = "";
int rbcapacity = 0;
char rbstatus = ' ';
int rbmilage = 0;
string rbtireSize = "";
string rbfuelType = "";

// p means:  passed variable
Bus::Bus( string pVehicleID, string pmfr, int pcapacity, char pstatus, int pmilage, string ptireSize, string pfuelType) : Vehicle (pVehicleID, pmfr, pcapacity, pstatus)
{
	vehicleID = pVehicleID;
	mfr = pmfr;
	capacity = pcapacity;
	status = pstatus;
	milage = pmilage;
	tireSize = ptireSize;
	fuelType = pfuelType;

	//setting inside variables to determine variables passed in this constructor into a function
	rbID = pVehicleID;
	rbmfr = pmfr;
	rbcapacity = pcapacity;
	rbstatus = pstatus;
	rbmilage = pmilage;
	rbtireSize = ptireSize;
	rbfuelType = pfuelType;

}
Bus::Bus()
{
	milage = 0;
	tireSize = "";
	fuelType = "";
}
void Bus::displayHeader() //display header (virtual in base class) function
{
	cout << setw(15) << "Vehicle Type "
		 << setw(10) << "Vehicle ID"
		 << setw(15) << "Manufacturer"
		 << setw(10) << "Capacity"
		 << setw(7) << "Status"
		 << setw(10) << "Mileage"
		 << setw(10) << "Tire Size"
		 << setw(10) << "Fuel Type" << endl;
}

void Bus::displayVehicleInfo() //display info (virtual in base class) function
{

	cout << setw(15) << "Bus "
		 << setw(10) << rbID
		 << setw(15) << rbmfr
		 << setw(10) << rbcapacity
		 << setw(7)  << rbstatus
		 << setw(10) << rbmilage
		 << setw(10) << rbtireSize
		 << setw(10) << rbfuelType << endl;
}
Bus::~Bus() //destructor
{

}



