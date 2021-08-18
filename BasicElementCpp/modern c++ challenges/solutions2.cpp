/* Problem
 * 
 * 2. Greatest common divisor
Write a program that, given two positive integers, will calculate and print the greatest
common divisor of the two*/

/*Solutions
 * 
 * 
 * Greatest common divisor
The greatest common divisor (gcd in short) of two or more non-zero integers, also known as
the greatest common factor (gcf), highest common factor (hcf), greatest common measure
(gcm), or highest common divisor, is the greatest positive integer that divides all of them.
There are several ways the gcd could be computed; an efficient method is Euclid's
algorithm. For two integers, the algorithm is:*/


	gcd(a,0) = a;
	gcd(a,b) = gcd(b, a mod b);
	
	unsigned int gcd(unsigned int a, unsigned int b)
	{
		while (b != 0) {
		unsigned int r = a % b;
		a = b;
		b = r;
		}
		return a;
	}


