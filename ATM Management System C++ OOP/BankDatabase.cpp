#include "BankDatabase.h"
#include "Screen.h"
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

void BankDataBase::userAuthentication(ifstream &open_file2)
{
				int line, line2, line3;


					open_file2 >> line;					// Read the first line and store it in line variable
					open_file2 >> line2;				// Read the second line and store it in line2 variable

					while ((line == accountNumber && line2 != pin) || (line != accountNumber && line2 == pin) || (line != accountNumber && line2 != pin))
					{
						cout << "Welcome!" << endl;
						getInputStep1();
					}


					open_file2 >> line3;				// Read the third line and store it in line3 variable
					accountBalance = line3;				// Store the variable in accountBalance

}

int BankDataBase::getAccountBalance()
{
	return accountBalance;
}
