//============================================================================
// Name        : 2_Shahaf.cpp
// Author      : ShahafDan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Buss.hpp"
#include "BussManager.hpp"


int main()
{
	BussManager * bm;
	bm = new BussManager; //calling automatically default constructor and desturctor
	bm->transaction(); // call phase two public function
	bm->cleanup(); // call cleanup function
	cout << "THANK YOU: END OF PHASE TWO: END OF PROGRAM: HAVE A GOOD DAY" << endl; // That is it
	return 0;
}
//LEFT TO DO
//namespace for filler variable

