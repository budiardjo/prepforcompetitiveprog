#include <iostream>

template <typename T>
T add(T a, T b)
{ 
return a + b; 
}
int main(void)
{
std::cout << "The answer is: " << add(41, 1) << '\n';
return 0;
}