#include <iostream>
#include <cstring>

using namespace std;
class Person {
	public:
		int Age;
		char Gender;
		char Name[20];
		void setName(char *name)
		{
			strcpy(Name,name);
		}
		void setAge(int age)
		{
			Age = age;
		}
		void setGender(char gender)
		{
			Gender = gender;
		}
		void getName()
		{
			cout << "Name= " << Name << endl;
		}
		void getAge()
		{
			cout << "Age= " << Age << endl;
		}
		void getGender()
		{
			cout << "Gender= " << Gender <<endl;
		}
};

int main()
{
	Person person[20];
// Initializing the data members of the first object in the array
	person[0].setName("Jackie");
	person[0].setAge(40);
	person[0].setGender('M');
// Initializing the data members of the second object in the array
	person[1].setName("Suchi");
	person[1].setAge(28);
	person[1].setGender('F');
// Calling the method members of the first object in the array
	person[0].getName();
	person[0].getAge();
	person[0].getGender();
// Calling the method members of the second object in the array
	person[1].getName();
	person[1].getAge();
	person[1].getGender();

	return 0;
}