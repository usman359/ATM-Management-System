#include "Screen.h"
#include<iostream>
#include<string>
using namespace std;

void Screen::displayMessage1()
{
		cout << "Welcome!" << endl;

}

void Screen::displayMessage2()
{
		int choice;			// to hold the choice
		cout << "Main menu:" << endl;
		cout << "\t" << "1  -  View my balance" << endl;
		cout << "\t" << "2  -  Withdraw cash" << endl;
		cout << "\t" << "3  -  Deposit Funds" << endl;
		cout << "\t" << "4  -  Exit" << endl;

		cout << "Enter a choice: ";
		//cin >> choice;
}

void Screen::displayMessage3()
{
	cout << "Insert a deposit envelope into the deposit slot" << endl;
}
