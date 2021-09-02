#include <iostream>
#include <iomanip>
using namespace std;
int main( )
{
int a[5];
int b[5];
int c[10] ;
int i, j, k, temp ;
cout<<endl<<"Enter 5 elements for first array";

for(i=0;i<5;i++)
	{
	cout<<"\nENTER A NUMBER";
	cin>>a[i];
	}
	cout<<endl<<"Enter 5 elements for second array";
	for(i=0;i<5;i++)
	{
	 cout<<"\nENTER A NUMBER";
	 cin>>b[i];
	}
	
cout<<"\nFirst array:\n";
for ( i = 0 ; i <= 4 ; i++ )
	cout<<setw(5)<<a[i];
	
cout<<"\nSecond array:\n";
for ( i = 0 ; i <= 4 ; i++ )
	cout<<setw(5)<<b[i];
	
for ( i = 0 ; i <= 3 ; i++ )
	{
		 for ( j = i + 1 ; j <= 4 ; j++ )
		 {
		 if ( a[i] > a[j] )
		 {
		 temp = a[i] ;
		 a[i] = a[j] ;
		 a[j] = temp ;
		 }
		 
		if ( b[i] > b[j] )
		 {
		 temp = b[i] ;
		 b[i] = b[j] ;
		 b[j] = temp ;
		 }
		} 
	}
	
for (i=j=k=0;i<=9;)
{
	 if ( a[j] < b[k] )
	 c[i++] = a[j++] ;
	 
	 else
	 if(a[j]>b[k])
	 c[i++] = b[k++] ;
	 else
	 { c[i++]=a[j++]; ++k; } //c[i++]=b[k++], j++
	 if ( j == 5 || k == 5 )
	 break ;
}
for ( ; j <= 4 ; )
	 c[i++] = a[j++] ;
	for ( ; k <= 4 ; )
	 c[i++] = b[k++] ;
	cout<<"\nArray after sorting:\n";
	for ( i = 0 ; i <= 9 ; i++ )
	 cout<<setw(5)<<c[i] ;
}
