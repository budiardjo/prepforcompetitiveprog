#include <iostream>

using namespace std;

int main () {
	
	int counter;
	int sum;
	int N;
	
	cout << "Enter age number of positive " << "integers to be add: ";
	cin >> N;
	sum = 0;
	cout << endl;
	
	for (counter = 1 ; counter <= N; counter++)
		sum = sum + counter;
		
	
	cout << "Line 14: The sum of the first " << N
	 << " positive integers is " << sum 
	 << endl; //Line 14
	 return 0; //Line 15
}
