#include <stdio.h>
void sort( int array[], int length) ;
void mergeSort( int array[], int temp[], int left, int right) ;
void merge( int array[], int temp[], int left, int right, int rightEndIndex) ;
int main()
{
int scores[] = { 50 , 65 , 99 , 87 , 74 , 63 , 76 , 100 , 92 };
int length = sizeof ( scores) / sizeof ( scores[ 0 ]);
sort( scores, length);
int i;
for ( i = 0 ; i < length; i++)
{
printf( "%d," , scores[ i]);
}
return 0 ;
}
void sort( int array[], int length)
{
int temp[ length];
mergeSort( array, temp, 0 , length - 1 );
}
void mergeSort( int array[], int temp[], int left, int right)
{
if ( left < right)
{
int center = ( left + right) / 2 ;
mergeSort( array, temp, left, center); // Left merge sort
mergeSort( array, temp, center + 1 , right); // Right merge sort
merge( array, temp, left, center + 1 , right); // Merge two ordered arrays
}
}
/**
Combine two ordered list into an ordered list
temp : Temporary array
left :    Start the subscript on the left
right :  Start the subscript on the right
rightEndIndex : End subscript on the right
*/
void merge( int array[], int temp[], int left, int right, int rightEndIndex)
{
int leftEndIndex = right - 1 ; // End subscript on the left
int tempIndex = left; // Starting from the left count
int elementNumber = rightEndIndex - left + 1 ;
while ( left <= leftEndIndex && right <= rightEndIndex)
{
if ( array[ left] <= array[ right])
temp[ tempIndex++] = array[ left++];
else
temp[ tempIndex++] = array[ right++];
}
while ( left <= leftEndIndex)
{
// If there is element on the left
temp[ tempIndex++] = array[ left++];
}
while ( right <= rightEndIndex)
{
// If there is element on the right
temp[ tempIndex++] = array[ right++];
}
// Copy temp to array
int i;
for ( i = 0 ; i < elementNumber; i++)
{
array[ rightEndIndex] = temp[ rightEndIndex];
rightEndIndex--;
}
}
