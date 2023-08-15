#include "Account.h"
#include<iostream>
#include<fstream>
using namespace std;

void Account::userInformation()
{
	open_file01.open("/home/usman/eclipse-workspace/19i-0455_A/database.txt", ios::out);

		open_file01 << 12345 << endl;				// Account Number
	        open_file01 << 54321 << endl;				// PIN
	        open_file01 << 5000 << endl;				// Balance
}
