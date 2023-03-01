//============================================================================
// Name        : CS2Ass4.cpp
// Author      : ShahafDan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Payroll.hpp"
// let the destructor be the default
//getter are meant to call private variables from classes
// do not call the destructor
float input;
int main() {
	payroll employee;
	cout << "Enter hours: " << endl;
	cin >> input;
	while(input >= 0)
	{
		employee.setHours(input);
		cout << "Enter hourly rate: " << endl;
		cin >> input;
		employee.setRate(input);
		cout << "Hours: " << employee.getHours();
		cout << ", Rate: " << employee.getRate() << endl;
		//new line
		float otPay = 0.0;
		float regPay = 0.0;
		regPay = employee.calcRegPay(employee.getHours(), employee.getRate());
		otPay = employee.calcOTPay(employee.getHours(), employee.getRate());
		cout << "Regular pay: " << regPay;
		cout << ", Overtime pay: " << otPay;
		cout << ", Total pay: " << (regPay + otPay) << endl;
		cout << "Enter hours: " << endl;
		cin >> input;
	}

	//cin
	return 0;
}
