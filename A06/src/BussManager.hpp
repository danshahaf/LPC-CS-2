/*
 * BussManager.hpp
 *
 *  Created on: Oct 28, 2018
 *      Author: shahafdan
 */

#ifndef BUSSMANAGER_HPP_
#define BUSSMANAGER_HPP_


#include <string>
#include "Buss.hpp"

const int container = 50;

class BussManager
{

private:
	Buss * busesPtr[container];
	void displayHeader();
	void displayBus(Buss*);


public:
	void transaction();
	void cleanup();
	BussManager();
	~BussManager();
};

#endif /* BUSSMANAGER_HPP_ */
