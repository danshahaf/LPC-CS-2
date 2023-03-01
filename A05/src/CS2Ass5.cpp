//============================================================================
// Name        : CS2Ass5.cpp
// Author      : ShahafDan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Bus.hpp"
#include "defs.hpp"
const int filler = 50;
int main()
{
	Bus * busesPtr[filler] = {nullptr};
	int counter = 0;
		bool exists = false;
	string checker;
	string number;
	int holderIndex;

	string mfr;
	int capacity;
	int milage;
	char status;
	cout << " please input the 5 letter BUS ID" << endl;
	cin >> number;
	// while number is not 99999 or is not five digits
	while (number != "99999" /*&& number/100000 < 1 && number/100000 > 0*/) //making sure the number is not 99999 and is only 5 digits
	{
		cout << "please insert the manufacturer, capacity, milage and status of the bus" << endl;
		cin >> mfr >> capacity >> milage >> status; //makes my life ten times easier thank you guy who invented the cin option
		busesPtr[counter] = new Bus(number, mfr, capacity, milage, status);//create new bus with a non default constructor
		cout << "Bus Created" << endl;

		counter++;
		cout << " If you'd like to create a new bus, enter it's ID, if not, enter 99999" << endl;
		cin >> number;
	}
	cout<< "THANK YOU. Phase 1 ended, no more input is required" << endl << endl; //PHASE ONE ENDED - READY TO ROLL

	cout << "Enter Transaction Code: (D = Display, L = List a bus, C = Change, X = Exit)" << endl;
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
			displayHeader();//header once again
			for (int k = 0; k < filler; k++) //for each loop for each Bus Class in the array called busesPtr of Bus Classes
			{
				if(busesPtr[k] != nullptr)//if not a pointer
				{
					if(busesPtr[k]->getBusId() == checker)//if the checker (entered id) equals to the indexed bus id
						{exists = true; displayBus(busesPtr[k]);} /// if found then diplay the specific bus
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
			cin >> checker >> newStatus; //thank you god of rthe cin function
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
		cout << "Enter Transaction Code: (D = Display, L = List a bus, C = Change, X = Exit)" << endl;
				cin >> answer;
	}// end of while
	cout << "THANK YOU: END OF PHASE TWO: END OF PROGRAM: HAVE A GOOD DAY" << endl; // That is it

	/*CLEAN UP*/ //how??
	for (int g = 0; g < filler; g++)
	{
		if(busesPtr != nullptr)
		{
			delete busesPtr[g];
			busesPtr[g] = nullptr;
		}
	}

	return 0;
}
//LEFT TO DO
//Clean Up
