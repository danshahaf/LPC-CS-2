/*
 * Buss.hpp
 *
 *  Created on: Oct 28, 2018
 *      Author: shahafdan
 */

#ifndef BUSS_HPP_
#define BUSS_HPP_

#include <string>
#include <iomanip>
using namespace std;

class Buss {
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

	//CONSTRUCTORS
	Buss(string, string ,int, int, char);
	Buss(string, string, int);
	Buss();
	~Buss();
};

#endif /* BUSS_HPP_ */
