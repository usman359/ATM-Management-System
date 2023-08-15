#include "Screen.h"
#include "BankDatabase.h"
#include "Keypad.h"
#include "Account.h"
#include<iostream>
#include<fstream>
using namespace std;

int main()
{

        Screen screen;					// Created a screen object
        screen.displayMessage1();		// The screen will first display Step 1 message

        BankDataBase bankdatabase;		// Created a BankDataBase object
        bankdatabase.getInputStep1();	// calling the first step from the bankdatabase object

        Account account;				// Created an Account object
        account.userInformation();		// calling the user Information function from the account object

        ifstream open_file2;			// Created a file reading object
        open_file2.open("/home/usman/eclipse-workspace/19i-0455_A/database.txt", ios::in);



        bankdatabase.userAuthentication(open_file2);			// calling the userAuthentication object from the bankdatabase object
        open_file2.close();										// closing the file after successful reading of the data from the file

        screen.displayMessage2();								// The screen will display Step 2 message



        ofstream open_file4;									// Created a file writing object
        open_file4.open("/home/usman/eclipse-workspace/19i-0455_A/transaction.txt");
        open_file4 << 12345 << endl;				// Account Number
        open_file4 << 54321 << endl;				// PIN


        while (true)										// this will run infinite times
        {
        	open_file4 << bankdatabase.getInputStep2() << endl;				// Balance after withdrawal
        	screen.displayMessage2();										// The screen will display Step 2 message
        }
        open_file4.close();




return 0;
}
