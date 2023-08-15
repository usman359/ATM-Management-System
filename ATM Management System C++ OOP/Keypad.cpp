#include "Keypad.h"
#include<iostream>
using namespace std;


double convertToDollar = 0.0;		// to convert the cent to dollar
void Keypad::getInputStep1()
{
			cout << "Please enter your account number: ";
			cin >> accountNumber;		// user will input the account number

			cout << "Enter your PIN: ";
			cin >> pin;					// user will input the pin

}

int Keypad::getInputStep2()
{

			int count = 500;			// to hold the count of 500 notes of $20
			int choice;					// to ask user about the choice of the menu options
			double amount;				// to hold the withdrawal amount
			int option;					// to ask user about the choice of the withdrawal options

			cin >> choice;				// user will input the choice i.e (1, 2, 3 or 4)

			switch(choice)
			{
				case 1:					// if the user enters 1 then the balace inquiry will be shown (account balance)
					cout << "\nAccount Balance: " << accountBalance << endl;
					break;

				case 2:

						do
						{

							cout << "Withdrawal options:" << endl;
							cout << "\t" << "1  -  $20" << "\t" << "4  -  $100" << endl;
							cout << "\t" << "2  -  $40" << "\t" << "5  -  $200" << endl;
							cout << "\t" << "3  -  $60" << "\t" << "6  -  Cancel transaction" << endl;
							cout << "Choose a withdrawal option (1-6): ";
							cin >> option;				// to input the choice of the withdrawal options given above

							switch(option)
							{




							case 1:
								amount = 20;
								if (amount > accountBalance)			// if the withdrawal amount is greater than the account balance the display the following messages
								{
									cout << "The withdrawal amount chosen is greater than the account balance." << endl;
									cout << "Please choose a smaller withdrawal amount." << endl;
									cout << "Welcome!" << endl;
									getInputStep1();			// Again return to step 1


									while (accountNumber != 12345 || pin != 54321)			// again validate the user
									{
										getInputStep1();			// Again return to step 1
									}


									cout << "Main menu:" << endl;
									cout << "\t" << "1  -  View my balance" << endl;
									cout << "\t" << "2  -  Withdraw cash" << endl;
									cout << "\t" << "3  -  Deposit Funds" << endl;
									cout << "\t" << "4  -  Exit" << endl;

									cout << "Enter a choice: ";
									getInputStep2();

								}

								if (amount <= 20)					// if the withdrawal amount is less than the account balance then withdraw the amount
								{									// after withdrawing return the amount
									accountBalance -= amount;
									count -= 1;						// as ATM has 500 notes of $20 so substract 1 note from the ATM
									return accountBalance;

								}
								if (count > 0)						// if 500 notes of $20 are avaliable in the ATM then simply break
								{
									break;
								}
								else								// if 500 notes of $20 are not avaliable in the ATM then simply display the message
								{
									cout << "Amount not avalaible in the bank." << endl;
									cout << "Choose a smaller withdrawal amount." << endl;
									cout << "Welcome!" << endl;
									getInputStep1();

									while (accountNumber != 12345 || pin != 54321)
									{
										getInputStep1();			// Again return to step 1
									}

									cout << "Main menu:" << endl;
									cout << "\t" << "1  -  View my balance" << endl;
									cout << "\t" << "2  -  Withdraw cash" << endl;
									cout << "\t" << "3  -  Deposit Funds" << endl;
									cout << "\t" << "4  -  Exit" << endl;

									cout << "Enter a choice: ";
									getInputStep2();
								}
								break;






							case 2:
								amount = 40;
								if (amount > accountBalance)
								{
									cout << "The withdrawal amount chosen is greater than the account balance." << endl;
									cout << "Please choose a smaller withdrawal amount." << endl;
									cout << "Welcome!" << endl;
									getInputStep1();			// Again return to step 1


									while (accountNumber != 12345 || pin != 54321)
									{
										getInputStep1();			// Again return to step 1
									}
									cout << "Main menu:" << endl;
									cout << "\t" << "1  -  View my balance" << endl;
									cout << "\t" << "2  -  Withdraw cash" << endl;
									cout << "\t" << "3  -  Deposit Funds" << endl;
									cout << "\t" << "4  -  Exit" << endl;

									cout << "Enter a choice: ";
									getInputStep2();

								}

								if (amount <= 40)
								{
									accountBalance -= amount;
									count -= 2;
									return accountBalance;

								}

								if (count > 0)
								{
									break;
								}

								else
								{
									cout << "Amount not avalaible in the bank." << endl;
									cout << "Choose a smaller withdrawal amount." << endl;
									cout << "Welcome!" << endl;
									getInputStep1();
									while (accountNumber != 12345 || pin != 54321)
									{
										getInputStep1();			// Again return to step 1
									}
									cout << "Main menu:" << endl;
									cout << "\t" << "1  -  View my balance" << endl;
									cout << "\t" << "2  -  Withdraw cash" << endl;
									cout << "\t" << "3  -  Deposit Funds" << endl;
									cout << "\t" << "4  -  Exit" << endl;

							        cout << "Enter a choice: ";
									getInputStep2();
								}
								break;




							case 3:
								amount = 60;
								if (amount > accountBalance)
								{
									cout << "The withdrawal amount chosen is greater than the account balance." << endl;
								    cout << "Please choose a smaller withdrawal amount." << endl;
									cout << "Welcome!" << endl;
									getInputStep1();			// Again return to step 1
									while (accountNumber != 12345 || pin != 54321)
																		{
										getInputStep1();			// Again return to step 1
									}
									cout << "Main menu:" << endl;
									cout << "\t" << "1  -  View my balance" << endl;
                                    cout << "\t" << "2  -  Withdraw cash" << endl;
									cout << "\t" << "3  -  Deposit Funds" << endl;
									cout << "\t" << "4  -  Exit" << endl;

									cout << "Enter a choice: ";
									getInputStep2();

								}

								if (amount <= 60)
								{
									accountBalance -= amount;
									count -= 3;
								    return accountBalance;

								}
								if (count > 0)
								{
									break;
								}
								else
								{
									cout << "Amount not avalaible in the bank." << endl;
									cout << "Choose a smaller withdrawal amount." << endl;
									cout << "Welcome!" << endl;
									getInputStep1();
									while (accountNumber != 12345 || pin != 54321)
									{
										getInputStep1();			// Again return to step 1
									}
									cout << "Main menu:" << endl;
									cout << "\t" << "1  -  View my balance" << endl;
									cout << "\t" << "2  -  Withdraw cash" << endl;
								    cout << "\t" << "3  -  Deposit Funds" << endl;
									cout << "\t" << "4  -  Exit" << endl;

									cout << "Enter a choice: ";
									getInputStep2();
								}
								break;



							case 4:
								amount = 100;
								if (amount > accountBalance)
								{
									cout << "The withdrawal amount chosen is greater than the account balance." << endl;
									cout << "Please choose a smaller withdrawal amount." << endl;
									cout << "Welcome!" << endl;
									getInputStep1();			// Again return to step 1
									while (accountNumber != 12345 || pin != 54321)
									{
										getInputStep1();			// Again return to step 1
									}
									cout << "Main menu:" << endl;
									cout << "\t" << "1  -  View my balance" << endl;
									cout << "\t" << "2  -  Withdraw cash" << endl;
									cout << "\t" << "3  -  Deposit Funds" << endl;
									cout << "\t" << "4  -  Exit" << endl;

									cout << "Enter a choice: ";
									getInputStep2();

								}

								if (amount <= 100)
								{
									accountBalance -= amount;
									count -= 5;
									return accountBalance;

								}
								if (count > 0)
								{
									break;
								}
								else
								{
									cout << "Amount not avalaible in the bank." << endl;
									cout << "Choose a smaller withdrawal amount." << endl;
									cout << "Welcome!" << endl;
									getInputStep1();
									while (accountNumber != 12345 || pin != 54321)
									{
										getInputStep1();			// Again return to step 1
								    }
									cout << "Main menu:" << endl;
									cout << "\t" << "1  -  View my balance" << endl;
									cout << "\t" << "2  -  Withdraw cash" << endl;
									cout << "\t" << "3  -  Deposit Funds" << endl;
									cout << "\t" << "4  -  Exit" << endl;

							        cout << "Enter a choice: ";
									getInputStep2();
								}
								break;



							case 5:
								amount = 200;
								if (amount > accountBalance)
								{
									cout << "The withdrawal amount chosen is greater than the account balance." << endl;
									cout << "Please choose a smaller withdrawal amount." << endl;
									cout << "Welcome!" << endl;
									getInputStep1();			// Again return to step 1
									while (accountNumber != 12345 || pin != 54321)
									{
										getInputStep1();			// Again return to step 1
									}
									cout << "Main menu:" << endl;
									cout << "\t" << "1  -  View my balance" << endl;
									cout << "\t" << "2  -  Withdraw cash" << endl;
									cout << "\t" << "3  -  Deposit Funds" << endl;
									cout << "\t" << "4  -  Exit" << endl;

								    cout << "Enter a choice: ";
									getInputStep2();

								}

								if (amount <= 200)
								{
									accountBalance -= amount;
									count -= 10;
									return accountBalance;
									if (count > 0)
									{
										break;
									}
									else
									{
										cout << "Amount not avalaible in the bank." << endl;
										cout << "Choose a smaller withdrawal amount." << endl;
										cout << "Welcome!" << endl;
										getInputStep1();
										while (accountNumber != 12345 || pin != 54321)
										{
											getInputStep1();			// Again return to step 1
										}
										cout << "Main menu:" << endl;
										cout << "\t" << "1  -  View my balance" << endl;
										cout << "\t" << "2  -  Withdraw cash" << endl;
					       				cout << "\t" << "3  -  Deposit Funds" << endl;
										cout << "\t" << "4  -  Exit" << endl;

								        cout << "Enter a choice: ";
										getInputStep2();
									}


								}
								break;

							case 6:
								break;
							}


						} while(option == 6);

				case 3:											// if the user presses the option 3 then it means that he wants to deposit an amount

						amount = 0;			// clear the amount
						cout << "Enter a deposit amount OR Press 0 to cancel the transaction: ";
						cin >> amount;							// input the amount from the user

						if (amount == 0)						// if he enters 0 then display the following messages
						{
							cout << "Main menu:" << endl;
							cout << "\t" << "1  -  View my balance" << endl;
							cout << "\t" << "2  -  Withdraw cash" << endl;
						    cout << "\t" << "3  -  Deposit Funds" << endl;
							cout << "\t" << "4  -  Exit" << endl;

					        cout << "Enter a choice: ";
							getInputStep2();
						}

						if (amount > 0)							// if the amount is greater than 0 then perform the following actions
						{
							int insert;
							cout << "Press 1 for inserting the deposit envelope into the deposit slot" << endl;

										cin >> insert;			// user will press 1 to insert the deposit envelope into the deposit slot
										while (insert != 1)
										{
											cout << "Press 1 for inserting the deposit envelope into the deposit slot" << endl;
											cin >> insert;
										}

										convertToDollar = amount/100;				// convert cents to dollars
										accountBalance += convertToDollar;			// and then add it to the account balance
										return accountBalance;

						}
						break;




				case 4:							// if the user presses option 4 then he wants to exit
					cout << "Thank You for using our ATM!" << endl;
					cout << "Welcome!" << endl;
					getInputStep1();			// Again return to step 1

					while (accountNumber != 12345 || pin != 54321)
					{
						getInputStep1();			// Again return to step 1
					}

					cout << "Main menu:" << endl;
					cout << "\t" << "1  -  View my balance" << endl;
					cout << "\t" << "2  -  Withdraw cash" << endl;
					cout << "\t" << "3  -  Deposit Funds" << endl;
					cout << "\t" << "4  -  Exit" << endl;

					cout << "Enter a choice: ";
					getInputStep2();
					


			}
}


int Keypad::getAccountNumber()
{
	return accountNumber;
}

int Keypad::getPIN()
{
	return pin;
}

void Keypad::setAccountNumber(int a)
{
	accountNumber = a;

}

void Keypad::setPIN(int p)
{
	pin = p;
}

int Keypad::getAccountBalance()
{
	return accountBalance;
}

