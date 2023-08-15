#ifndef BANKDATABASE_H
#define BANKDATABASE_H
#include<iostream>
#include<string>
#include<fstream>
#include "Keypad.h"
using namespace std;

class BankDataBase : public Keypad
{

		public:
	void userAuthentication(ifstream &obj);		// A function to authenticate the user
	int getAccountBalance();

};
#endif
