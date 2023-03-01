//============================================================================
// Name        : CS2Ass7_Shahaf.cpp
// Author      : ShahafDan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <iomanip>
#include <string>
#include <fstream>
#include <sstream>
#include "Vehicle.hpp"
#include "Bus.hpp"
#include "Railcar.hpp"

string busInfo;
const int length = 50; //unchanged
int counter = 0;
Vehicle * vehiclePtr[length] = {nullptr};

string ID; //general vehicle variable
string mfr; //general vehicle variable
int cap; //general vehicle variable
char status; //general vehicle variable

char type; //to determine bus or railcar

int milage; //bus variables
string tire;//bus variables
string fuel; //bus variables

int power; //railroads variables
string motor; //railroads variables
string wdate; //railroads variables



int main()
{
	fstream dataFile; //creating object of fstream
	dataFile.open("/Users/shahafdan/Downloads/a7data.txt", ios::in); //opening
	if(dataFile.is_open()) //successfully opened dataFile
	{
		cout  << "File opened successfully" << endl<< endl << endl; // file opens
		cout << "Vehicle Report" <<  endl << " -------------------" << endl;
		//getline (dataFile, busInfo, '\n');
		while(!dataFile.eof())
		{
			counter ++;
			//istringstream divider(busInfo);
			//divider >> ID >> mfr >> cap >> status >> type;
			dataFile >> ID >> mfr >> cap >> status >> type;
			if (type == 'b') // if type of vehicle is bus
			{
				dataFile >> milage >> tire >> fuel;
				vehiclePtr[counter-1] = new Bus(ID, mfr, cap, status, milage, tire, fuel); //creating a new BUS, same array of vehicles
				vehiclePtr[counter-1]->displayHeader();
				vehiclePtr[counter-1]->displayVehicleInfo();

			}
			else // else if type of vehicle is a railroad
			{
				dataFile >> power >> motor >> wdate;
				vehiclePtr[counter-1] = new Railcar(ID, mfr, cap, status, power, motor, wdate); //creating a new Railcar, same array of vehicles
				vehiclePtr[counter-1]->displayHeader();
				vehiclePtr[counter-1]->displayVehicleInfo();
			}
			//getline (dataFile, busInfo, '\n'); //incrementing
			//ws (divider);

			//counter++;

		} // end of input
		dataFile.close(); // closing input file



		///printed side note
		cout << endl << endl<< endl<< endl<<endl<<endl<< " ========================================== " << endl;
		cout << "-------- This is an attempt (unsuccessful) to follow" << endl
				<< " the spec and print the pointer array of  " << endl
				<< "vehicles in a foor loops ----------" << endl ;

		 //printing stage
		for (int i = 0; i< counter-1; i++)
		{
			if(vehiclePtr[i] != nullptr)
			{
				vehiclePtr[i]->displayHeader();
				vehiclePtr[i]->displayVehicleInfo();
				delete vehiclePtr[i]; //cleaning up
				cout << endl;
			}// end if
		}//end for

	}//end bigger if
	else // if file fails to open
	{
		cout << "ERROR, file did not open" << endl;
	}



//	//deleting and cleaning up
//	for(int p = 0; p < length; p++)
//	{
//		if(vehiclePtr[p] != nullptr)
//		{
//			delete vehiclePtr[p];
//			vehiclePtr[p] = nullptr;
//		}
//
//	}
	return 0;
}
