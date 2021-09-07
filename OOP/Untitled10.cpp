#include<iostream>
using namespace std;
class student {
	public:
		int marks;
		char grade;
// Parameterized Constructor
		student(int m, char g)
		{
			cout << "The Constructor is called " << endl;
			cout << "The Object is being created" << endl;
			marks = m;
			grade = g;
			cout << endl;
		}
// Member Function
		void displayResults(void)
		{
			cout << "The Member Function is called " << endl;
			cout << "Marks= " << marks << endl;
			cout << "Grade= " << grade << endl;
			cout << endl;
		}
		// Destructor declaration and definition
		~student()
		{
			cout << "The Destructor is called " << endl;
			cout << "The Object is being deleted" << endl;
		}
};
int main()
{
	student JACK(90,'A'); // Object creation and initialization
	JACK.displayResults();
	return 0;
}