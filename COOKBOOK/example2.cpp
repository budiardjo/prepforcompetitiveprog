#include <iostream>

void add(int a, int &b)
{ b += a; }

int main(void)
{
int a = 41, b = 1;
add(a, b);
std::cout << "The answer is: " << b << '\n';
return 0;
}