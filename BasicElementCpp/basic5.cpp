#include <iostream>
#include <cmath>
#include <string>


using namespace std;

const double PI = 3.14159256;

int main () {
	
	double sphereRadius;
	double sphereVolume;
	double point1X, point1Y;
	double point2X, point2Y;
	double distance;
	
	string str;
	
	cout << "Line14: Enter the redius of sphere: ";
	cin >> sphereRadius;
	cout << endl;
	
	sphereVolume = ( 4 /3 ) * PI * pow(sphereRadius, 3);
	
	cout << "Line 18: The VOlume of the sphere is: " << sphereVolume << endl << endl;
	
	cout << "Line19: Enter the cordinates of two " << "points in the X-Y Plane: ";
	
	cin >> point1X >> point1Y >> point2X >> point2Y;
	cout << endl;
	
	distance = sqrt(pow(point2X - point1X, 2) + pow(point2Y - point1Y,2));
	
	cout << "Line 23: The distance between the points " << "(" << point1X << ", " << point1Y << ") and " << "(" << point2X << ", " << point2Y << ") is: " << distance << endl << endl; //Line 23
 
	str = "Programming with C++"; //Line 24
 
	cout << "Line 25: The number of characters, "  << "including blanks, in \n \"" << str  << "\" is: " << str.length() << endl; //Line 25
 
	return 0;
 
 
 
}
