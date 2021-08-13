#include <iostream>
using namespace std;

void displayMessage () {
	cout << "hello from the function displayMessage.\n";
}

int main() {
	cout << "hello from main.\n";
	displayMessage();
	cout << "back in function main again.\n";
	return 0;
}
