/*
 * BussManager.cpp
 *
 *  Created on: Oct 28, 2018
 *      Author: shahafdan
 */

#include "BussManager.hpp"

#include <iomanip>
#include <string>
#include <iostream>

#include "Buss.hpp"

const int filler = 50;

string number;
string mfr;
int capacity;
int milage;
char status;
int counter;
string checker;
int holderIndex;
bool exists;
string newMfr;
int newCap;
bool keepAdding;
Buss * busesPtr[filler] = {nullptr};

BussManager::BussManager() //default constructor for BusManager Object
{

	cout << "Please input the 5 letter BUS ID" << endl;
		cin >> number;
		// while number is not 99999 or is not five digits
		while (number != "99999" /*&& number/100000 < 1 && number/100000 > 0*/) //making sure the number is not 99999 and is only 5 digits
		{
			cout << "please insert the manufacturer, capacity, milage and status of the bus" << endl;
			cin >> mfr >> capacity >> milage >> status; //makes my life ten times easier thank you guy who invented the cin option
			busesPtr[counter] = new Buss(number, mfr, capacity, milage, status);//create new bus with a non default constructor
			cout << "Bus Created" << endl;

			counter++;
			cout << " If you'd like to create a new bus, enter it's ID, if not, enter 99999" << endl;
			cin >> number;
		}
		cout<< "THANK YOU. Phase 1 ended, no more input is required" << endl << endl; //PHASE ONE ENDED - READY TO ROLL


}

BussManager::~BussManager() //default constructor for BusManager Object
{
//	for (int k = 0; k < 50; k++){delete busesPtr[k];}
//	cout << "done cleaning up the buses array" << endl;
}

void BussManager::displayHeader()
{
	cout << " ============================================================ " << endl;
	cout << setw(10) << "Bus ID" << setw(20) << "Bus Manufacturer" << setw(15) << "Bus Capacity" << setw(10) << "Milage" << setw(8)<< "Status" << endl;
	cout << " ============================================================ " << endl;
}

void BussManager::displayBus(Buss *newBus)
{
	cout << setw(10) << newBus->getBusId();
	cout <<	setw(20) << newBus->getManufacturer();
	cout <<	setw(15) << newBus->getCapacity();
	cout <<	setw(10) << newBus->getMilage();
	cout <<	setw(8) << newBus->getStatus()<< endl; // a lot of printing and setting distances

}

void BussManager::transaction()
{
	cout << "Enter Transaction Code: (D = Display, L = List a bus, C = Change, O = Order new bus, X = Exit)" << endl;
		string answer;
		cin >> answer;
		while (answer.length() == 1 &&  answer != "X")
		{
			if (answer == "D")//DISPLAY ALL BUSES
				{
					displayHeader(); // display header MY MISTAKE WAS THAT I PUT declarataion in the cpp instead of the hpp
					for (int j = 0; j < filler; j++)
					{
						if(busesPtr[j] != nullptr) //if not blank
						{
							displayBus(busesPtr[j]); //display the indexed bus from the array
						}
					}
					cout << " -end of list" << endl;
				}
			else if(answer == "L") //DISPLAY ONLY ONE BUS
			{
				checker = " "; //reinitialize
				cout << "Enter Bus ID Please: " << endl;
				cin >> checker;
				holderIndex = 0;
				for (int k = 0; k < filler; k++) //for each loop for each Bus Class in the array called busesPtr of Bus Classes
				{
					if(busesPtr[k] != nullptr)//if not a pointer
					{
						if(busesPtr[k]->getBusId() == checker)//if the checker (entered id) equals to the indexed bus id
							{exists = true; displayHeader(); displayBus(busesPtr[k]);} /// if found then diplay the specific bus
					}
					holderIndex = k; //reindex
				}
				if (!exists)
					{cout << "Bus Not Found" << endl;}
				exists = false; //reinitiated for next case

			}
			else if(answer == "C") //STATUS CHANGE
			{
				checker = " ";
				char newStatus =' ';
				exists = false;
				cout << "Enter Bus ID and its New Status Please: " << endl;
				cin >> checker >> newStatus; //thank you god of the cin possiblity
				for (int k = 0; k < filler; k++)
					{
						if(busesPtr[k] != nullptr) //if do not check for nullptr, given error
						{
							if(busesPtr[k]->getBusId() ==  checker) //check for validation
							{
								exists = true;
								busesPtr[k]->setStatus(newStatus); //set status using public method
								cout  << "The Status of the Bus Changed" << endl;
							}
						}
					}
				if (!exists){cout << "Bus Not Found" << endl;}
				exists = false;
			}
			else if(answer == "O")
			{
				keepAdding = true;
				number = " ";
				cout << "Enter Bus ID, manufacturer and capacity" << endl;
				cin >> number >> newMfr >> newCap;
				for(int p = 0; p < filler; p++)
				{
					if (keepAdding)
					{
						if(busesPtr[p] == nullptr)
						{
							busesPtr[p] = new Buss(number, newMfr, newCap);
							keepAdding = false;
						}

					}
				}
				cout << "New Bus Created" << endl;
			}
			cout << "Enter Transaction Code: (D = Display, L = List a bus, C = Change, O = Order new Bus, X = Exit)" << endl;
					cin >> answer;
		}// end of while
}//and of function

void BussManager::cleanup()
{
	for (int g = 0; g < filler; g++)
		{
			if(busesPtr != nullptr)
			{
				delete busesPtr[g];
				busesPtr[g] = nullptr;
			}
		}
}


