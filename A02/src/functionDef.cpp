/*
 * funcDefs.cpp
 *
 *  Created on: Sep 17, 2018
 *      Author: shahafdan
 */
#include <iostream>
#include <iomanip>

using namespace std;
int iterations;
void dynAlloc (int numElements, int * &arrayPtr)
{
	arrayPtr = new int[numElements]; // dynamically creating space
}

int insertionSort (int * unsortedArray, int numElements, int * sortedArray) //the insertion sort function
{
	int startScan, minIndex,minValue;
	for(int i = 0; i< numElements; i++)
	{
		sortedArray[i] = unsortedArray[i];
	}
	for (startScan = 0; startScan < numElements -1; startScan ++)
	{
		minIndex = startScan;
		minValue = sortedArray [startScan];
		for (int j = startScan +1; j < numElements; j ++)
		{
			if (sortedArray [j] < minValue)
			{
				minValue = sortedArray [j];
				minIndex = j;
				iterations++;
			}

		}
		sortedArray[minIndex] = sortedArray[startScan];
		sortedArray[startScan] = minValue;
	}
	return iterations;
}

int binarySearch (int *toSearch,int numElements, int targetValue, int &numIterations)
{
	bool found = false;
	int looker; // middle
	int borderL = 0; //low
	int borderR = numElements-1; // high
	int spot = -1; //returned value
	int counter = 0;
	while ( borderL <= borderR && found == false ) //as long as targeted value isn't found AND the low is less or equal to high
	{
		looker = (borderL + borderR)/2; // middle is the in the middle of low and high
		if(toSearch[looker] > targetValue) {borderR = looker - 1;} // redefining borders
		else if (toSearch[looker] < targetValue) {borderL = looker + 1;}//redefining borders
		else {found = true;} //targeted value found
		counter++;
	}
	if (found == false ) {spot = -1;} // making  negative value if not found
	else {spot = looker;} // or else, the spot returned  value will be the middle of the search (the spotted value)
	numIterations = counter;
	return spot;
}
int linearSearch(int *toSearch, int numElements, int targetValue, int &numIterations)
{
	bool found = false;
	int spot = 0; //spot of the targeted value
	int counter = 0;
	for (int i = 0; i<numElements; i++) // going linearly through out each element
	{
		if (toSearch[i] == targetValue)
		{
			found = true;
			spot = i;// storing the spot
			counter++;
		}
		else counter++;

	}
	if(found == false) spot = -1; // if targeted value not found, making the returned value 'spot' a negative value
	numIterations = counter; // returns the number of iterations back to the caller of main
	return spot;
}




/*
 * functionDef.cpp
 *
 *  Created on: Sep 17, 2018
 *      Author: shahafdan
 */




