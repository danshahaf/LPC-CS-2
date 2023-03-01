/*
 * structures.hpp
 *
 *  Created on: Sep 24, 2018
 *      Author: shahafdans
 *
 */

#ifndef STRUCTURES_HPP_
#define STRUCTURES_HPP_
#include <string>
using namespace std;
struct Input
{
	string First;
	string Middle;
	string Last;
	string StudentID;
	string age;
};

struct OutPut
{
	string First;
	char Middle;
	string Last;
	string NumericID;
	string ColDesc;

};

struct Student
{
	string First;
	char Middle;
	string Last;
	int LocCode;
	int SQNCCode;
	short int age;


};


#endif /* STRUCTURES_HPP_ */
