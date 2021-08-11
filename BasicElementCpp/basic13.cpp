
#include <iostream>
int max( int arrays[], int length)
{
int i;
for ( i = 0 ; i < length - 1 ; i++)
{
if ( arrays[ i] > arrays[ i + 1 ]) // swap
{
int temp = arrays[ i];
arrays[ i] = arrays[ i + 1 ];
arrays[ i + 1 ] = temp;
}
}
int maxValue = arrays[ length - 1 ];
return maxValue;
}
int main()
{
int scores[] = { 60 , 50 , 95 , 80 , 70 };
int length = sizeof ( scores) / sizeof ( scores[ 0 ]);
int maxValue = max( scores, length);
printf( "Max Value =  %d\n" , maxValue);
}
