#include <iostream>
#include <string>

using namespace std;

int main () {
	string name;
	string city;
	
	cout << "please enter your name: ";
	getline(cin, name);
	cout << "enter the city you live in: ";
	getline(cin, city);
	
	cout << "Hello, " << name << endl;
	cout << "you live in " << city << endl;
	return 0;
}
