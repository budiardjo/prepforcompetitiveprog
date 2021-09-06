#ifndef MY_LIBRARY
#define MY_LIBRARY
#include <iostream>
#include <iomanip>
namespace library_name
{
namespace config
{
inline bool show_hex = false;
}
void my_api()
{
if (config::show_hex) {
std::cout << std::hex << "The answer is: " << 42 << '\n';
}
else {
std::cout << std::dec << "The answer is: " << 42 << '\n';
}
}
}
#endif