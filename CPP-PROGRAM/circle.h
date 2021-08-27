/***************************************************************
* This is the interface file that defines the class Circle. *
* It gives declaration of data members and member functions. *
* This file will be included at the top of the implementation *
* and application files. *
***************************************************************/
#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include <cassert>
#include "circle.h"
using namespace std;
// Class Definition
class Circle
{
private:
double radius;
public:
Circle (double radius); // Parameter constructor
Circle (); // Default constructor
Circle (const Circle& circle); // Copy constructor
~Circle (); // Destructor
void setRadius (double radius); // Mutator function
double getRadius () const; // Accessor function
double getArea () const; // Accessor function
double getPerimeter () const; // Accessor function
};
#endif