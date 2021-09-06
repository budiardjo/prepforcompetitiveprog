#include <iostream>
int sub(int a, int b)
{
	return a + b;
}
int main(void)
{
	std::cout << "The answer is: " << sub(41, 1) << '\n';
	return 0;
}