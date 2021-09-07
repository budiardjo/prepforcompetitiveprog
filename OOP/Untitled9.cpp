#include<iostream>
using namespace std;
class day {
	public:
		int date,month,year;
		day()
		{
			date = 1;
			month = 1;
			year = 2018;
		}
};
int main()
{
	day TODAY;
	cout << "Date is :" << TODAY.date << endl;
	cout << "Month is :" << TODAY.month << endl;
	cout << "Year is :" << TODAY.year << endl;
	return 0;
}