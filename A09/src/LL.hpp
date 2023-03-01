/*
 * LL.hpp
 *
 *  Created on: Dec 3, 2018
 *      Author: shahafdan
 */
#include <string>
#include <iomanip>
#include <iostream>
#ifndef LL_HPP_
#define LL_HPP_
using namespace std;


class LL
{

private:
	struct singleNode
	{
		string dataContained;
		singleNode *next; //am I sure about singleNode here??
	};

	singleNode *head;

public:
	void push_front (string);
	void push_back (string);
	void display_nodes();
	void debug();
	LL();

};


#endif /* LL_HPP_ */
