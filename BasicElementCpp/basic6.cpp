#include <iostream>
#include <iomanip>

using namespace std;

const double INTEREST_RATE = 0.015;

int main () {
	
	double creditCardBalance;
	double payment;
	double balance;
	double penalty;
	
	cout << fixed << showpoint << setprecision(2);
	
	cout << "Line 12: Enter credit card balance: "; //Line 12
	cin >> creditCardBalance; //Line 13
	cout << endl;
	
	cout << "Line 15: Enter the payment: "; //Line 15
	cin >> payment; //Line 16
	cout << endl;
	
	balance = creditCardBalance - payment;
	
	if (balance > 0) //Line 19
		penalty = balance * INTEREST_RATE; //Line 20
		
	cout << "Line 21: The balance is: $" << balance << endl; //Line 21	 
	cout << "Line 22: The penalty to be added to your " << "next month bill is: $" << penalty << endl;  //Line 22
			 
 return 0;
	
	
	
	}
