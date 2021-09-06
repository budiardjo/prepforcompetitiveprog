#include <iostream>
int main(void)
{
auto answer = 41;
std::cout << "The answer is: " << ++answer << '\n';
std::cout << "The answer is: " << answer++ << '\n';
return 0;
}