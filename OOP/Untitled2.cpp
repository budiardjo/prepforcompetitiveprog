#include<iostream>
using namespace std;
class Add_Two {
	public:
		int a,b,c;
		void Result()
		{
			c = a + b;
			cout << "Result=" << c <<endl;
		}
};
int main()
{
	Add_Two TWOADD;
//set the fields
	TWOADD.a = 99;
	TWOADD.b = 88;
	TWOADD.Result();
	return 0;
}