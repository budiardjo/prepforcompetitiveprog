#include <queue>
#include <iostream>

int main(void)
{
std::queue<int> my_queue;
my_queue.emplace(42);
std::cout << "The answer is: " << my_queue.front() << '\n';
my_queue.pop();
return 0;
}