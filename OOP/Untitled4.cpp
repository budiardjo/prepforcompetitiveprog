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
	Student s1,s2;
	s1.rollNumber = 9;
	s1.marks = 90;
	s1.grade = 'A';
	s1.printRollNo();
	s1.printMarks();
	s1.printGrade();
	s2.rollNumber = 10;
	s2.marks = 99;
	s2.grade = 'A';
	s2.printRollNo();
	s2.printMarks();
	s2.printGrade();
	return 0;
}