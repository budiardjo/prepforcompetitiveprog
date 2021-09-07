#include<iostream>
using namespace std;
class student {
	public:
		int marks;
		student(int m);
};

student::student(int m)
{
	marks = m;
	cout << "Constructor :" << marks << endl;
}

int main()
{
	student JACK(89),JILL(90);
	return 0;
}