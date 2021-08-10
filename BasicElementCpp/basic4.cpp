#include <iostream>

using namespace std;

//named constant

const double CENTIMETERS_PER_INCH = 2.54;
const int INCHES_PER_FOOT = 12;

int main () {
	
	
	// declare variable
	int feet, inches;
	int totalInches;
	double centimeters;
	
	// Statements step 1 - 7
	
	cout << "Enter two integers, one for feet and " << "one for inches: ";
	cin >> feet >> inches;
	cout << endl; 
	
	cout << "The Numbers you entered are" << feet << " for feet and " << inches << "for inches "<<"for inches" << endl;
	
	totalInches = INCHES_PER_FOOT * feet + inches;
	
	cout << "the total number of inches =" <<totalInches << endl;
	
	centimeters= CENTIMETERS_PER_INCH * totalInches;
	
	cout << "The Number of centimeters =" << centimeters << endl;
	
	return 0;
}
