#ifndef ACCOUNT_H
#define ACCOUNT_H

#include<iostream>
#include<fstream>
#include "Keypad.h"
using namespace std;


class Account : public Keypad
{
			private:
			ofstream open_file01;				// Created a writing object


			public:
			void userInformation();				// this function holds the initial user Account information
};
#endif
