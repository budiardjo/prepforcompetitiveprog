#include <iostream>
#include <cstring>
using namespace std;

class Student
{
	public:
		char collegename[30];
		
	public:
	Student()
	{
		strcpy(collegename, "COMPUTER");
	}
	
	int student_number;
	char name[20];

	private:
		int marks;
		
	public:
		virtual void get_college_name()
		{
		cout << "College Name: "<< collegename << endl;
		}
		void get_name_number()
		{
			cout << "Student Number: " << student_number << endl;
			cout << "Student Name: " << name << endl;
		}
		void get_marks()
		{
		cout << "Student Marks: " << marks << endl;
		}
};

class Freshmen: public Student
{
	public:
		void class_grade()
		{
		cout << "Student Status: Freshmen Student" << endl;
		}
};

class Sophomore: public Student
{
	public:
		void get_college_name()
		{
		strcpy (collegename, "MECHANICAL");
		cout << "College Name: " << collegename << endl;
		}
};

int main()
{
	//Fang is an instance of object Student
	Student Fang;
	
	//Assigning values to member variables
	
	Fang.student_number = 2018189001;
	strcpy (Fang.name,"Zhang Yunxia");
	
	//Can’t assign values to marks, as it is private variable
	
	//Values accessed through constructor
	cout << "College Name: " << Fang.collegename << endl;
	
	//Calling the method
	Fang.get_name_number();
	
	//Inheritance: subclass declaration
	Freshmen Yan;
	Yan.get_college_name();
	Yan.class_grade();
	
	//Polymorphism
	Student *Liu;
	Sophomore Zhang;
	Liu = &Zhang;
	Liu -> get_college_name();
	return 0;
}