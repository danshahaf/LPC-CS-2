/*
 * Bus.hpp
 *
 *  Created on: Oct 10, 2018
 *      Author: shahafdan
 */

#ifndef BUS_HPP_
#define BUS_HPP_
using namespace std;
#include <string>


class Bus
{
private:
	string busID;
	string manufacturer;
	int capacity;
	int milage;
	char status;


public:
	//GETTERS
	string getBusId();
	string getManufacturer();
	int getCapacity();
	int getMilage();
	char getStatus();

	//SETTERS
	void setStatus(char);
	//CONSTRUCTOR
	Bus(string, string, int, int, char);
	virtual ~Bus();
};



#endif /* BUS_HPP_ */
