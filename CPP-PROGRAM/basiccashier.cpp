// Understanding structures
#include <iostream>
using namespace std;
int main() {
	struct item {
		char item_name[10];
		float price;
		char manufacturer[40];
		int item_no;
	};
//Initialization of Biscuit structure variable
	struct item Biscuit = {
		"SweetBest",
		7.5,
		"Qingdao Biscuits Ltd",
		9341
	};
	struct item Candy;
//Reading values for members of Candy
	cout << "Enter the item_name for Candy " << endl;
	cin >> Candy.item_name;
	cout << "Enter the price of candy " << endl;
	cin >> Candy.price;
	cout << "Enter the Manufacturer name " << endl;
	cin >> Candy.manufacturer;
	cout << "Enter the item number "<< endl;
	cin >> Candy.item_no;
//Displaying Biscuit information to screen
	cout << endl << "Biscuit Information " << endl;
	cout << "Biscuit Name: " << Biscuit.item_name << endl;
	cout << "Biscuit Price: " << Biscuit.price << endl;
	cout << "Biscuit Manufacturer: " << Biscuit.manufacturer << endl;
	cout << "Biscuit Item Number: " << Biscuit.item_no << endl;
//Displaying Candy information to screen
	cout << endl << "Candy Information " << endl;
	cout << "Candy Name: " << Candy.item_name << endl;
	cout << "Candy Price: " << Candy.price << endl;
	cout << "Candy Manufacturer: " << Candy.manufacturer << endl;
	cout << "Candy Item Number: "<< Candy.item_no << endl;
	return 0;
}