#include<iostream>

using namespace std;
class Student {
	public:
		int rollNumber;
	private:
		int marks;
	public:
		char grade;
	private:
		void printRollNo()
		{
			cout << "rollNumber = " << rollNumber << endl;
		}
	public:
		void printMarks()
		{
			marks = 90;
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
// s1.marks = 90; Not possible because private
	s1.grade = 'A';
// s1.printRollNo(); Not possible because private
	s1.printMarks();
	s1.printGrade();
	return 0;
}