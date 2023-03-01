/*
 * payroll.cpp
 *
 *  Created on: Oct 3, 2018
 *      Author: shahafdan
 */

#include "payroll.hpp"

 //SETTERS
void payroll::setHours(float hoursWorked)
{hours = hoursWorked;}
void payroll::setRate(float ratePayed)
{rate = ratePayed;}

//GETTERS
float payroll::getHours()
{return hours;}
float payroll::getRate()
{return rate;}
float payroll::getRegPay()
{return regPay;}
float payroll::getOTPay()
{return otPay;}

//METHOD FUNCTIONS
float payroll::calcRegPay(float hours, float rate)
{
	float regPay;
	if (hours <= 40.0){regPay = hours * rate;}
	else {regPay = 40 * rate;}

	return regPay;
}
float payroll::calcOTPay(float hours, float rate)
{
	float otPay;
	if(hours > 40){otPay = (hours-40.0)*(rate*1.5);}
	else{otPay = 0.0;}

	return otPay;
}
payroll::payroll() {
	// TODO Auto-generated constructor stub
		hours = 0.0;
		rate = 0.0;
}
payroll::~payroll() {
	// TODO Auto-generated destructor stub
}

