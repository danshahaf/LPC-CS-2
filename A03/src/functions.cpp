/*
 * functions.cpp
 *
 *  Created on: Sep 24, 2018
 *      Author: shahafdan
 */
#include <iostream>
#include <iomanip>
using namespace std;
#include "structures.hpp"
#include "declarations.hpp"

int avgCalcAll (Student* studentPtr, Student *&lowPtr)
{
	int avgAge = 0;
	int total = 0;
	int counter = 0;
	int position = 0;
	int value = 10000;
	for(int i = 1; i <=100; i++)
	{
		if(studentPtr[i-1].age > 0){counter++;} // counting how many student are there that are not null
		total += studentPtr[i-1].age; // counting the total age of the student that are not null

	}
	avgAge = (total/counter); //calculating average
	for(int k = 0; k < 100; k++)
	{

		if(value < studentPtr[k].age && studentPtr[k].age > 0) // alterin for the lowest age in the array
		{
			value = studentPtr[k].age;
			position = k;
		}
	}
	lowPtr->age = studentPtr[position].age;
	lowPtr->First = studentPtr[position].First;
 return avgAge;
}
/*int ageCalcArtsAndMusic(Student* studentPtr[], Student *lowPtr)
{
	return 0;
}*/

