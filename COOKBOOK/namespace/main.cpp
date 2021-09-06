#include "my_library.h"
#include <iostream>
int main(void)
{
library_name::my_api();
library_name::config::show_hex = true;
library_name::my_api();
return 0;
}