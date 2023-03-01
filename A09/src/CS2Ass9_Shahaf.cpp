//============================================================================
// Name        : CS2Ass9_Shahaf.cpp
// Author      : ShahafDan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "LL.hpp"

int main() {

	LL theLL;

	theLL.push_back("aaaaa");
	theLL.push_back("bbbbb");
	theLL.debug();
	/// so push_back works fine

	theLL.push_front("ccccc");
	theLL.push_front("ddddd");
	theLL.push_front("eeeee");
	theLL.debug();

	theLL.display_nodes();
	cout <<"main exiting" << endl;

	return 0;
}
