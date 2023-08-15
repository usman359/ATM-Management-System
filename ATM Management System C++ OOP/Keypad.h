#ifndef KEYPAD_H
#define KEYPAD_H

#include<iostream>
using namespace std;

class Keypad
{
		protected:
	int accountNumber;
	int pin;
	int accountBalance;


		public:
	void getInputStep1();
	int  getInputStep2();

	// Accessor functions
	int getAccountNumber();
	int getPIN();
	int getAccountBalance();

	// Setter functions
	void setAccountNumber(int a);
	void setPIN(int p);



};
#endif
