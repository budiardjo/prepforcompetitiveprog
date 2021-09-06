#include <iostream>

int add(int a, int b)
{ 
return a + b;
}
int Sub(int a, int b)
{ 
return a - b; 
}

int main(void)
{
std::cout << "The answer is: " << add(41, 1) << '\n';
std::cout << "The answer is: " << Sub(43, 1) << '\n';
return 0;
}