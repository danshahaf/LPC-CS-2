//============================================================================
// Name        : xyz.cpp
// Author      : s
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


	int randomNumber;
	int length;
	int sub;
	int subLength;

int main() {
	cout << "how many numbers would you like in your array" << endl;
	cin >> length;//setting the length of the array
	int randomNumbers[length];//declaring the length of the array
	for (int i = 0; i<length; i++)// for loop to populate the array with random numbers
	{
		randomNumber = rand () % 100 +1;
		randomNumbers[i] = randomNumber;
		cout << randomNumbers[i] << endl;
	}
	subLength = length; //since I want to use the exact length later without
	//getting into trouble, I am creating a variable called subLength to hold the numerical length of the array
	cout << "now sort the numbers" << endl;//now sorting
	for(int i= sizeof(randomNumbers); i >=0; i--)//double for loop to sort everything
	{


	for (int j = 0; j<length; j++)
	{
		if(randomNumbers[j]>randomNumbers[j+1])
		{
			sub = randomNumbers [j];
			randomNumbers[j] = randomNumbers[j+1];
			randomNumbers[j+1] = sub;
		}
	}
	length--;
	}
//testing
	for(int k = 0; k<subLength; k++)
	{
		cout << "Sorted " << randomNumbers [k]<< endl;
	}
return 0;
}



/// Do as two function BubbleSorting (array, int)
///dont forget to also do the insertion sort
