#include <iostream>

using namespace std;

int main () {
	int length, width, area;
	
	cout << "this program calculates the area of a";
	cout << "rectangle.\n";
	cout << "enter the length and width of the rectangle";
	cout << "separated by a space.\n";
	cin >> length >> width;
	area = length * width;
	cout << " the area of the reactangle is " << area << endl;
	return 0;
}
