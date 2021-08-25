#include <iostream>

template
void print(const T &t)
{
  std::cout << t << std::endl;
}

int main()
{
  print(1);
  print(std::string("hello world"));
  print(4.5);
  print(false);
}
