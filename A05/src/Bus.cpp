/*
 * Bus.cpp
 *
 *  Created on: Oct 10, 2018
 *      Author: shahafdan
 */

#include "Bus.hpp"

using namespace std;
#include <string>

//GETTERS
string Bus::getBusId(){return busID;}
string Bus::getManufacturer(){return manufacturer;}
int Bus::getCapacity(){return capacity;}
int Bus::getMilage(){return milage;}
char Bus::getStatus(){return status;}

//SETTERS
void Bus::setStatus(char x){status = x;}

//CONSTUCTOR
Bus::Bus(string ID, string mfr, int cap, int miles, char stts) {
	//initializing parameters
	busID = ID;
	manufacturer = mfr;
	capacity = cap;
	milage = miles;
	status = stts;
}

//DESTRUCTOR
Bus::~Bus() {}

