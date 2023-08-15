#ifndef SCREEN_H
#define SCREEN_H
#include "Keypad.h"
#include "BankDatabase.h"
#include<iostream>
#include<string>
using namespace std;

class Screen : public Keypad
{

	public:
		void displayMessage1();		// A function to display the message
		void displayMessage2();
		void displayMessage3();
};
#endif
