/*
 * functions.cpp
 *
 *  Created on: Oct 17, 2018
 *      Author: shahafdan
 */

//THIS PAGE IS FOR DECLARATIONS



#include <iomanip>
using namespace std;
#include "Bus.hpp"
#include "defs.hpp"
#include <iostream>
void displayBus(Bus *newBus)
{
	cout << setw(10) << newBus->getBusId()<< setw(20) << newBus->getManufacturer() << setw(15) << newBus->getCapacity() << setw(10) << newBus->getMilage() << setw(8) << newBus->getStatus()<< endl;

}

void displayHeader()
{
	cout << " ============================================================ " << endl;
	cout << setw(10) << "Bus ID" << setw(20) << "Bus Manufacturer" << setw(15) << "Bus Capacity" << setw(10) << "Milage" << setw(8)<< "Status" << endl;
	cout << " ============================================================ " << endl;
}


