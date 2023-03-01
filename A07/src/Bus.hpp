/*
 * Bus.hpp
 *
 *  Created on: Nov 7, 2018
 *      Author: shahafdan
 */

#ifndef BUS_HPP_
#define BUS_HPP_
#include <string>
#include "Vehicle.hpp"
using namespace std;

class Bus: public Vehicle // Bus >> is a >> Vehicle
{
private: //private members for Bus, regain access in customized contructor
	int milage;
	string tireSize;
	string fuelType;

public:

	Bus(); //default constructor
	Bus( string, string, int, char, int, string, string); //customized construtor
	void displayHeader();
	void displayVehicleInfo();
	~Bus(); //default destructor
};



#endif /* BUS_HPP_ */
