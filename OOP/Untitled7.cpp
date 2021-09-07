#include<iostream>
using namespace std;
class Student {
	public:
		int rollNumber;
		int marks;
		char grade;
		void printRollNo()
		{
			cout << "rollNumber = " << rollNumber << endl;
		}
		void printMarks()
		{
			cout << "Marks = " << marks << endl;
		}
		void printGrade()
		{
			cout << "Grade = " << grade << endl;
		}
};
int main()
{
	Student s1;
	s1.rollNumber = 9;
	s1.marks = 90;
	s1.grade = 'A';
	s1.printRollNo();
	s1.printMarks();
	s1.printGrade();
	return 0;
}