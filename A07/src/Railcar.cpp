/*
 * Railcar.cpp
 *
 *  Created on: Nov 7, 2018
 *      Author: shahafdan
 */

#include "Railcar.hpp"
#include <string>
#include "Vehicle.hpp"
#include <iomanip>
#include <iostream>
using namespace std;
 // rr means: recieved railcar variable
string rrID = "";
string rrmfr = "";
int rrcapacity = 0;
char rrstatus = ' ';
int rrpower = 0;
string rrmotorType = "";
string rrInsDate = "";


// p means: passed variable
Railcar::Railcar( string pVehicleID, string pmfr, int pcapacity, char pstatus, int ppower, string pmotorType, string pwheelInsDate) : Vehicle (pVehicleID, pmfr, pcapacity, pstatus)
{
	power = ppower;
	motorType = pmotorType;
	wheelInsDate = pwheelInsDate;
	vehicleID = pVehicleID;
	mfr = pmfr;
	capacity = pcapacity;
	status = pstatus;

	//used to determine these variables later in a function, so they can be used although they are private. used in the customized constructor
	rrID = pVehicleID;
	rrmfr = pmfr;
	rrcapacity = pcapacity;
	rrstatus = pstatus;
	rrpower = ppower;
	rrmotorType = pmotorType;
	rrInsDate = pwheelInsDate;

}
Railcar::Railcar() //default
{
	power = 0;
	motorType = "";
	wheelInsDate = "";
}
void Railcar::displayHeader()
{
	cout << setw(15) << "Vehicle Type "
		 << setw(10) << "Vehicle ID"
		 << setw(15) << "Manufacturer"
		 << setw(10) << "Capacity"
		 << setw(7) << "Status"
		 << setw(10) << "Power "
		 << setw(10) << "Motor Type"
		 << setw(15) << "Insp. Date" << endl;

}
void Railcar::displayVehicleInfo()
{

	cout << setw(15) << "Railcar "
		 << setw(10) << rrID
		 << setw(15) << rrmfr
		 << setw(10) << rrcapacity
		 << setw(7)  << rrstatus
		 << setw(10) << rrpower << " "
		 << setw(10) << rrmotorType
		 << setw(15) << rrInsDate << endl;
}
Railcar::~Railcar() //default
{
	// TODO Auto-generated destructor stub
}
