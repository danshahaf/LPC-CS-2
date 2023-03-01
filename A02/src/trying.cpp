//============================================================================
// Name        : Assignment2.cpp
// Author      : ShahafDan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include "declarations.hpp"
using namespace std;



int main()
{
	int numElements = 100;
		int target;
	int * unsortedArrayPtr, *sortedArrayPtr; //defining two pointers at once
	dynAlloc(numElements, unsortedArrayPtr);
	cout << "randomized Numbers printed:" << endl;
	for (int i = 0; i < numElements; i++)
	{
		unsortedArrayPtr[i] = rand() %100 +1; //populating the unsorted array with 100 random Numbers;
		if ((i +1) % 5 == 0)
		{
			cout << unsortedArrayPtr[i] << ",    " << endl;
		}
		else
		cout << unsortedArrayPtr[i] << ",    ";
	}

// works so far: print the randomized numbers
	dynAlloc(numElements, sortedArrayPtr);
	insertionSort (unsortedArrayPtr, numElements, sortedArrayPtr); //calling the function insertionSort which sorts the array
		cout << endl << "Insertion Sorting in action:" << endl;
				for(int k = 0; k<numElements; k++)
					{
						if ((k - 4) % 5 == 0 && k > 0) {cout << sortedArrayPtr [k]<< ",   " << endl;}
						else {cout << sortedArrayPtr [k]<< ",   " ;}
					}//just printed the organized numbers

	int numIter = insertionSort (unsortedArrayPtr, numElements, sortedArrayPtr); // receiving the number of iterations from the sorting function
	cout << "what number would you like to target?" << endl; //asking for what number would you like to be targeted
	cin >> target; // storing in target
	int spot = -1; /// initial value, so it'll enter the while loop


	while (spot == -1)
	{
		spot = linearSearch(sortedArrayPtr, numElements, target, numIter); // calling linear search
		if(spot == -1) {cout << "Linear Search, your value: " << target<< ", was not found" << endl;}
		else {cout << "Linear Search Search: your value:  " << target << "  is at spot #  " << spot << endl;}
		cout << numIter << " iterations " << endl;
		spot = binarySearch (sortedArrayPtr, numElements, target, numIter); // calling binary search
		if(spot == -1) {cout << "Binary Search, your value: " << target<< ", was not found" << endl;}
		else {cout << "Binary Search: your value:  " << target << "  is at spot #  " << spot << endl;}
		cout << numIter << " iterations " << endl;
		if (spot == -1) {cout <<  "please look for a different number" << endl;
		cin >> target;}
 //// the caller only allows the used to input a new numebr, only if the previous number was not found
	}


		delete [] sortedArrayPtr;
		delete[] unsortedArrayPtr;
		sortedArrayPtr = nullptr;
		unsortedArrayPtr = nullptr;



	return 0; // end of main - why does it not print anything
}

////////TO DO LIST//////

//		why does it not work for values that are not in the list
//transfer into three different files (see canvas ICE main cpp and hpp source files
