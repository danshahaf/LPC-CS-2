//============================================================================
// Name        : CS2Ass10_Shahaf.cpp
// Author      : ShahafDan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <iomanip>
#include <iterator>
#include <map>


// SIDE NOTE: COMMAND LINE IS AT >>> RUN TAB AT THE TOP >>> RUN CONFIGURATION >>> ARGUMENTS TAB >>> INSERT WANTED NUMBER
using namespace std;
string spanishData[] = {"Hola", "Profesor", "Computadora", "Raton", "Teclado", "Programa", "Tiempo", "Lapiz", "Borrador", "Expendiente", "Direccion", "Memoria", "Pantalla", "Lista", "Clase"};
string englishTrans[] = {"Hello", "Professor", "Computer", "Mouse", "Keyboard", "Program", "Time", "Pencil", "Earaser", "File", "Address", "Memory", "Screen", "List", "Class"};
void populateMap (int, map <string, string> &); //declare the populating function


//====================================================
int main(int counter, char * dictionaryLength[]) //TODO Convert to int??
{

	string stringLength;
	int intLength;
	for (int p = 0; p < counter; p++) // in case more than one number is passed
	{
		stringLength = dictionaryLength[p]; //settingt the string form to be the value (of the for loop) passed by the command line


		if (p != 0)
		{
			cout << stringLength << endl << endl << endl; // prints the length of dictionary
			intLength = stoi (stringLength); //the last number past by the command line will be the length, converting to int form
		}
	}


	map <string, string> translator; //decaler a map
	populateMap (intLength, translator); //calling the populating map function

	string word;
	bool found = false;
	map <string, string> :: iterator mapiter; //define a map

	cout << "OUR DICTIONARY CONTAINS" << endl << "=======================" << endl;
	for (mapiter = translator.begin(); mapiter != translator.end(); mapiter++) //search if word is eve found
	{
		cout << "English: " << mapiter -> second << ".    Spanish: " << mapiter -> first << "." << endl;
	}


	cout << endl << endl;
	cout << "Please, capitalized only the first letter in each entered word" << endl;
	cout << "Enter An English Word You Would Like To Translate To Spanish" << endl << endl;
	cin >> word;
	while (word != "Stop") //structured loop
	{
		for (mapiter = translator.begin(); mapiter != translator.end(); mapiter++) //search if word is eve found
		{
			if(mapiter -> second == word)
			{
				found = true;
				cout << "English: " << word << ".    Spanish: " << mapiter -> first << "." << endl;
			}
		}

		if (!found)
		{
			cout << "NOT FOUND" << endl;
		}

		cout << "Enter An English Word You Would Like To Translate To Spanish" << endl;
		cin >> word; //asking again before exiting, to see if we need to exit or not
		found = false; //
	}

	cout << "THANKS HAVE A GOOD DAY" << endl;
	return 0;
}


//================================================================
void populateMap (int mapSlots, map <string, string> &translator)
{
	if (mapSlots > 15 || mapSlots < 1) // TODO Add or if argument is missing
	{
		cout << "non valid argument" << endl;
		string message = "exception thrown, exiting program now";
		throw (message);
		exit (1); //exits
	}
	else
	{
		for (int i = 0; i < mapSlots; i++)
		{
			translator.insert(make_pair(spanishData[i], englishTrans[i])); //populating with values from arrays
		}
	}
}

//TODO
//pass arguments to main
