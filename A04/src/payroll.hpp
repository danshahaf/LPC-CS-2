/*
 * payroll.hpp
 *
 *  Created on: Oct 3, 2018
 *      Author: shahafdan
 */
// parallel to a declaration file (just of a class)
#ifndef PAYROLL_HPP_
#define PAYROLL_HPP_

class payroll {
private:
	float hours;
	float rate;
	float regPay;
	float otPay;
public:
	// SETTERS
	void setHours(float);
	void setRate(float);

	//GETTERS
	float getHours();
	float getRate();
	float getRegPay();
	float getOTPay();

	// MEMBER FUNCTIONS
	float calcRegPay(float, float);
	float calcOTPay(float, float);

	//CONSTRUCTOR IN CPP FILE
	payroll();

	// DESTRUCTOR IN CPP FILE
	~payroll();
};

#endif /* PAYROLL_HPP_ */
