// erinpussy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
  //get input--enter an amount in cents
	int cents;
	cout << "Enter an amount in cents:  ";
	cin >> cents;
  //get # of dollars -- total # of cents - remainder / # of cents in a dollar
	int dollars = cents / 100;
	cout << "You can provide this change as follows:" << endl;
	cout << "dollars:  " << dollars << endl;

  //get # of quarters 
	int quarters = cents % 100 / 25;
	cout << "quarters:  " << quarters << endl;

  //get # of dimes 
	int dimes = cents % 25 / 10;
	cout << "dimes:  " << dimes << endl;

 //get number of nickels 
	int nickels = (cents % 25) % 10 / 5;
	cout << "nickels:  " << nickels << endl;

 //get # of pennies
	int pennies = cents % 5;
	cout << "pennies:  " << pennies << endl;

	return 0;

}   

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
