/*
 * Buss.cpp
 *
 *  Created on: Oct 28, 2018
 *      Author: shahafdan
 */

#include "Buss.hpp"
using namespace std;
#include <string>
#include <iomanip>
#include <fstream>

//GETTERS
string Buss::getBusId(){return busID;}
string Buss::getManufacturer(){return manufacturer;}
int Buss::getCapacity(){return capacity;}
int Buss::getMilage(){return milage;}
char Buss::getStatus(){return status;}

//SETTERS
void Buss::setStatus(char x){status = x;}

//CONTRUCTORS
Buss::Buss() //default
{
	busID = " ";
	manufacturer = " ";
	capacity = 0;
	milage = 0;
	status = ' ';
}

Buss::Buss(string ID, string mfr, int cap, int miles, char stts) // 5 arguments
{
	//initializing parameters
	busID = ID;
	manufacturer = mfr;
	capacity = cap;
	milage = miles;
	status = stts;
}

Buss::Buss(string pID, string pmfr, int pcap) // 3 arguments
{
	busID = pID;
	manufacturer = pmfr;
	capacity = pcap;
	milage = 0;
	status = 'O';
}


//DESTRUCTOR
Buss::~Buss() {}
