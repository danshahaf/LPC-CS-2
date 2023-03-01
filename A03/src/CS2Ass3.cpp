//============================================================================
// Name        : CS2Ass3.cpp
// Author      : ShahafDan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


// Name: Shahaf Dan W10782390 CS2A3

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
#include "structures.hpp"
#include "declarations.hpp"

string studentInfo;
bool pass = false;
int counter = 0; //meant for  the student intput and output array // declare globally
int length = 100;
Student *studentPtrs = new Student[length]; //creating dynamically an array of studentstructures
	OutPut *studentOutput = new OutPut[length];// creating new output structrues array
	Input *studentInput = new Input[length];// creating new input structures array

int main() {

	fstream inputFile; //links to the input file
	inputFile.open("/Users/shahafdan/Downloads/a3data.txt", ios::in); //links to the file on the computer
	if(inputFile.is_open()) //if the file opens
	{
		cout << "File Opened Successfully" << endl;

		getline(inputFile, studentInfo, '\n');
		while(!inputFile.eof())
		{
			const char* studentInfo_Ptr;
			studentInfo_Ptr = studentInfo.c_str(); //converting the string studentInfo to array of characters

			//populating the input structures
			studentInput[counter].First = studentInfo.substr(0,9);
			studentInput[counter].Middle = studentInfo.substr(9,10);

			studentInput[counter].Last = studentInfo.substr(19,20);//should not work like that, but oh well

			string NumIDToStringInput = "";
			for(int i = 40; i<49; i++) //converting the numeric portion of the ID to a string from the character aray
				{
					NumIDToStringInput += studentInfo_Ptr[i];
					studentOutput[counter].NumericID = NumIDToStringInput;
				}
			studentInput[counter].StudentID = NumIDToStringInput;
			studentInput[counter].age = studentInfo.substr(49,52);

			/// Populating the output array
			string current_last ="";
			int completer = 20;
			if(studentInfo_Ptr[40] == 'L' || studentInfo_Ptr[40] == 'M')
			{
				studentOutput[counter].First = studentInfo.substr(0,9);
				studentOutput[counter].Middle = studentInfo_Ptr[10];
				while (studentInfo_Ptr[completer] != ' ')
				{
					current_last += studentInfo_Ptr[completer];
					completer++;
				}
				studentOutput[counter].Last = current_last;
				string NumIDToStringOutput = "";
				for(int i = 41; i<49; i++) {NumIDToStringOutput += studentInfo_Ptr[i];}
				//^^converting the numeric portion of the ID to a string from the character array
				studentOutput[counter].NumericID = NumIDToStringOutput;
				if(studentInfo_Ptr[40] == 'L') studentOutput[counter].ColDesc = "Liberal Arts";
				if(studentInfo_Ptr[40] == 'M') studentOutput[counter].ColDesc = "Music";
			}// end of if
			else
			{
				studentOutput[counter].First = "-";
				studentOutput[counter].Middle = '-';
				studentOutput[counter].Last = "-";
				studentOutput[counter].NumericID = "-";
				studentOutput[counter].ColDesc = "-";
			}

//printing the output array



			//populate student structure group array : only with liberal arts or music students (I think)
			studentPtrs[counter].First = studentInfo.substr(0,9);
			studentPtrs[counter].Middle = studentInfo_Ptr[10];
			while (studentInfo_Ptr[completer] != ' ')
							{
								current_last += studentInfo_Ptr[completer];
								completer++;
							}
			studentPtrs[counter].Last = current_last; //wha the heck is hapenning?
			string locationCodeString = "";

			for(int i = 41; i < 43; i ++) {locationCodeString += studentInfo_Ptr[i];}
			studentPtrs[counter].LocCode = stoi(locationCodeString);

			string SQNCCodeString = "";
			for(int i = 43; i < 49; i ++){SQNCCodeString += studentInfo_Ptr[i];}

			studentPtrs[counter].SQNCCode = stoi(SQNCCodeString);
			studentPtrs[counter].age = stoi (studentInput[counter].age);


			getline(inputFile, studentInfo, '\n');


			counter++;
		}//end of while

	}
	else
	{
		cout <<"ERROR" << endl; //showing an error if file dows not open
				return 0;
	}
	cout << endl << "INPUT: '\t\t'" << "OUTPUT   \t\t" << "STUDENTS  " << endl;

	for(int j = 0; j <counter; j++)
	{

		cout << studentInput[j].First<< "\t\t"<< studentOutput[j].First<< "\t\t"<< studentPtrs[j].First<<endl;
		cout << studentInput[j].Middle << "\t\t"<< studentOutput[j].Middle<< "\t\t\t"<< studentPtrs[j].Middle<<endl;
		cout << studentInput[j].Last<< "\t"<< studentOutput[j].Last<< "\t\t"<< studentPtrs[j].Last<<endl;
		cout << studentInput[j].StudentID<< "\t\t"<< studentOutput[j].NumericID<< "\t\t"<< studentPtrs[j].LocCode<<endl;
		cout << "\t\t\t "<< studentOutput[j].ColDesc<< "\t\t"<< studentPtrs[j].SQNCCode<<endl;
		cout << studentInput[j].age<< "\t\t\t-"<< " \t\t\t"<< studentPtrs[j].age<<endl;
		cout << "---------------------------------" << endl;
	}
Student * youngest = new Student;
int avgAge = avgCalcAll (studentPtrs, youngest);
cout << endl << "the average age of the entire class is: " << avgAge << endl;
cout <<"the youngest person in this class is: " << youngest->First << endl << "who is " << youngest ->age<< endl;;

 inputFile.close(); //closing file
delete[] studentPtrs; //deleting and erasing
studentPtrs = nullptr;
delete[]studentOutput;
studentOutput = nullptr;
delete[] studentInput;
studentInput = nullptr;

	return 0;
}
//TO DO
// ask why I lost points: the program works
// ask about deleting have I done wrong?
//ask about error with substring in the last name
