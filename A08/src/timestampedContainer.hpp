/*
 * timestampedContainer.hpp
 *
 *  Created on: Nov 19, 2018
 *      Author: shahafdan
 */

#ifndef TIMESTAMPEDCONTAINER_HPP_
#define TIMESTAMPEDCONTAINER_HPP_
#include <string>
#include <ctime>
#include <iomanip>
#include <iostream>
using namespace std;

template <class keyVal, class dataVal>

class timestampedContainer
{

private:
	struct element
	{
		keyVal k;
		dataVal d;
		string timestamp;
	};
	int currentPosition;
	int maxSize;
	element * elementPtr;

public:
	void getElement (int, int&, string&, string&);
	void insertElement(int, string);
	void deleteContainer();
	timestampedContainer(int);
};

//int elementCounter = 0;
template <class keyVal, class dataVal>
void timestampedContainer<keyVal , dataVal>::getElement (int elementNumber, int &kv, string &dv, string &ts) //get element
{
	if(elementNumber < currentPosition && elementNumber >= 0 )
	{
		cout << "VALIDITY APPROVED" << endl;
		//TODO //reset and return the new values; // check if code below is ok
		kv = elementPtr[elementNumber].k;
		dv = elementPtr[elementNumber].d;
		ts = elementPtr[elementNumber].timestamp;
	}
	else
	{
		cout << "ERROR: number is not within the required interval, exception in now thrown \n" << endl;
		//TODO Throw an exception //check if code below works
		//exit (1);
		string message = "not on interval, exception thrown \n";
		throw message;
	}
}

template <class keyVal, class dataVal>
void timestampedContainer<keyVal , dataVal>::insertElement (int kv, string dv) //insertion
{
	//finding the time stamp >>> code given from the professor
	time_t t;
	t = time(0);
	char* ct;
	ct = ctime (&t);
	string ts = ct;
	if(currentPosition >= maxSize)
	{
		string message = "ARRAY IS ALREADY FULL, no additional element could be added. \n";
		throw message;
	}
	else
	{
		elementPtr[currentPosition].k = kv;
		elementPtr[currentPosition].d = dv;
		elementPtr[currentPosition].timestamp = ts;

		currentPosition++;
	}

}

template <class keyVal, class dataVal>
void timestampedContainer<keyVal , dataVal>::deleteContainer() //deletion
{
	delete[] elementPtr; // deleting the pointer array of structures
}

template <class keyVal, class dataVal>
timestampedContainer<keyVal , dataVal>::timestampedContainer(int size) // non default constructor
{
	maxSize = size;
	elementPtr = new element[size];
	currentPosition = 0; //check

}
#endif /* TIMESTAMPEDCONTAINER_HPP_ */

