/***************************************************************
* A program that prints a boxed greeting using a void function *
***************************************************************/
#include <iostream>
using namespace std;
/***************************************************************
* Function definition for the greeting function. This is a void *
* function with no parameters that creates a three-line message. *
* The function returns nothing to its caller. It has only a side *
* effect (displaying three lines) *
***************************************************************/
void greeting ( )
{
cout <<"*******************" << endl;
cout <<"* Hello Friends *" << endl;
cout <<"*******************" ;
return;
}



int main ( )
{
greeting(); // Calling the greeting function (expression statement)
return 0;
}
