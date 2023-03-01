/*
 * Railcar.hpp
 *
 *  Created on: Nov 7, 2018
 *      Author: shahafdan
 */

#ifndef RAILCAR_HPP_
#define RAILCAR_HPP_
#include <string>
#include "Vehicle.hpp"

using namespace std;

class Railcar: public Vehicle
{
private:
	int power;
	string motorType;
	string wheelInsDate;

public:
	Railcar (); //default
	Railcar( string, string, int , char, int, string, string); //customized constructor
	virtual void displayHeader();
	virtual void displayVehicleInfo();
	~Railcar(); //default virtual
};



#endif /* RAILCAR_HPP_ */
