#include<iostream>
using namespace std;
class Overload {
	public:
		int add(int a,int b)
		{
			return (a+b);
		}
		float add(float a,float b)
		{
			return (a+b);
		}
		double add(double a,double b)
		{
			return (a+b);
		}
};
int main()
{
	Overload SAME;
	int a = 10;
	int b = 20;
	float c = 23.75F;
	float d = 78.987F;
	double e = 23456.879;
	double f = 33445.789645;
	cout << "Integer Addition : a + b = " << SAME.add(a,b) << endl;
	cout << "Float Addition : a + b = " << SAME.add(c,d) << endl;
	cout << "Double Addition : a + b = " << SAME.add(e,f) << endl;
	return 0;
}